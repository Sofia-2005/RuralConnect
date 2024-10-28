//{{NO_DEPENDENCIES}}
// Archivo de inclusión generado de Microsoft Visual C++.
// Usado por app.rc
int main() {
    SerialPort^ serialPort = gcnew SerialPort("COM5", 115200);  // Asegúrate de que el puerto y baud rate sean los correctos
    serialPort->Open();

    while (true) {
        String^ nmeaSentence = serialPort->ReadLine();  // Leer una línea completa del puerto serial
        if (nmeaSentence->StartsWith("$GPGGA")) {
            Console::WriteLine("Recibido: " + nmeaSentence);  // Imprimir o procesar la línea recibida
            // Aquí puedes almacenar o procesar la cadena `nmeaSentence`
        }
    }

    serialPort->Close();
    return 0;
}