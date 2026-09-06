#pragma once
#include "ConnectionPath.h"
#include <iostream>
using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
using System::Runtime::InteropServices::
    Marshal; // used to convert  System::String^ to std::string

static std::string toStandardString(System::String ^ string) {
  System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
  char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
  std::string returnString(charPointer, string->Length);
  Marshal::FreeHGlobal(pointer);

  return returnString;
}

static bool isNumber(const std::string& s) {
  std::string::const_iterator it = s.begin();
  while (it != s.end() && std::isdigit(*it))
    ++it;
  return !s.empty() && it == s.end();
};

static bool checkID(System::String ^ empID) {
  // check to makse sure the ID is a number and is a valid ID that exists within
  // the database

  bool result = false;

  if (empID == "") return false;

  if (isNumber(toStandardString(empID))) {
    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText = "SELECT [iD] FROM EmployeeInfo";

    OleDbDataReader ^ reader = cmd->ExecuteReader();
    while (reader->Read()) {
      if (reader["ID"]->ToString() == empID) return true;
    }
    return false;
  } else
    return false;
}