#pragma once
#include <iostream>

enum class AccessLevel { Employee, Admin, HR };

class Login {
public:
  AccessLevel level = AccessLevel::Employee;

  // might not be the most secure way to check lol
  bool verify(std::string inputName, std::string inputPass);

  // should have a way to verify its the actual person
  // security question??
  void changeUserName(std::string newUserName);
  void changePassword(std::string newPassword);

private:
  std::string username;
  std::string password;
};
