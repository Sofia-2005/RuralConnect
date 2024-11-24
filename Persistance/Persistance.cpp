#include "pch.h"

#include "Persistance.h"

using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace RuralConnect;


void RCPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Passenger^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Passenger^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

void RCPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();

    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        //damos la orden se serealizar los objetos que queremos
        formatter->Serialize(file, persistObject);

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr)file->Close();
    }
}

Object^ RCPersistance::Persistance::LoadPassengersXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Passenger^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Passenger^>::typeid);
            result = (List<Passenger^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

Object^ RCPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;

    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
}

void RCPersistance::Persistance::Persist_RUTA_XMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<String^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<String^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::Load_RUTA_XmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<String^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<String^>::typeid);
            result = (List<String^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

void RCPersistance::Persistance::PersistDriversFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Driver^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::LoadDriversXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Driver^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            result = (List<Driver^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

void RCPersistance::Persistance::Persist_Ruta_Fija_XML_File(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Driver^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::Load_Ruta_Fija_XML_File(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Driver^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            result = (List<Driver^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

void RCPersistance::Persistance::Persist_Driver_XML_File(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Driver^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::Load_Driver_XML_File(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Driver^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Driver^>::typeid);
            result = (List<Driver^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

void RCPersistance::Persistance::Persist_Passenger_XML_File(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Passenger^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Passenger^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::Load_Passenger_XML_File(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Passenger^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Passenger^>::typeid);
            result = (List<Passenger^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

void RCPersistance::Persistance::Persist_Claim_XML_File(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Claim^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Claim^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ RCPersistance::Persistance::Load_Claim_XML_File(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Claim^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Claim^>::typeid);
            result = (List<Claim^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

// FUNCIONES PARA LA BASE DE DATOSSSSSSSSSSSSSS

SqlConnection^ RCPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "luisitoguapo123";
    String^ serverName = "a20216480.c3ugbnmxzkjf.us-east-1.rds.amazonaws.com";
    conn->ConnectionString = "Server=" + serverName + ";Database = Prueba_db;User ID = admin; Password = " +
        password + ";";
    conn->Open();
    return conn;
}

void RCPersistance::Persistance::AddPassenger(Passenger^ robot)
{
    int robotId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD

        String^ sqlStr = "dbo.usp_Add_Passenger_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Address", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@DesiredDestination", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@Level", System::Data::SqlDbType::VarChar, 30);


        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);

        cmd->Parameters->Add("@REASON", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);

        cmd->Prepare();

        cmd->Parameters["@Address"]->Value = robot->Address;
        cmd->Parameters["@DesiredDestination"]->Value = robot->DesiredDestination;
        cmd->Parameters["@Level"]->Value = robot->Level;


        cmd->Parameters["@NAME"]->Value = robot->Name;
        cmd->Parameters["@LASTNAME"]->Value = robot->LastName;
        cmd->Parameters["@DNI"]->Value = robot->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = robot->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = robot->Username;
        cmd->Parameters["@PASSWORD"]->Value = robot->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = robot->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = robot->UbiActual;

        cmd->Parameters["@REASON"]->Value = robot->claim->Reason;
        if (robot->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = robot->Photo;


        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();


    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }

}

List<Passenger^>^ RCPersistance::Persistance::QueryAllPassengers()
{
    List<Passenger^>^ robotsList = gcnew List<Passenger^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Passengers";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Passenger^ robot = gcnew Passenger();


            robot->Address = reader["Address"]->ToString();
            robot->DesiredDestination = reader["DesiredDestination"]->ToString();
            robot->Level = reader["Level"]->ToString();
            

            robot->Name = reader["NAME"]->ToString();
            robot->LastName = reader["LASTNAME"]->ToString();
            robot->DNI = reader["DNI"]->ToString();
            robot->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            robot->Username = reader["USERNAME"]->ToString();
            robot->Password = reader["PASSWORD"]->ToString();
            robot->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            robot->UbiActual = reader["UBI_ACTUAL"]->ToString();

            robot->claim->Reason = reader["REASON"]->ToString();
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                robot->Photo = (array<Byte>^)reader["PHOTO"];


            robotsList->Add(robot);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robotsList;
}

void RCPersistance::Persistance::UpdatePassenger(Passenger^ robot)
{

    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Update_Passenger_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Address", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@DesiredDestination", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@Level", System::Data::SqlDbType::VarChar, 30);
        

        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);

        cmd->Parameters->Add("@REASON", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);

        cmd->Prepare();

        cmd->Parameters["@Address"]->Value = robot->Address;
        cmd->Parameters["@DesiredDestination"]->Value = robot->DesiredDestination;
        cmd->Parameters["@Level"]->Value = robot->Level;
        

        cmd->Parameters["@NAME"]->Value = robot->Name;
        cmd->Parameters["@LASTNAME"]->Value = robot->LastName;
        cmd->Parameters["@DNI"]->Value = robot->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = robot->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = robot->Username;
        cmd->Parameters["@PASSWORD"]->Value = robot->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = robot->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = robot->UbiActual;

        cmd->Parameters["@REASON"]->Value = robot->claim->Reason;
        if (robot->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = robot->Photo;


        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

}

void RCPersistance::Persistance::DeletePassenger(String^ UserNAme)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_Passenger_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);

        cmd->Prepare();

        cmd->Parameters["@USERNAME"]->Value = UserNAme;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

}

Passenger^ RCPersistance::Persistance::QueryPassengerByUserName(String^ Passsenger_username)
{
    Passenger^ robot;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_Query_Passenger_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);

        cmd->Prepare();

        cmd->Parameters["@USERNAME"]->Value = Passsenger_username;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();
        robot = gcnew Passenger();
        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            
            
            robot->Address = reader["Address"]->ToString();
            robot->DesiredDestination = reader["DesiredDestination"]->ToString();
            robot->Level = reader["Level"]->ToString();


            robot->Name = reader["NAME"]->ToString();
            robot->LastName = reader["LASTNAME"]->ToString();
            robot->DNI = reader["DNI"]->ToString();
            robot->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            robot->Username = reader["USERNAME"]->ToString();
            robot->Password = reader["PASSWORD"]->ToString();
            robot->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            robot->UbiActual = reader["UBI_ACTUAL"]->ToString();

            robot->claim->Reason = reader["REASON"]->ToString();

            if (!DBNull::Value->Equals(reader["PHOTO"]))
                robot->Photo = (array<Byte>^)reader["PHOTO"];

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robot;
}

void RCPersistance::Persistance::AddUser(User^ robot)
{

    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();


        String^ sqlStr = "dbo.usp_Add_User_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);



        cmd->Prepare();

        cmd->Parameters["@NAME"]->Value = robot->Name;
        cmd->Parameters["@LASTNAME"]->Value = robot->LastName;
        cmd->Parameters["@DNI"]->Value = robot->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = robot->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = robot->Username;
        cmd->Parameters["@PASSWORD"]->Value = robot->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = robot->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = robot->UbiActual;


        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();


    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }

}

List<User^>^ RCPersistance::Persistance::QueryAllUsers()
{
    List<User^>^ robotsList = gcnew List<User^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Users";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            User^ robot = gcnew User();

            robot->Name = reader["NAME"]->ToString();
            robot->LastName = reader["LASTNAME"]->ToString();
            robot->DNI = reader["DNI"]->ToString();
            robot->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            robot->Username = reader["USERNAME"]->ToString();
            robot->Password = reader["PASSWORD"]->ToString();
            robot->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            robot->UbiActual = reader["UBI_ACTUAL"]->ToString();
            
            

            robotsList->Add(robot);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robotsList;
}

void RCPersistance::Persistance::UpdateUser(User^ robot)
{
   
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Update_User_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);
        

        cmd->Prepare();

        cmd->Parameters["@NAME"]->Value = robot->Name;
        cmd->Parameters["@LASTNAME"]->Value = robot->LastName;
        cmd->Parameters["@DNI"]->Value = robot->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = robot->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = robot->Username;
        cmd->Parameters["@PASSWORD"]->Value = robot->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = robot->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = robot->UbiActual;
        
        

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

void RCPersistance::Persistance::DeleteUser(String^ UserNAme)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_User_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@UserName"]->Value = UserNAme;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

User^ RCPersistance::Persistance::QueryUserByUserName(String^ User_username)
{
    User^ robot;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_Query_USER_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@UserName"]->Value = User_username;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            robot = gcnew User();

            robot->Name = reader["NAME"]->ToString();
            robot->LastName = reader["LASTNAME"]->ToString();
            robot->DNI = reader["DNI"]->ToString();
            robot->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            robot->Username = reader["USERNAME"]->ToString();
            robot->Password = reader["PASSWORD"]->ToString();
            robot->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            robot->UbiActual = reader["UBI_ACTUAL"]->ToString();
            
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robot;
}

void RCPersistance::Persistance::AddClaim(Claim^ robot)
{
    
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        
        String^ sqlStr = "dbo.usp_Add_Claim_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@REASON", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        
        cmd->Prepare();

        cmd->Parameters["@REASON"]->Value = robot->Reason;
        cmd->Parameters["@UserName"]->Value = robot->UserName;
        

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    
}

List<Claim^>^ RCPersistance::Persistance::QueryAllClaims()
{
    List<Claim^>^ robotsList = gcnew List<Claim^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Claims";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Claim^ robot = gcnew Claim();
            robot->Reason = reader["REASON"]->ToString();
            robot->UserName = reader["UserName"]->ToString();
            
            
            robotsList->Add(robot);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robotsList;
}

void RCPersistance::Persistance::UpdateClaim(Claim^ robot)
{
    
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Update_Claim_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@REASON", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        
        cmd->Prepare();
        cmd->Parameters["@REASON"]->Value = robot->Reason;
        cmd->Parameters["@UserName"]->Value = robot->UserName;
        

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

void RCPersistance::Persistance::DeleteClaim(String^ UserNAme)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_Claim_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar,100);
        cmd->Prepare();
        cmd->Parameters["@UserName"]->Value = UserNAme;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

Claim^ RCPersistance::Persistance::QueryClaimByUserName(String^ User_username)
{
    Claim^ robot;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_Query_Claim_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@UserName"]->Value = User_username;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            robot = gcnew Claim();

            robot->Reason = reader["REASON"]->ToString();
            robot->UserName = reader["UserName"]->ToString();
            
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robot;
}

void RCPersistance::Persistance::AddPSolicitud(Solicitud^ robot)
{
    
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        
        String^ sqlStr = "dbo.usp_Add_Solicitud_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@INICIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DESTINO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        
        
        cmd->Prepare();

        cmd->Parameters["@INICIO"]->Value = robot->inicio;
        cmd->Parameters["@DESTINO"]->Value = robot->destino;
        cmd->Parameters["@USERNAME"]->Value = robot->UserName;
        
        cmd->ExecuteNonQuery();
        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    
}

List<Solicitud^>^ RCPersistance::Persistance::QueryAllSolicitudes()
{
    List<Solicitud^>^ robotsList = gcnew List<Solicitud^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Solicitudes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Solicitud^ robot = gcnew Solicitud();
            robot->inicio = reader["INICIO"]->ToString();
            robot->destino = reader["DESTINO"]->ToString();
            robot->UserName = reader["USERNAME"]->ToString();
            
            robotsList->Add(robot);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robotsList;
}

void RCPersistance::Persistance::UpdateSolicitud(Solicitud^ robot)
{
    
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Update_Solicitud_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@INICIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DESTINO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        

        cmd->Prepare();

        cmd->Parameters["@INICIO"]->Value = robot->inicio;
        cmd->Parameters["@DESTINO"]->Value = robot->destino;
        cmd->Parameters["@USERNAME"]->Value = robot->UserName;
        
        

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

void RCPersistance::Persistance::DeleteSolicitud(String^ UserNAme)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_Solicitud_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = UserNAme;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

Solicitud^ RCPersistance::Persistance::QuerySolicitudByUserName(String^ Passsenger_username)
{
    Solicitud^ robot;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_Query_Solicitud_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = Passsenger_username;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            robot = gcnew Solicitud();

            robot->inicio = reader["INICIO"]->ToString();
            robot->destino = reader["DESTINO"]->ToString();
            robot->UserName = reader["USERNAME"]->ToString();

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robot;
}

void RCPersistance::Persistance::AddPTrip(Trip^ robot)
{
    
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        //String^ sqlStr = "INSERT INTO ROBOT_WAITER(name, brand, model, speed, load_capacity, "+
        //    "status) VALUES('" + 
        //    robot->Name + "','" + robot->Brand + "','" + robot->Model + "'," + robot->Speed + "," +
        //    robot->LoadCapacity + ",'A')";
        String^ sqlStr = "dbo.usp_Add_Trip_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        
        cmd->Parameters->Add("@DATE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DEPARTURETIME", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@AVAILABLESEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@ESTIMATEDPRICE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TRIPSTATE", System::Data::SqlDbType::Int);

        cmd->Parameters->Add("@PASSENGERS_name", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@DRIVER_name", System::Data::SqlDbType::VarChar, 100);

        cmd->Parameters->Add("@PTS_X_TRIP", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PTS_Y_TRIP", System::Data::SqlDbType::VarChar, 1000);
        

        cmd->Prepare();

       
        cmd->Parameters["@DATE"]->Value = robot->Date;
        cmd->Parameters["@DEPARTURETIME"]->Value = robot->DepartureTime;
        cmd->Parameters["@AVAILABLESEATS"]->Value = robot->AvailableSeats;
        cmd->Parameters["@ESTIMATEDPRICE"]->Value = robot->EstimatedPrice;
        cmd->Parameters["@TRIPSTATE"]->Value = robot->TripState;

        String^ suma = "";
        for (int i = 0; i < robot->Passengers->Count; i++) {
            if (i == 0) {
                suma = suma + robot->Passengers[i]->Username;
            }
            else {
                suma = suma + "@@@" +  robot->Passengers[i]->Username;
            }
        }

        cmd->Parameters["@PASSENGERS_name"]->Value = suma;
        cmd->Parameters["@DRIVER_name"]->Value = robot->Driver_Name;

        cmd->Parameters["@PTS_X_TRIP"]->Value = robot->puntos_X_viaje;
        cmd->Parameters["@PTS_Y_TRIP"]->Value = robot->puntos_Y_viaje;
        
        
        

        
        

        
        

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    
}

List<Trip^>^ RCPersistance::Persistance::QueryAllTrips()
{
    List<Trip^>^ robotsList = gcnew List<Trip^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Trips";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {

            Trip^ robot = gcnew Trip();
            array<String^>^ delimitador = gcnew array<String^> { "@@@" };

            robot->Date = reader["DATE"]->ToString();
            robot->DepartureTime = Convert::ToInt32(reader["DEPARTURETIME"]->ToString());
            robot->AvailableSeats = Convert::ToInt32(reader["AVAILABLESEATS"]->ToString());
            robot->EstimatedPrice = Convert::ToInt32(reader["ESTIMATEDPRICE"]->ToString());
            robot->TripState = Convert::ToInt32(reader["TRIPSTATE"]->ToString());




            
            String^ nombres = reader["PASSENGERS_name"]->ToString();
            List<String^>^ lista_pasajero = gcnew List<String^>(reader["ROUTE"]->ToString()->Split(delimitador, StringSplitOptions::None));
            for each (String^ nombre in lista_pasajero) {
                robot->Passengers->Add( Persistance::QueryPassengerByUserName(nombre) );
            }


            robot->Driver_Name = reader["DRIVER_name"]->ToString();

            robot->puntos_X_viaje = reader["PTS_X_TRIP"]->ToString();
            robot->puntos_Y_viaje = reader["PTS_Y_TRIP"]->ToString();

            

            



            robotsList->Add(robot);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robotsList;
}

void RCPersistance::Persistance::UpdateTrip(Trip^ robot)
{
    
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Update_Trip_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


        cmd->Parameters->Add("@DATE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DEPARTURETIME", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@AVAILABLESEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@ESTIMATEDPRICE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TRIPSTATE", System::Data::SqlDbType::Int);

        cmd->Parameters->Add("@PASSENGERS_name", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@DRIVER_name", System::Data::SqlDbType::VarChar, 100);

        cmd->Parameters->Add("@PTS_X_TRIP", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PTS_Y_TRIP", System::Data::SqlDbType::VarChar, 1000);


        cmd->Prepare();


        cmd->Parameters["@DATE"]->Value = robot->Date;
        cmd->Parameters["@DEPARTURETIME"]->Value = robot->DepartureTime;
        cmd->Parameters["@AVAILABLESEATS"]->Value = robot->AvailableSeats;
        cmd->Parameters["@ESTIMATEDPRICE"]->Value = robot->EstimatedPrice;
        cmd->Parameters["@TRIPSTATE"]->Value = robot->TripState;


        String^ suma = "";
        for (int i = 0; i < robot->Passengers->Count; i++) {
            if (i == 0) {
                suma = suma + robot->Passengers[i]->Username;
            }
            else {
                suma = suma + "@@@" + robot->Passengers[i]->Username;
            }
        }


        cmd->Parameters["@PASSENGERS_name"]->Value = suma;
        cmd->Parameters["@DRIVER_name"]->Value = robot->Driver_Name;

        cmd->Parameters["@PTS_X_TRIP"]->Value = robot->puntos_X_viaje;
        cmd->Parameters["@PTS_Y_TRIP"]->Value = robot->puntos_Y_viaje;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

void RCPersistance::Persistance::DeleteTrip(String^ UserNAme)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_Trip_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = UserNAme;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    
}

Trip^ RCPersistance::Persistance::QueryTripByUserName(String^ Passsenger_username)
{
    Trip^ robot;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_Query_Trips_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@UserName", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@UserName"]->Value = Passsenger_username;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            Trip^ robot = gcnew Trip();
            array<String^>^ delimitador = gcnew array<String^> { "@@@" };

            robot->Date = reader["DATE"]->ToString();
            robot->DepartureTime = Convert::ToInt32(reader["DEPARTURETIME"]->ToString());
            robot->AvailableSeats = Convert::ToInt32(reader["AVAILABLESEATS"]->ToString());
            robot->EstimatedPrice = Convert::ToInt32(reader["ESTIMATEDPRICE"]->ToString());
            robot->TripState = Convert::ToInt32(reader["TRIPSTATE"]->ToString());


            
            String^ nombres = reader["PASSENGERS_name"]->ToString();
            List<String^>^ lista_pasajero = gcnew List<String^>(reader["PASSENGERS_name"]->ToString()->Split(delimitador, StringSplitOptions::None));
            for each (String ^ nombre in lista_pasajero) {
                robot->Passengers->Add(Persistance::QueryPassengerByUserName(nombre));
            }


            robot->Driver_Name = reader["DRIVER_name"]->ToString();

            robot->puntos_X_viaje = reader["PTS_X_TRIP"]->ToString();
            robot->puntos_Y_viaje = reader["PTS_Y_TRIP"]->ToString();

            


            
            
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return robot;
}

void RCPersistance::Persistance::AddDriverTable(Driver^ driver)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_Add_DRIVER_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        //Atributos del driver
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NUMVIAJESCOM", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);

        //Atributos del vehículo
        cmd->Parameters->Add("@MODEL", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@SEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PLATE_NUMBER", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LICENSE", System::Data::SqlDbType::Image);

        //Atributos del viaje
        cmd->Parameters->Add("@PUNTOSXVIAJE", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYVIAJE", System::Data::SqlDbType::VarChar, 1000);
            
        cmd->Parameters->Add("@DATE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@AVAILABLESEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PASSENGERS", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@ESTIMATEDPRICE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TRIPSTATE", System::Data::SqlDbType::Int);


        //Atributos del solicitud
        cmd->Parameters->Add("@INICIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DESTINO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASAJEROSOLI", System::Data::SqlDbType::VarChar, 100);

        //Atributos del route
        cmd->Parameters->Add("@PUNTOSXRUTA", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYRUTA", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSXRUTAFIJO", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYRUTAFIJO", System::Data::SqlDbType::VarChar, 1000);

        cmd->Prepare();


        cmd->Parameters["@NAME"]->Value = driver->Name;
        cmd->Parameters["@LASTNAME"]->Value = driver->LastName;
        cmd->Parameters["@DNI"]->Value = driver->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = driver->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = driver->Username;
        cmd->Parameters["@PASSWORD"]->Value = driver->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = driver->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = driver->UbiActual;
        cmd->Parameters["@NUMVIAJESCOM"]->Value = driver->NumberOfCompletedTrips;
        if (driver->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = driver->Photo;

        cmd->Parameters["@MODEL"]->Value = driver->vehicle->Model;
        cmd->Parameters["@SEATS"]->Value = driver->vehicle->Seats;
        cmd->Parameters["@PLATE_NUMBER"]->Value = driver->vehicle->PlateNumber;

        if (driver->vehicle->License == nullptr)
            cmd->Parameters["@LICENSE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LICENSE"]->Value = driver->vehicle->License;

        cmd->Parameters["@PUNTOSXVIAJE"]->Value = driver->viaje->puntos_X_viaje;
        cmd->Parameters["@PUNTOSYVIAJE"]->Value = driver->viaje->puntos_Y_viaje;
        cmd->Parameters["@DATE"]->Value = driver->viaje->Date;
        cmd->Parameters["@AVAILABLESEATS"]->Value = driver->viaje->AvailableSeats;
        //cmd->Parameters["@PASSENGERS"]->Value = driver->viaje->Passengers;
        String^ sum = "";
        sum = "";
        for each (Passenger^ p in driver->viaje->Passengers) {
            if (sum == "") {
                sum = sum + p->Username;
            }
            else {
                sum = sum + "@@@" + p->Username;
            }
        }
        cmd->Parameters["@PASSENGERS"]->Value = sum;
        cmd->Parameters["@ESTIMATEDPRICE"]->Value = driver->viaje->EstimatedPrice;
        cmd->Parameters["@TRIPSTATE"]->Value = driver->viaje->TripState;

        cmd->Parameters["@INICIO"]->Value = driver->solicitud->inicio;
        cmd->Parameters["@DESTINO"]->Value = driver->solicitud->destino;
        cmd->Parameters["@PASAJEROSOLI"]->Value = driver->solicitud->pasajero->Username;

        cmd->Parameters["@PUNTOSXRUTA"]->Value = driver->Rutasa->Puntos_x_volatil;
        cmd->Parameters["@PUNTOSYRUTA"]->Value = driver->Rutasa->Puntos_y_volatil;

        sum = "";
        for each (String ^ p in driver->Rutasa->Puntos_x_fijo) {
            if (sum == "") {
                sum = sum + p;
            }
            else {
                sum = sum + "@@@" + p;
            }
        }
        cmd->Parameters["@PUNTOSXRUTAFIJO"]->Value = sum;


        sum = "";
        for each (String ^ p in driver->Rutasa->Puntos_y_fijo) {
            if (sum == "") {
                sum = sum + p;
            }
            else {
                sum = sum + "@@@" + p;
            }
        }
        cmd->Parameters["@PUNTOSYRUTAFIJO"]->Value = sum;

        //Paso 3: Ejecutar la sentencia de BD   
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
}

List<Driver^>^ RCPersistance::Persistance::QueryAllDriversTable()
{
    List<Driver^>^ driversList = gcnew List<Driver^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_All_Drivers";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {

            array<String^>^ delimitador = gcnew array<String^> { "@@@" };

            // Usamos Split y directamente creamos una lista
            //driver->Rutasa-> = gcnew List<String^>(reader["ROUTE"]->ToString()->Split(delimitador, StringSplitOptions::None));*/

            Driver^ driver = gcnew Driver();
            driver->Name = reader["NAME"]->ToString();
            driver->LastName = reader["LASTNAME"]->ToString();
            driver->DNI = reader["DNI"]->ToString();
            driver->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            driver->Username = reader["USERNAME"]->ToString();
            driver->Password = reader["PASSWORD"]->ToString();
            driver->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            driver->UbiActual = reader["UBI_ACTUAL"]->ToString();
            driver->NumberOfCompletedTrips = Convert::ToInt32(reader["NUMVIAJESCOM"]->ToString());

            if (!DBNull::Value->Equals(reader["PHOTO"]))
                driver->Photo = (array<Byte>^)reader["PHOTO"];

            driver->vehicle->Model = reader["MODEL"]->ToString();
            driver->vehicle->Seats = Convert::ToInt32(reader["SEATS"]->ToString());
            driver->vehicle->PlateNumber = reader["PLATE_NUMBER"]->ToString();

            if (!DBNull::Value->Equals(reader["LICENSE"]))
                driver->vehicle->License = (array<Byte>^)reader["LICENSE"];

            driver->viaje->puntos_X_viaje = reader["PUNTOSXVIAJE"]->ToString();
            driver->viaje->puntos_Y_viaje = reader["PUNTOSYVIAJE"]->ToString();
            driver->viaje->Date = reader["DATE"]->ToString();
            driver->viaje->AvailableSeats = Convert::ToInt32(reader["AVAILABLESEATS"]->ToString());
            //driver->viaje->Passengers = reader["PASSENGERS"]->ToString();
            List<Passenger^>^ pasa = gcnew List<Passenger^>();
            List<String^>^ aaa = gcnew List<String^>(reader["PASSENGERS"]->ToString()->Split(delimitador, StringSplitOptions::None));
            for each (String ^ p in aaa) {
                pasa->Add(QueryPassengerByUserName(p));
            }
            driver->viaje->Passengers = pasa;
            driver->viaje->EstimatedPrice = Convert::ToInt32(reader["ESTIMATEDPRICE"]->ToString());
            driver->viaje->TripState = Convert::ToInt32(reader["TRIPSTATE"]->ToString());

            driver->solicitud->inicio = reader["INICIO"]->ToString();
            driver->solicitud->destino = reader["DESTINO"]->ToString();
            driver->solicitud->pasajero = QueryPassengerByUserName(reader["PASAJEROSOLI"]->ToString());

            driver->Rutasa->Puntos_x_volatil = reader["PUNTOSXRUTA"]->ToString();
            driver->Rutasa->Puntos_y_volatil = reader["PUNTOSYRUTA"]->ToString();
            //driver->Rutasa-> Puntos_x_fijo= reader["PUNTOSXRUTAFIJO"]->ToString();
            driver->Rutasa->Puntos_x_fijo = gcnew List<String^>(reader["PUNTOSXRUTAFIJO"]->ToString()->Split(delimitador, StringSplitOptions::None));
            //driver->Rutasa-> Puntos_y_fijo= reader["PUNTOSYRUTAFIJO"]->ToString();
            driver->Rutasa->Puntos_y_fijo = gcnew List<String^>(reader["PUNTOSYRUTAFIJO"]->ToString()->Split(delimitador, StringSplitOptions::None));

            driversList->Add(driver);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return driversList;
}

void RCPersistance::Persistance::UpdateDriverTable(Driver^ driver)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_Update_DRIVER_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        //<<<<<<< HEAD
                //Atributos del driver
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@QUALIFICATION", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@UBI_ACTUAL", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NUMVIAJESCOM", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);

        //Atributos del vehículo
        cmd->Parameters->Add("@MODEL", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@SEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PLATE_NUMBER", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LICENSE", System::Data::SqlDbType::Image);

        //Atributos del viaje
        cmd->Parameters->Add("@PUNTOSXVIAJE", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYVIAJE", System::Data::SqlDbType::VarChar, 1000);
        //=======    
        //>>>>>>> 3847a32e909502d7af407711c1bbd22f34ae8548
        cmd->Parameters->Add("@DATE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@AVAILABLESEATS", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PASSENGERS", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@ESTIMATEDPRICE", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TRIPSTATE", System::Data::SqlDbType::Int);
        //<<<<<<< HEAD
        //=======

                /*cmd->Parameters->Add("@PASSENGERS_name", System::Data::SqlDbType::VarChar, 1000);
                cmd->Parameters->Add("@DRIVER_name", System::Data::SqlDbType::VarChar, 100);

                cmd->Parameters->Add("@PTS_X_TRIP", System::Data::SqlDbType::VarChar, 1000);
                cmd->Parameters->Add("@PTS_Y_TRIP", System::Data::SqlDbType::VarChar, 1000);
        >>>>>>> 3847a32e909502d7af407711c1bbd22f34ae8548*/

        //Atributos del solicitud
        cmd->Parameters->Add("@INICIO", System::Data::SqlDbType::VarChar,100);
        cmd->Parameters->Add("@DESTINO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASAJEROSOLI", System::Data::SqlDbType::VarChar, 100);

        //Atributos del route
        cmd->Parameters->Add("@PUNTOSXRUTA", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYRUTA", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSXRUTAFIJO", System::Data::SqlDbType::VarChar, 1000);
        cmd->Parameters->Add("@PUNTOSYRUTAFIJO", System::Data::SqlDbType::VarChar, 1000);

        cmd->Prepare();

        //<<<<<<< HEAD
                /*cmd->Parameters["@MODEL"]->Value = vehicle->Model;
                cmd->Parameters["@SEATS"]->Value = vehicle->Seats;
                cmd->Parameters["@PLATENUMBER"]->Value = vehicle->PlateNumber;
                if (vehicle->License == nullptr)
                    cmd->Parameters["@LICENSE"]->Value = DBNull::Value;
                else
                    cmd->Parameters["@LICENSE"]->Value = vehicle->License;

                cmd->Parameters["@USERNAME"]->Value = vehicle->UserName;*/
        cmd->Parameters["@NAME"]->Value = driver->Name;
        cmd->Parameters["@LASTNAME"]->Value = driver->LastName;
        cmd->Parameters["@DNI"]->Value = driver->DNI;
        cmd->Parameters["@PHONE_NUMBER"]->Value = driver->PhoneNumber;
        cmd->Parameters["@USERNAME"]->Value = driver->Username;
        cmd->Parameters["@PASSWORD"]->Value = driver->Password;
        cmd->Parameters["@QUALIFICATION"]->Value = driver->Qualification;
        cmd->Parameters["@UBI_ACTUAL"]->Value = driver->UbiActual;
        cmd->Parameters["@NUMVIAJESCOM"]->Value = driver->NumberOfCompletedTrips;
        if (driver->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = driver->Photo;

        cmd->Parameters["@MODEL"]->Value = driver->vehicle->Model;
        cmd->Parameters["@SEATS"]->Value = driver->vehicle->Seats;
        cmd->Parameters["@PLATE_NUMBER"]->Value = driver->vehicle->PlateNumber;
        //cmd->Parameters["@LICENSE"]->Value = driver->vehicle->License;
        if (driver->vehicle->License == nullptr)
            cmd->Parameters["@LICENSE"]->Value = DBNull::Value;
        else
            cmd->Parameters["@LICENSE"]->Value = driver->vehicle->License;

        cmd->Parameters["@PUNTOSXVIAJE"]->Value = driver->viaje->puntos_X_viaje;
        cmd->Parameters["@PUNTOSYVIAJE"]->Value = driver->viaje->puntos_Y_viaje;
        cmd->Parameters["@DATE"]->Value = driver->viaje->Date;
        cmd->Parameters["@AVAILABLESEATS"]->Value = driver->viaje->AvailableSeats;
        //cmd->Parameters["@PASSENGERS"]->Value = driver->viaje->Passengers;

        String^ sum = "";
        sum = "";
        for each (Passenger ^ p in driver->viaje->Passengers) {
            if (sum == "") {
                sum = sum + p->Username;
            }
            else {
                sum = sum + "@@@" + p->Username;
            }
        }
        cmd->Parameters["@PASSENGERS"]->Value = sum;
        cmd->Parameters["@ESTIMATEDPRICE"]->Value = driver->viaje->EstimatedPrice;
        cmd->Parameters["@TRIPSTATE"]->Value = driver->viaje->TripState;

        cmd->Parameters["@INICIO"]->Value = driver->solicitud->inicio;
        cmd->Parameters["@DESTINO"]->Value = driver->solicitud->destino;
        cmd->Parameters["@PASAJEROSOLI"]->Value = driver->solicitud->pasajero->Username;

        cmd->Parameters["@PUNTOSXRUTA"]->Value = driver->Rutasa->Puntos_x_volatil;
        cmd->Parameters["@PUNTOSYRUTA"]->Value = driver->Rutasa->Puntos_y_volatil;

        sum = "";
        for each (String ^ p in driver->Rutasa->Puntos_x_fijo) {
            if (sum == "") {
                sum = sum + p;
            }
            else {
                sum = sum + "@@@" + p;
            }
        }
        cmd->Parameters["@PUNTOSXRUTAFIJO"]->Value = sum;


        sum = "";
        for each (String ^ p in driver->Rutasa->Puntos_y_fijo) {
            if (sum == "") {
                sum = sum + p;
            }
            else {
                sum = sum + "@@@" + p;
            }
        }
        cmd->Parameters["@PUNTOSYRUTAFIJO"]->Value = sum;


        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
}

void RCPersistance::Persistance::DeleteDriverTable(String^ username)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_Delete_Driver_table";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = username;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Driver^ RCPersistance::Persistance::QueryDriverTableByUsername(String^ username)
{
    SqlConnection^ conn;
    SqlDataReader^ reader;
    Driver^ driver = gcnew Driver();
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER";
        String^ sqlStr = "dbo.usp_Query_Drivers_ByUser_Name";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@USERNAME"]->Value = username;


        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            //<<<<<<< HEAD
            array<String^>^ delimitador = gcnew array<String^> { "@@@" };

            // Usamos Split y directamente creamos una lista
            //driver->Rutasa-> = gcnew List<String^>(reader["ROUTE"]->ToString()->Split(delimitador, StringSplitOptions::None));*/

            driver->Name = reader["NAME"]->ToString();
            driver->LastName = reader["LASTNAME"]->ToString();
            driver->DNI = reader["DNI"]->ToString();
            driver->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            driver->Username = reader["USERNAME"]->ToString();
            driver->Password = reader["PASSWORD"]->ToString();
            driver->Qualification = Convert::ToInt32(reader["QUALIFICATION"]->ToString());
            driver->UbiActual = reader["UBI_ACTUAL"]->ToString();
            driver->NumberOfCompletedTrips = Convert::ToInt32(reader["NUMVIAJESCOM"]->ToString());

            if (!DBNull::Value->Equals(reader["PHOTO"]))
                driver->Photo = (array<Byte>^)reader["PHOTO"];

            driver->vehicle->Model = reader["MODEL"]->ToString();
            driver->vehicle->Seats = Convert::ToInt32(reader["SEATS"]->ToString());
            driver->vehicle->PlateNumber = reader["PLATE_NUMBER"]->ToString();
            //driver->vehicle->License = Convert::ToDouble(reader["SPEED"]->ToString());
            if (!DBNull::Value->Equals(reader["LICENSE"]))
                driver->vehicle->License = (array<Byte>^)reader["LICENSE"];

            driver->viaje->puntos_X_viaje = reader["PUNTOSXVIAJE"]->ToString();
            driver->viaje->puntos_Y_viaje = reader["PUNTOSYVIAJE"]->ToString();
            driver->viaje->Date = reader["DATE"]->ToString();
            driver->viaje->AvailableSeats = Convert::ToInt32(reader["AVAILABLESEATS"]->ToString());
            //driver->viaje->Passengers = reader["PASSENGERS"]->ToString();
            List<Passenger^>^ pasa = gcnew List<Passenger^>();
            List<String^>^ aaa = gcnew List<String^>(reader["PASSENGERS"]->ToString()->Split(delimitador, StringSplitOptions::None));
            for each (String ^ p in aaa) {
                pasa->Add(QueryPassengerByUserName(p));
            }
            driver->viaje->Passengers = pasa;
            driver->viaje->EstimatedPrice = Convert::ToInt32(reader["ESTIMATEDPRICE"]->ToString());
            driver->viaje->TripState = Convert::ToInt32(reader["TRIPSTATE"]->ToString());

            driver->solicitud->inicio = reader["INICIO"]->ToString();
            driver->solicitud->destino = reader["DESTINO"]->ToString();
            driver->solicitud->pasajero = QueryPassengerByUserName(reader["PASAJEROSOLI"]->ToString());

            driver->Rutasa->Puntos_x_volatil = reader["PUNTOSXRUTA"]->ToString();
            driver->Rutasa->Puntos_y_volatil = reader["PUNTOSYRUTA"]->ToString();
            //driver->Rutasa-> Puntos_x_fijo= reader["PUNTOSXRUTAFIJO"]->ToString();
            driver->Rutasa->Puntos_x_fijo = gcnew List<String^>(reader["PUNTOSXRUTAFIJO"]->ToString()->Split(delimitador, StringSplitOptions::None));
            //driver->Rutasa-> Puntos_y_fijo= reader["PUNTOSYRUTAFIJO"]->ToString();
            driver->Rutasa->Puntos_y_fijo = gcnew List<String^>(reader["PUNTOSYRUTAFIJO"]->ToString()->Split(delimitador, StringSplitOptions::None));

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return driver;
}
