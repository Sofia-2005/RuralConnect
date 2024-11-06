//SALIDAS 
const int PWMA= 25;
const int A01= 26;
const int A02= 27;

const int PWMB= 32;
const int A01_B= 12;
const int A02_B= 14;

//encoder motor 1
#define encoder_CHA 19
#define encoder_CHB 18
#define CTE_MOTOR 390.5//374

volatile double T = 0;
volatile double Periodo = 1000000;
volatile double Periodo_0 = 1000000;
volatile double Periodo_1 = 1000000;
volatile double Periodo_2 = 1000000;
volatile double Tant = 0;
volatile double counter = 0;
volatile double vel_ant = 0;
//Definicion de constantes 
const int pwmFrequency = 500;
const int pwmResolution = 8; 

//variables 
// horario=1 antihorario= 0;
bool giro=1;
int dutyCycle= 0; //(0-255)% varible que depende del pwm (0-100)%
bool leyendoGiro = 1; 
int pwm= 20;  //(0-100)% varible para cambiar el valor de pwm (0-100)%
double velocidad=0;
double posicion=0;

void IRAM_ATTR ISR_encoder(){
    T = micros();

    if(digitalRead(encoder_CHA) == HIGH){
        Periodo_0 = T - Tant;
        Tant = T;

        if(digitalRead(encoder_CHB) == LOW){
            Periodo_0 = (-1)*Periodo_0;
            counter--;
        }
        else {
            counter++;
        }

        //Filtro mediana  
        if (((Periodo_0>Periodo_1)&&(Periodo_0<Periodo_2))||
            ((Periodo_0<Periodo_1)&&(Periodo_0>Periodo_2))){
              Periodo=Periodo_0;
            }
        if (((Periodo_1>Periodo_0)&&(Periodo_1<Periodo_2))||
            ((Periodo_1<Periodo_0)&&(Periodo_1>Periodo_2))){
              Periodo=Periodo_1;
            }
        if (((Periodo_2>Periodo_0)&&(Periodo_2<Periodo_1))||
            ((Periodo_2<Periodo_0)&&(Periodo_2>Periodo_1))){
              Periodo=Periodo_2;
            }
        Periodo_2=Periodo_1;
        Periodo_1=Periodo_0;
    }
}
void lecturaDatos(){
    if (Serial.available() > 0) {
    String entrada = Serial.readStringUntil('\n');  // Lee la entrada hasta el salto de línea
    entrada.trim();  // Elimina los espacios

    if (leyendoGiro) {
      giro = entrada.toInt();  // Convertir a entero
      if (giro == 0 || giro == 1) {
        Serial.print("Giro ingresado: ");
        Serial.println(giro);
        Serial.println("Ingrese el valor PWM (0-100):");
        leyendoGiro = false;  // Cambia el estado para leer el PWM
      } else {
        Serial.println("Valor de giro inválido. Ingrese 0 o 1.");
      }
    } else {
      pwm = entrada.toInt();  // Convertir a entero
      if (pwm >= 0 && pwm <= 100) {
        Serial.print("PWM ingresado: ");
        Serial.println(pwm);

        // Aquí puedes usar los valores de "giro" y "pwm" para controlar tu dispositivo
        Serial.print("Giro: ");
        Serial.println(giro);
        Serial.print("PWM: ");
        Serial.println(pwm);

        // Reiniciar para pedir nuevamente el giro
        Serial.println("Ingrese el giro (0 o 1):");
        leyendoGiro = true;  // Cambia el estado para leer el giro nuevamente
      } else {
        Serial.println("Valor PWM inválido. Ingrese un número entre 0 y 255.");
      }
    }
  }
}

void adjustPWM() {
  int dutyCycle= map(pwm, 0, 100, 0, 255); // Mapea 0-511 a 25%-85% //ACA DEBE DEPENDER DEL TRANSFORMED VALUE

  ledcWrite(PWMA, dutyCycle);
}

void controlPins() {
  //CASO HACIA ADELANTE 
  if (giro==1) {
  digitalWrite(A01, HIGH);  // Pin normalmente bajo, ahora alto
  digitalWrite(A02, LOW);   // Pin normalmente alto, ahora bajo

  } else {
  digitalWrite(A01, LOW);   // Pin normalmente bajo, mantiene bajo
  digitalWrite(A02, HIGH);  // Pin normalmente alto, mantiene alto

  }
}

double GetEncoderSpeed(){
  double vel=0;   
  vel = 360000000.0/(CTE_MOTOR*Periodo);
  // if(vel>0){
  //   vel=vel-55.92; //le quitamos el offset
  // }
  // else{
  //   vel=vel+72.95;
  // } 
  //if(abs(vel)>800)vel=vel_ant;
  vel_ant = vel;
  return vel;
}

double GetEncoderPosition(){
  double pos=0;
  pos = counter/CTE_MOTOR*360.0;
  return pos;
}
void setup() {
  pinMode(encoder_CHA,INPUT_PULLDOWN);
  pinMode(encoder_CHB,INPUT_PULLDOWN);
  attachInterrupt(encoder_CHA, ISR_encoder, HIGH);

  //configuracion pwm
  ledcAttach(PWMA, pwmFrequency, pwmResolution);
  // Configuración de los pines de control
  
  pinMode(A01, OUTPUT);
  pinMode(A02, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  velocidad= GetEncoderSpeed();
  posicion= GetEncoderPosition();

  lecturaDatos();
  adjustPWM();
  controlPins();

  Serial.print(" | Sentido: ");
  Serial.print(giro);
  Serial.print(" | PWM: ");
  Serial.print(pwm);
  Serial.print(" | velocidad: ");
  Serial.print(velocidad);
  Serial.print(" | posicion: ");
  Serial.println(posicion);

  delay(1000);
}
