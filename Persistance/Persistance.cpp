#include "pch.h"

#include "Persistance.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;

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
