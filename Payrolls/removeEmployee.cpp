#include "removeEmployee.h"
#include "ConnectionPath.h"

using namespace std;

void Payrolls::removeEmployee::init(System::String ^ empID) {
  deleteEmployee(empID);
}

void Payrolls::removeEmployee::deleteEmployee(System::String ^ empID) {
  // connect to database using string containing the path to the database file
  // on the local disk
  OleDbConnection ^ conn =
      gcnew OleDbConnection(ConnectionPath::connectionString);
  conn->Open();

  // delete entire row of an employee
  // DELETE FROM EmployeeInfo WHERE condition;
  OleDbCommand ^ cmd = conn->CreateCommand();
  cmd->CommandType = CommandType::Text;
  cmd->CommandText = "DELETE * FROM EmployeeInfo WHERE [ID] = @id";
  cmd->Parameters->AddWithValue("@id", empID);

  /*delete EmployeeInfo.ID;
  delete Employee.firstName;
  delete Employee.lastName;
  delete Employee.Age;
  delete Employee.Gender;
  delete Employee.Email;
  delete Employee.dateOfBirth;
  delete Employee.phoneNumber;
  delete Employee.address;
  delete Employee.zipcode;
  delete Employee.hours;
  delete Employee.overtimePay;
  delete Employee.overtimeHours;
  delete Employee.hourlyPay;
  delete Employee.netPay;
  delete Employee.weeklyGrossPay;
  delete Employee.position;
  */

  conn->Close();
}