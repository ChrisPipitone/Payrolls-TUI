#pragma once
#include "AdminMenu.h"
#include "EmployeeMainMenu.h"
#include "HrView.h"

namespace Payrolls {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

/// <summary>
/// Summary for Form1
/// </summary>
public
ref class LoginMenu : public System::Windows::Forms::Form {
public:
  LoginMenu(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~LoginMenu() {
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
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::TextBox ^ textBox2;

private:
  System::Windows::Forms::ComboBox ^ comboBox1;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::PictureBox ^ pictureBox1;

private:
  System::ComponentModel::IContainer ^ components;

private:
  String ^ Crypt;

protected:
private:
  /// <summary>
  /// Required designer variable.
  /// </summary>

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent(void) {
    System::ComponentModel::ComponentResourceManager ^ resources =
        (gcnew System::ComponentModel::ComponentResourceManager(
            LoginMenu::typeid));
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->BeginInit();
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
    this->label1->Location = System::Drawing::Point(462, 53);
    this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(434, 36);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Welcome to SHmoney Payroll";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Location = System::Drawing::Point(440, 270);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(129, 24);
    this->label2->TabIndex = 1;
    this->label2->Text = L"Employee ID";
    this->label2->Click +=
        gcnew System::EventHandler(this, &LoginMenu::label2_Click);
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Location = System::Drawing::Point(465, 323);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(100, 24);
    this->label3->TabIndex = 2;
    this->label3->Text = L"Password";
    this->label3->Click +=
        gcnew System::EventHandler(this, &LoginMenu::label3_Click);
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Location = System::Drawing::Point(494, 385);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(84, 24);
    this->label4->TabIndex = 3;
    this->label4->Text = L"Position";
    //
    // textBox1
    //
    this->textBox1->Location = System::Drawing::Point(646, 270);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(275, 28);
    this->textBox1->TabIndex = 0;
    this->textBox1->TextChanged +=
        gcnew System::EventHandler(this, &LoginMenu::textBox1_TextChanged);
    //
    // textBox2
    //
    this->textBox2->Location = System::Drawing::Point(646, 323);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(275, 28);
    this->textBox2->TabIndex = 2;
    this->textBox2->TextChanged +=
        gcnew System::EventHandler(this, &LoginMenu::textBox2_TextChanged);
    //
    // comboBox1
    //
    this->comboBox1->DropDownStyle =
        System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboBox1->FormattingEnabled = true;
    this->comboBox1->Items->AddRange(
        gcnew cli::array<System::Object ^>(3){L"HR", L"Admin", L"Employee"});
    this->comboBox1->Location = System::Drawing::Point(646, 385);
    this->comboBox1->Name = L"comboBox1";
    this->comboBox1->Size = System::Drawing::Size(281, 30);
    this->comboBox1->TabIndex = 3;
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(646, 452);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(207, 51);
    this->button1->TabIndex = 4;
    this->button1->Text = L"Login";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &LoginMenu::button1_Click);
    //
    // pictureBox1
    //
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(1204, 795);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(43, 44);
    this->pictureBox1->TabIndex = 8;
    this->pictureBox1->TabStop = false;
    //
    // LoginMenu
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::BlanchedAlmond;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"$this.BackgroundImage")));
    this->ClientSize = System::Drawing::Size(1246, 839);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->comboBox1);
    this->Controls->Add(this->textBox2);
    this->Controls->Add(this->textBox1);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F,
        static_cast<System::Drawing::FontStyle>(
            (System::Drawing::FontStyle::Bold |
             System::Drawing::FontStyle::Italic)),
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
    this->Name = L"LoginMenu";
    this->Load += gcnew System::EventHandler(this, &LoginMenu::Form1_Load);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();
  }
#pragma endregion
private:
  System::Void Form1_Load(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label3_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void textBox2_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {
    this->textBox2->PasswordChar = '*';
  }

private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
    if ((textBox1->Text == "") || (textBox2->Text == "") ||
        (comboBox1->Text == "")) {
      MessageBox::Show("Please enter data in all field!", "Error",
                       MessageBoxButtons::OK, MessageBoxIcon::Error);
    } else {
      // error checking
      if (textBox1->Text == "") {
        MessageBox::Show("Enter An Employee Id.");
        return;
      }
      if (!checkID(textBox1->Text)) {
        MessageBox::Show("This ID does not exist within the Database");
        return;
      }

      Crypt = textBox2->Text;

      // To Read encrypted password erase -> /**/
      /*

      String^ en = "";
      String^ s = Crypt;
      for (int i = 0; i < s->Length; i++) {    //go through each char
              char c = s[i];
              int shifted = (int)c + 10;			//shift 10
      places en += (char)shifted;					//turn
      back into char and add to String
      }

      Crypt = en;
      */

      // use employee id to pull employee data from data base to fill menu
      // details
      System::String ^ empID = textBox1->Text;

      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);

      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandType = CommandType::Text;
      cmd->CommandText = "select * from EmployeeInfo where ([ID] = @ID) and "
                         "([Password] = @Password)";
      cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
      cmd->Parameters->AddWithValue("@Password", Crypt);
      cmd->ExecuteNonQuery();
      DataTable ^ dt = gcnew DataTable();
      OleDbDataAdapter ^ da = gcnew OleDbDataAdapter(cmd);
      da->Fill(dt);
      if (dt->Rows->Count == 1) {
        int status = int(comboBox1->SelectedIndex);
        if (status == 0) {
          OleDbCommand ^ command = conn->CreateCommand();
          command->CommandType = CommandType::Text;
          command->CommandText =
              "select * from EmployeeInfo where [ID] = @ID and ([Position] = "
              "'Human Resource' or [Position] = 'human resource' or [Position] "
              "= 'Human resource' or [Position] = 'HR' or [Position] = 'hr' or "
              "[Position] = 'Hr')";
          command->Parameters->AddWithValue("@ID",
                                            Int32::Parse(textBox1->Text));
          command->ExecuteNonQuery();
          DataTable ^ datatable = gcnew DataTable();
          OleDbDataAdapter ^ dataAdapter = gcnew OleDbDataAdapter(command);
          dataAdapter->Fill(datatable);
          textBox1->Clear();
          textBox2->Clear();
          if (datatable->Rows->Count == 1) {
            MessageBox::Show("Login Succeed!");
            HrView ^ hr = gcnew HrView();
            hr->otherPage = this;
            this->Hide();
            hr->ShowDialog();
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          } else {
            MessageBox::Show("Please choose the right position", "Error",
                             MessageBoxButtons::OK, MessageBoxIcon::Error);
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          }
        }

        else if (status == 1) {
          OleDbCommand ^ cmd1 = conn->CreateCommand();
          cmd1->CommandType = CommandType::Text;
          cmd1->CommandText = "select * from EmployeeInfo where [ID] = @ID and "
                              "[Position] = 'Admin'";
          cmd1->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
          cmd1->ExecuteNonQuery();
          DataTable ^ table = gcnew DataTable();
          OleDbDataAdapter ^ adapter = gcnew OleDbDataAdapter(cmd1);
          adapter->Fill(table);
          if (status == 1 && table->Rows->Count == 1) {
            MessageBox::Show("Login Succeed!");
            AdminMenu ^ admin = gcnew AdminMenu(this, empID);
            this->Hide();
            admin->ShowDialog();
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          }

          else {
            MessageBox::Show("Please choose the right position", "Error",
                             MessageBoxButtons::OK, MessageBoxIcon::Error);
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          }
        }

        else {
          OleDbCommand ^ cmd2 = conn->CreateCommand();
          cmd2->CommandType = CommandType::Text;
          cmd2->CommandText = "select * from EmployeeInfo where [ID] = @ID and "
                              "[Position] = 'Employee'";
          cmd2->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
          cmd2->ExecuteNonQuery();
          DataTable ^ data = gcnew DataTable();
          OleDbDataAdapter ^ dataAdapter1 = gcnew OleDbDataAdapter(cmd2);
          dataAdapter1->Fill(data);
          if (status == 2 && data->Rows->Count == 1) {
            MessageBox::Show("Login Succeed!");
            EmployeeMainMenu ^ empMenu = gcnew EmployeeMainMenu(this, empID);
            this->Hide();
            empMenu->ShowDialog();
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          } else {
            MessageBox::Show("Please choose the right position", "Error",
                             MessageBoxButtons::OK, MessageBoxIcon::Error);
            textBox1->Text = "";
            textBox2->Text = "";
            comboBox1->Text = "";
            return;
          }
        }
      } else {
        MessageBox::Show("Uncorrect username or password", "Error",
                         MessageBoxButtons::OK, MessageBoxIcon::Error);
        textBox1->Text = "";
        textBox2->Text = "";
        comboBox1->Text = "";
      }
    }
  }
};
} // namespace Payrolls