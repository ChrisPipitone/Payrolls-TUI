#pragma once
#include "Admin2.h"

namespace Payrolls {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

/// </summary>
public
ref class MyForm : public System::Windows::Forms::Form {
private:
  String ^ word;

private:
  String ^ Name;

private:
  String ^ email;

private:
  String ^ phone;

private:
  float pay;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::Label ^ label7;

private:
  System::Windows::Forms::ToolStrip ^ toolStrip1;

private:
  System::Windows::Forms::ToolStripLabel ^ toolStripLabel1;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator1;

private:
  System::Windows::Forms::ToolStripLabel ^ toolStripLabel2;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator2;

private:
  System::Windows::Forms::ToolStripLabel ^ toolStripLabel3;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator3;

private:
  System::Windows::Forms::ToolStripLabel ^ toolStripLabel4;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator4;

private:
  System::Windows::Forms::ToolStripLabel ^ toolStripLabel5;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::Label ^ label8;

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::Label ^ label10;

private:
  System::Windows::Forms::Label ^ label11;

private:
  System::Windows::Forms::Label ^ label12;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::Button ^ button2;

private:
  System::Windows::Forms::Button ^ button3;

public:
  String ^ word1 = "dont know yet";

  MyForm(void) {
    InitializeComponent();
    // textBox1->EmplText = "A";
    //

    //
  }
  MyForm(System::Windows::Forms::Form ^ Admin, String ^ text) {

    InitializeComponent();
    otherform = Admin;
    word = text;
  }

protected:
  /// </summary>
  ~MyForm() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::LinkLabel ^ Logout;

protected:
protected:
protected:
protected:
private:
  /// <summary>
  /// Erforderliche Designervariable.
  /// </summary>
  System::ComponentModel::Container ^ components;

private:
  System::Windows::Forms::Form ^ otherform;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Erforderliche Methode für die Designerunterstützung.
  /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
  /// </summary>
  void InitializeComponent(void) {
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->Logout = (gcnew System::Windows::Forms::LinkLabel());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
    this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
    this->toolStripSeparator1 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
    this->toolStripSeparator2 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
    this->toolStripSeparator3 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
    this->toolStripSeparator4 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->toolStripLabel5 = (gcnew System::Windows::Forms::ToolStripLabel());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->toolStrip1->SuspendLayout();
    this->SuspendLayout();
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(26, 48);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(134, 31);
    this->label1->TabIndex = 3;
    this->label1->Text = L"Welcome:";
    this->label1->Click +=
        gcnew System::EventHandler(this, &MyForm::label1_Click);
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label2->Location = System::Drawing::Point(29, 90);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(87, 18);
    this->label2->TabIndex = 4;
    this->label2->Text = L"Manager of ";
    this->label2->Click +=
        gcnew System::EventHandler(this, &MyForm::label2_Click);
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label3->Location = System::Drawing::Point(166, 48);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(215, 31);
    this->label3->TabIndex = 5;
    this->label3->Text = L" Employee name";
    this->label3->Click +=
        gcnew System::EventHandler(this, &MyForm::label3_Click);
    //
    // Logout
    //
    this->Logout->AutoSize = true;
    this->Logout->Location = System::Drawing::Point(533, 9);
    this->Logout->Name = L"Logout";
    this->Logout->Size = System::Drawing::Size(42, 13);
    this->Logout->TabIndex = 8;
    this->Logout->TabStop = true;
    this->Logout->Text = L"LogOut";
    this->Logout->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &MyForm::Logout_LinkClicked);
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label5->Location = System::Drawing::Point(113, 90);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(66, 18);
    this->label5->TabIndex = 9;
    this->label5->Text = L" Position";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label6->Location = System::Drawing::Point(215, 215);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(22, 18);
    this->label6->TabIndex = 12;
    this->label6->Text = L"ID";
    this->label6->Click +=
        gcnew System::EventHandler(this, &MyForm::label6_Click);
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label7->Location = System::Drawing::Point(150, 215);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(30, 18);
    this->label7->TabIndex = 13;
    this->label7->Text = L"ID :";
    this->label7->Click +=
        gcnew System::EventHandler(this, &MyForm::label7_Click);
    //
    // toolStrip1
    //
    this->toolStrip1->Items->AddRange(
        gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(9){
            this->toolStripLabel1, this->toolStripSeparator1,
            this->toolStripLabel2, this->toolStripSeparator2,
            this->toolStripLabel3, this->toolStripSeparator3,
            this->toolStripLabel4, this->toolStripSeparator4,
            this->toolStripLabel5});
    this->toolStrip1->Location = System::Drawing::Point(0, 0);
    this->toolStrip1->Name = L"toolStrip1";
    this->toolStrip1->Size = System::Drawing::Size(745, 25);
    this->toolStrip1->TabIndex = 14;
    this->toolStrip1->Text = L"toolStrip1";
    this->toolStrip1->ItemClicked +=
        gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(
            this, &MyForm::toolStrip1_ItemClicked);
    //
    // toolStripLabel1
    //
    this->toolStripLabel1->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->toolStripLabel1->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->toolStripLabel1->Name = L"toolStripLabel1";
    this->toolStripLabel1->Size = System::Drawing::Size(108, 22);
    this->toolStripLabel1->Text = L"Admin Home Page";
    this->toolStripLabel1->Click +=
        gcnew System::EventHandler(this, &MyForm::toolStripLabel1_Click);
    //
    // toolStripSeparator1
    //
    this->toolStripSeparator1->Name = L"toolStripSeparator1";
    this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
    //
    // toolStripLabel2
    //
    this->toolStripLabel2->Name = L"toolStripLabel2";
    this->toolStripLabel2->Size = System::Drawing::Size(102, 22);
    this->toolStripLabel2->Text = L"Search Employees";
    this->toolStripLabel2->Click +=
        gcnew System::EventHandler(this, &MyForm::toolStripLabel2_Click);
    //
    // toolStripSeparator2
    //
    this->toolStripSeparator2->Name = L"toolStripSeparator2";
    this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
    //
    // toolStripLabel3
    //
    this->toolStripLabel3->Name = L"toolStripLabel3";
    this->toolStripLabel3->Size = System::Drawing::Size(128, 22);
    this->toolStripLabel3->Text = L"Build/Modify Schedule";
    //
    // toolStripSeparator3
    //
    this->toolStripSeparator3->Name = L"toolStripSeparator3";
    this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
    //
    // toolStripLabel4
    //
    this->toolStripLabel4->Name = L"toolStripLabel4";
    this->toolStripLabel4->Size = System::Drawing::Size(37, 22);
    this->toolStripLabel4->Text = L"Alerts";
    //
    // toolStripSeparator4
    //
    this->toolStripSeparator4->Name = L"toolStripSeparator4";
    this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
    //
    // toolStripLabel5
    //
    this->toolStripLabel5->Name = L"toolStripLabel5";
    this->toolStripLabel5->Size = System::Drawing::Size(51, 22);
    this->toolStripLabel5->Text = L"Sign out";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label4->Location = System::Drawing::Point(150, 266);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(49, 18);
    this->label4->TabIndex = 16;
    this->label4->Text = L"Email:";
    this->label4->Click +=
        gcnew System::EventHandler(this, &MyForm::label4_Click_1);
    //
    // label8
    //
    this->label8->AutoSize = true;
    this->label8->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label8->Location = System::Drawing::Point(215, 266);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(43, 18);
    this->label8->TabIndex = 15;
    this->label8->Text = L"email";
    this->label8->Click +=
        gcnew System::EventHandler(this, &MyForm::label8_Click);
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label9->Location = System::Drawing::Point(150, 322);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(55, 18);
    this->label9->TabIndex = 18;
    this->label9->Text = L"Phone:";
    //
    // label10
    //
    this->label10->AutoSize = true;
    this->label10->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label10->Location = System::Drawing::Point(215, 322);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(24, 18);
    this->label10->TabIndex = 17;
    this->label10->Text = L"##";
    this->label10->Click +=
        gcnew System::EventHandler(this, &MyForm::label10_Click);
    //
    // label11
    //
    this->label11->AutoSize = true;
    this->label11->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label11->Location = System::Drawing::Point(150, 373);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(37, 18);
    this->label11->TabIndex = 20;
    this->label11->Text = L"Pay:";
    //
    // label12
    //
    this->label12->AutoSize = true;
    this->label12->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
    this->label12->Location = System::Drawing::Point(215, 373);
    this->label12->Name = L"label12";
    this->label12->Size = System::Drawing::Size(38, 18);
    this->label12->TabIndex = 19;
    this->label12->Text = L"XXX";
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(-229, 58);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(75, 23);
    this->button1->TabIndex = 22;
    this->button1->Text = L"button1";
    this->button1->UseVisualStyleBackColor = true;
    //
    // button2
    //
    this->button2->Location = System::Drawing::Point(306, 373);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(75, 23);
    this->button2->TabIndex = 23;
    this->button2->Text = L"Show";
    this->button2->UseVisualStyleBackColor = true;
    this->button2->Click +=
        gcnew System::EventHandler(this, &MyForm::button2_Click_1);
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(306, 373);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(75, 23);
    this->button3->TabIndex = 24;
    this->button3->Text = L"No Show";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &MyForm::button3_Click);
    //
    // MyForm
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(745, 543);
    this->Controls->Add(this->button3);
    this->Controls->Add(this->button2);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->label11);
    this->Controls->Add(this->label12);
    this->Controls->Add(this->label9);
    this->Controls->Add(this->label10);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->label8);
    this->Controls->Add(this->toolStrip1);
    this->Controls->Add(this->label7);
    this->Controls->Add(this->label6);
    this->Controls->Add(this->label5);
    this->Controls->Add(this->Logout);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Name = L"MyForm";
    this->Text = L"Admin Main Menu";
    this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
    this->toolStrip1->ResumeLayout(false);
    this->toolStrip1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();
  }
#pragma endregion
private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label3_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void listBox1_SelectedIndexChanged(System::Object ^ sender,
                                             System::EventArgs ^ e) {}

private:
  System::Void label4_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void Logout_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {

    this->Hide();

    otherform->Show();
  }

private:
  System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {

    label12->Hide();
    button3->Hide();

    OleDbConnection ^ conn = gcnew OleDbConnection(
        "Provider=Microsoft.ACE.OLEDB.12.0;Data Source= C:/Users/Zhuowei "
        "Hu/Documents/Payroll Info.accdb");
    conn->Open();

    OleDbCommand ^ command = conn->CreateCommand();
    command->CommandType = CommandType::Text;
    command->CommandText =
        "select ID,Firstname,Lastname, Email, PhoneNumber,HourlyPay from "
        "EmployeeInfo where ([Position] = 'Employee' or [Position] = "
        "'employee' or [Position] = 'EMPLOYEE')  ";

    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText =
        "select Firstname,Lastname, Email, PhoneNumber,HourlyPay from "
        "EmployeeInfo where ([ID] = @ID)";
    cmd->Parameters->AddWithValue("@ID", Int32::Parse(word));

    OleDbDataReader ^ myReader = cmd->ExecuteReader();

    while (myReader->Read()) {

      Name = myReader->GetString(1) + ", " + myReader->GetString(0);
      email = myReader->GetString(2);
      phone = myReader->GetString(3);
      //	pay = myReader->GetFloat(4);
    }

    label6->Text = word;
    label3->Text = Name;
    label5->Text = word1;
    label8->Text = email;
    label10->Text = phone;
    label12->Text = /*Convert::ToString(pay)*/ "DOLLAR!!";
  }

private:
  System::Void label6_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label7_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void toolStripLabel2_Click(System::Object ^ sender,
                                     System::EventArgs ^ e) {

    Admin2 ^ Admin = gcnew Admin2(this, otherform, Name);

    this->Hide();
    Admin->Show();
  }

private:
  System::Void toolStripLabel1_Click(System::Object ^ sender,
                                     System::EventArgs ^ e) {}

private:
  System::Void panel1_Paint(System::Object ^ sender,
                            System::Windows::Forms::PaintEventArgs ^ e) {}

private:
  System::Void toolStrip1_ItemClicked(
      System::Object ^ sender,
      System::Windows::Forms::ToolStripItemClickedEventArgs ^ e) {}

private:
  System::Void label4_Click_1(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label10_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label8_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {

    label12->Hide();
    button3->Hide();
    button2->Show();
  }

private:
  System::Void button2_Click_1(System::Object ^ sender, System::EventArgs ^ e) {
    label12->Show();
    button2->Hide();
    button3->Show();
  }
};
} // namespace Payrolls
