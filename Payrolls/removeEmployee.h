#pragma once
#include "CheckID.h"
#include "ConnectionPath.h"

namespace Payrolls {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

/// <summary>
/// Summary for removeEmployee
/// </summary>
public
ref class removeEmployee : public System::Windows::Forms::Form {
public:
  Form ^ otherPage;

private:
  void init(System::String ^ empID);
  void deleteEmployee(System::String ^ empID);

private:
  System::Windows::Forms::Button ^ test;

private:
  System::Windows::Forms::Button ^ back_Button;
  int employeeID;

public:
  removeEmployee(void) {
    InitializeComponent();

    //
    // TODO: Add the constructor code here
    //
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~removeEmployee() {
    if (components) {
      delete components;
    }
  }

private:
  /// <summary>
  /// Required designer variable.
  /// </summary>

  // log out to login screen
private:
  System::Windows::Forms::Form ^ orignalMenu;

  System::ComponentModel::Container ^ components;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::Button ^ button2;

private:
  System::Windows::Forms::Button ^ button3;

private:
  System::Windows::Forms::Button ^ button4;

private:
  System::Windows::Forms::Button ^ removeEmp_removeButton;

private:
  System::Windows::Forms::TextBox ^ removeEmp_ID_textBox;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent(void) {
    System::ComponentModel::ComponentResourceManager ^ resources =
        (gcnew System::ComponentModel::ComponentResourceManager(
            removeEmployee::typeid));
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->removeEmp_removeButton = (gcnew System::Windows::Forms::Button());
    this->removeEmp_ID_textBox = (gcnew System::Windows::Forms::TextBox());
    this->test = (gcnew System::Windows::Forms::Button());
    this->back_Button = (gcnew System::Windows::Forms::Button());
    this->SuspendLayout();
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 22.2F,
        static_cast<System::Drawing::FontStyle>(
            (System::Drawing::FontStyle::Bold |
             System::Drawing::FontStyle::Italic)),
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(135, 27);
    this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(286, 36);
    this->label1->TabIndex = 6;
    this->label1->Text = L"Employee Removal";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Location = System::Drawing::Point(327, 153);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(94, 13);
    this->label2->TabIndex = 7;
    this->label2->Text = L"Input Employee ID";
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(39, 143);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(146, 23);
    this->button1->TabIndex = 0;
    this->button1->Text = L"Terminated";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &removeEmployee::button1_Click);
    //
    // button2
    //
    this->button2->Location = System::Drawing::Point(39, 102);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(146, 24);
    this->button2->TabIndex = 1;
    this->button2->Text = L"Deceased";
    this->button2->UseVisualStyleBackColor = true;
    this->button2->Click +=
        gcnew System::EventHandler(this, &removeEmployee::button2_Click);
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(39, 186);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(146, 25);
    this->button3->TabIndex = 2;
    this->button3->Text = L"Quit";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &removeEmployee::button3_Click);
    //
    // button4
    //
    this->button4->Location = System::Drawing::Point(39, 233);
    this->button4->Name = L"button4";
    this->button4->Size = System::Drawing::Size(146, 25);
    this->button4->TabIndex = 3;
    this->button4->Text = L"Removed Employees";
    this->button4->UseVisualStyleBackColor = true;
    this->button4->Click +=
        gcnew System::EventHandler(this, &removeEmployee::button4_Click);
    //
    // removeEmp_removeButton
    //
    this->removeEmp_removeButton->Location = System::Drawing::Point(330, 273);
    this->removeEmp_removeButton->Name = L"removeEmp_removeButton";
    this->removeEmp_removeButton->Size = System::Drawing::Size(197, 25);
    this->removeEmp_removeButton->TabIndex = 5;
    this->removeEmp_removeButton->Text = L"Remove Employee";
    this->removeEmp_removeButton->UseVisualStyleBackColor = true;
    this->removeEmp_removeButton->Click += gcnew System::EventHandler(
        this, &removeEmployee::removeEmp_removeButton_Click);
    //
    // removeEmp_ID_textBox
    //
    this->removeEmp_ID_textBox->Location = System::Drawing::Point(427, 150);
    this->removeEmp_ID_textBox->Name = L"removeEmp_ID_textBox";
    this->removeEmp_ID_textBox->Size = System::Drawing::Size(100, 20);
    this->removeEmp_ID_textBox->TabIndex = 8;
    //
    // test
    //
    this->test->ForeColor = System::Drawing::Color::Red;
    this->test->Location = System::Drawing::Point(360, 201);
    this->test->Name = L"test";
    this->test->Size = System::Drawing::Size(124, 41);
    this->test->TabIndex = 9;
    this->test->Text = L"REMOVE";
    this->test->UseVisualStyleBackColor = true;
    this->test->Click +=
        gcnew System::EventHandler(this, &removeEmployee::test_Click);
    this->test->Hide();
    //
    // back_Button
    //
    this->back_Button->Location = System::Drawing::Point(39, 277);
    this->back_Button->Name = L"back_Button";
    this->back_Button->Size = System::Drawing::Size(146, 25);
    this->back_Button->TabIndex = 10;
    this->back_Button->Text = L"Back";
    this->back_Button->UseVisualStyleBackColor = true;
    this->back_Button->Click +=
        gcnew System::EventHandler(this, &removeEmployee::back_Button_Click);
    //
    // removeEmployee
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(600, 400);
    this->Controls->Add(this->back_Button);
    this->Controls->Add(this->test);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->removeEmp_ID_textBox);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->button2);
    this->Controls->Add(this->button3);
    this->Controls->Add(this->button4);
    this->Controls->Add(this->removeEmp_removeButton);
    this->Controls->Add(this->label1);
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Name = L"removeEmployee";
    this->Text = L"Remove Employee";
    this->Load +=
        gcnew System::EventHandler(this, &removeEmployee::removeEmployee_Load);
    this->ResumeLayout(false);
    this->PerformLayout();
  }

#pragma endregion
private:
  System::Void removeEmployee_Load(System::Object ^ sender,
                                   System::EventArgs ^ e) {}

private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {}
  // private: System::Void textBox1(System::Object^ sender, System::EventArgs^
  // e) {
  // }
private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button5_Click(System::Object ^ sender, System::EventArgs ^ e) {
    this->Hide();
    try {
      orignalMenu->Show();
    } catch (System::NullReferenceException ^ e) {
      return;
    }
  }

private:
  System::Void removeEmp_removeButton_Click(System::Object ^ sender,
                                            System::EventArgs ^ e) {

    if (removeEmp_ID_textBox->Text == "") {
      MessageBox::Show("Enter An Employee Id.");
      return;
    }
    if (!checkID(removeEmp_ID_textBox->Text)) {
      MessageBox::Show("This ID does not exist within the Database");
      return;
    }

    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;

    // verify the emp to be deleted is the correct person
    cmd->CommandText =
        "SELECT FirstName, LastName FROM EmployeeInfo WHERE [ID] = @id";
    cmd->Parameters->AddWithValue("@id", removeEmp_ID_textBox->Text);

    System::String ^ tempFirstName;
    System::String ^ tempLastName;
    OleDbDataReader ^ reader = cmd->ExecuteReader();
    while (reader->Read()) {
      tempFirstName = reader["FirstName"]->ToString();
      tempLastName = reader["LastName"]->ToString();
    }
    conn->Close();

    // ask
    MessageBox::Show(
        tempFirstName + " " + tempLastName +
        " is the Employee you have selected " +
        "please press the Remove Button if you wish to remove this employee.");
    this->test->Show();
  }

private:
  System::Void test_Click(System::Object ^ sender, System::EventArgs ^ e) {

    // to access this button the user needs to have already entered a valid emp
    // id and click RemoveEmployee button

    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText = "DELETE * FROM EmployeeInfo WHERE [ID] = @id";
    cmd->Parameters->AddWithValue("@id", removeEmp_ID_textBox->Text);

    cmd->ExecuteNonQuery();
    conn->Close();
    MessageBox::Show("Employee Sucessfully Removed");

    removeEmp_ID_textBox->Text = "";
    this->test->Hide();
  }

private:
  System::Void back_Button_Click(System::Object ^ sender,
                                 System::EventArgs ^ e) {
    this->Hide();
    otherPage->Show();
  }
};
} // namespace Payrolls
