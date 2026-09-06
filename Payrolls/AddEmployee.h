#pragma once
#include "Benfits.h"
#include "CTTax.h"
#include "CheckID.h"
#include "ConnectionPath.h"
#include "FedTax.h"
#include "GrossIncome.h"
#include "NJTax.h"
#include "NYTax.h"

namespace Payrolls {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Text::RegularExpressions;

/// <summary>
/// Summary for AddEmployee
/// </summary>
public
ref class AddEmployee : public System::Windows::Forms::Form {
public:
  Form ^ otherPage;
  AddEmployee(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~AddEmployee() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::TextBox ^ textBox3;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::TextBox ^ textBox4;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::TextBox ^ textBox5;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::TextBox ^ textBox7;

private:
  System::Windows::Forms::Label ^ label7;

private:
  System::Windows::Forms::TextBox ^ textBox8;

private:
  System::Windows::Forms::Label ^ label8;

private:
  System::Windows::Forms::TextBox ^ textBox9;

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::TextBox ^ textBox11;

private:
  System::Windows::Forms::Label ^ label12;

private:
  System::Windows::Forms::TextBox ^ textBox13;

private:
  System::Windows::Forms::Label ^ label14;

private:
  System::Windows::Forms::TextBox ^ textBox14;

private:
  System::Windows::Forms::Button ^ button3;

private:
  System::Windows::Forms::Button ^ button4;

private:
  System::Windows::Forms::DateTimePicker ^ dateTimePicker1;

private:
  System::Windows::Forms::Label ^ label10;

private:
  System::Windows::Forms::TextBox ^ textBox6;

private:
  System::Windows::Forms::Label ^ label18;

private:
  System::Windows::Forms::TextBox ^ textBox10;

private:
  System::Windows::Forms::Label ^ label11;

private:
  System::Windows::Forms::Label ^ label13;

private:
  System::Windows::Forms::Label ^ label17;

private:
  System::Windows::Forms::ComboBox ^ comboBox1;

private:
  System::Windows::Forms::ComboBox ^ comboBox2;

private:
  System::Windows::Forms::ComboBox ^ comboBox3;

private:
  System::Windows::Forms::PictureBox ^ pictureBox1;

private:
  System::Windows::Forms::TextBox ^ textBox12;

private:
  System::Windows::Forms::Label ^ label19;

private:
  System::Windows::Forms::TextBox ^ textBox16;

private:
  System::Windows::Forms::Label ^ label20;

private:
  System::Windows::Forms::RadioButton ^ radioButton1;

private:
  System::Windows::Forms::RadioButton ^ radioButton2;

private:
  System::Windows::Forms::RadioButton ^ radioButton3;

private:
  System::Windows::Forms::TextBox ^ textBox15;

private:
  System::Windows::Forms::Label ^ label15;

private:
  int Hours;

private:
  String ^ payType;

private:
  String ^ HO;

private:
  String ^ pas = "1111";

private:
  String ^ Zero = "0";

private:
  System::Windows::Forms::Label ^ label16;

private:
  System::Windows::Forms::ComboBox ^ comboBox4;

protected:
private:
  /// <summary>
  /// Required designer variable.
  /// </summary>
  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent(void) {
    System::ComponentModel::ComponentResourceManager ^ resources =
        (gcnew System::ComponentModel::ComponentResourceManager(
            AddEmployee::typeid));
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->textBox3 = (gcnew System::Windows::Forms::TextBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->textBox4 = (gcnew System::Windows::Forms::TextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->textBox5 = (gcnew System::Windows::Forms::TextBox());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->textBox7 = (gcnew System::Windows::Forms::TextBox());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->textBox8 = (gcnew System::Windows::Forms::TextBox());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->textBox9 = (gcnew System::Windows::Forms::TextBox());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->textBox11 = (gcnew System::Windows::Forms::TextBox());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->textBox13 = (gcnew System::Windows::Forms::TextBox());
    this->label14 = (gcnew System::Windows::Forms::Label());
    this->textBox14 = (gcnew System::Windows::Forms::TextBox());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->textBox6 = (gcnew System::Windows::Forms::TextBox());
    this->label18 = (gcnew System::Windows::Forms::Label());
    this->textBox10 = (gcnew System::Windows::Forms::TextBox());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label13 = (gcnew System::Windows::Forms::Label());
    this->label17 = (gcnew System::Windows::Forms::Label());
    this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
    this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
    this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->textBox12 = (gcnew System::Windows::Forms::TextBox());
    this->label19 = (gcnew System::Windows::Forms::Label());
    this->textBox16 = (gcnew System::Windows::Forms::TextBox());
    this->label20 = (gcnew System::Windows::Forms::Label());
    this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
    this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
    this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
    this->textBox15 = (gcnew System::Windows::Forms::TextBox());
    this->label15 = (gcnew System::Windows::Forms::Label());
    this->label16 = (gcnew System::Windows::Forms::Label());
    this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->BeginInit();
    this->SuspendLayout();
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Location = System::Drawing::Point(34, 62);
    this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(133, 25);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Employee ID";
    //
    // textBox1
    //
    this->textBox1->Location = System::Drawing::Point(200, 62);
    this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(158, 31);
    this->textBox1->TabIndex = 1;
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Location = System::Drawing::Point(34, 117);
    this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(55, 25);
    this->label2->TabIndex = 2;
    this->label2->Text = L"SSN";
    //
    // textBox3
    //
    this->textBox3->Location = System::Drawing::Point(200, 117);
    this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox3->Name = L"textBox3";
    this->textBox3->Size = System::Drawing::Size(158, 31);
    this->textBox3->TabIndex = 3;
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Location = System::Drawing::Point(34, 171);
    this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(116, 25);
    this->label3->TabIndex = 4;
    this->label3->Text = L"First Name";
    //
    // textBox4
    //
    this->textBox4->Location = System::Drawing::Point(200, 171);
    this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox4->Name = L"textBox4";
    this->textBox4->Size = System::Drawing::Size(158, 31);
    this->textBox4->TabIndex = 4;
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Location = System::Drawing::Point(34, 242);
    this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(115, 25);
    this->label4->TabIndex = 6;
    this->label4->Text = L"Last Name";
    //
    // textBox5
    //
    this->textBox5->Location = System::Drawing::Point(200, 237);
    this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox5->Name = L"textBox5";
    this->textBox5->Size = System::Drawing::Size(158, 31);
    this->textBox5->TabIndex = 5;
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Location = System::Drawing::Point(34, 358);
    this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(83, 25);
    this->label5->TabIndex = 8;
    this->label5->Text = L"Gender";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Location = System::Drawing::Point(34, 296);
    this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(57, 25);
    this->label6->TabIndex = 10;
    this->label6->Text = L"DOB";
    //
    // textBox7
    //
    this->textBox7->Location = System::Drawing::Point(840, 56);
    this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox7->Name = L"textBox7";
    this->textBox7->Size = System::Drawing::Size(326, 31);
    this->textBox7->TabIndex = 12;
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->Location = System::Drawing::Point(698, 62);
    this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(91, 25);
    this->label7->TabIndex = 12;
    this->label7->Text = L"Address";
    //
    // textBox8
    //
    this->textBox8->Location = System::Drawing::Point(840, 288);
    this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox8->Name = L"textBox8";
    this->textBox8->Size = System::Drawing::Size(326, 31);
    this->textBox8->TabIndex = 16;
    //
    // label8
    //
    this->label8->AutoSize = true;
    this->label8->Location = System::Drawing::Point(698, 287);
    this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(74, 25);
    this->label8->TabIndex = 14;
    this->label8->Text = L"Phone";
    //
    // textBox9
    //
    this->textBox9->Location = System::Drawing::Point(840, 356);
    this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox9->Name = L"textBox9";
    this->textBox9->Size = System::Drawing::Size(326, 31);
    this->textBox9->TabIndex = 17;
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Location = System::Drawing::Point(698, 356);
    this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(65, 25);
    this->label9->TabIndex = 16;
    this->label9->Text = L"Email";
    //
    // textBox11
    //
    this->textBox11->Location = System::Drawing::Point(196, 412);
    this->textBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox11->Name = L"textBox11";
    this->textBox11->Size = System::Drawing::Size(158, 31);
    this->textBox11->TabIndex = 8;
    //
    // label12
    //
    this->label12->AutoSize = true;
    this->label12->Location = System::Drawing::Point(34, 477);
    this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label12->Name = L"label12";
    this->label12->Size = System::Drawing::Size(89, 25);
    this->label12->TabIndex = 23;
    this->label12->Text = L"Position";
    //
    // textBox13
    //
    this->textBox13->Location = System::Drawing::Point(196, 471);
    this->textBox13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox13->Name = L"textBox13";
    this->textBox13->Size = System::Drawing::Size(158, 31);
    this->textBox13->TabIndex = 9;
    //
    // label14
    //
    this->label14->AutoSize = true;
    this->label14->Location = System::Drawing::Point(30, 542);
    this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label14->Name = L"label14";
    this->label14->Size = System::Drawing::Size(136, 25);
    this->label14->TabIndex = 27;
    this->label14->Text = L"Hourly Wage";
    //
    // textBox14
    //
    this->textBox14->Location = System::Drawing::Point(192, 542);
    this->textBox14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox14->Name = L"textBox14";
    this->textBox14->Size = System::Drawing::Size(158, 31);
    this->textBox14->TabIndex = 10;
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(380, 752);
    this->button3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(268, 62);
    this->button3->TabIndex = 24;
    this->button3->Text = L"Enter";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &AddEmployee::addNewEmployee);
    //
    // button4
    //
    this->button4->Location = System::Drawing::Point(734, 752);
    this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->button4->Name = L"button4";
    this->button4->Size = System::Drawing::Size(252, 62);
    this->button4->TabIndex = 25;
    this->button4->Text = L"Back";
    this->button4->UseVisualStyleBackColor = true;
    this->button4->Click +=
        gcnew System::EventHandler(this, &AddEmployee::button4_Click);
    //
    // dateTimePicker1
    //
    this->dateTimePicker1->Location = System::Drawing::Point(200, 296);
    this->dateTimePicker1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->dateTimePicker1->Name = L"dateTimePicker1";
    this->dateTimePicker1->Size = System::Drawing::Size(362, 31);
    this->dateTimePicker1->TabIndex = 6;
    this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(
        this, &AddEmployee::dateTimePicker1_ValueChanged);
    //
    // label10
    //
    this->label10->AutoSize = true;
    this->label10->Location = System::Drawing::Point(698, 235);
    this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(89, 25);
    this->label10->TabIndex = 42;
    this->label10->Text = L"Zipcode";
    //
    // textBox6
    //
    this->textBox6->Location = System::Drawing::Point(840, 231);
    this->textBox6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->textBox6->Name = L"textBox6";
    this->textBox6->Size = System::Drawing::Size(196, 31);
    this->textBox6->TabIndex = 15;
    //
    // label18
    //
    this->label18->AutoSize = true;
    this->label18->Location = System::Drawing::Point(34, 412);
    this->label18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->label18->Name = L"label18";
    this->label18->Size = System::Drawing::Size(50, 25);
    this->label18->TabIndex = 44;
    this->label18->Text = L"Age";
    //
    // textBox10
    //
    this->textBox10->Location = System::Drawing::Point(196, 358);
    this->textBox10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->textBox10->Name = L"textBox10";
    this->textBox10->Size = System::Drawing::Size(162, 31);
    this->textBox10->TabIndex = 7;
    //
    // label11
    //
    this->label11->AutoSize = true;
    this->label11->Location = System::Drawing::Point(636, 502);
    this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(173, 25);
    this->label11->TabIndex = 46;
    this->label11->Text = L"Health Coverage";
    //
    // label13
    //
    this->label13->AutoSize = true;
    this->label13->Location = System::Drawing::Point(636, 567);
    this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label13->Name = L"label13";
    this->label13->Size = System::Drawing::Size(173, 25);
    this->label13->TabIndex = 47;
    this->label13->Text = L"Dental Coverage";
    //
    // label17
    //
    this->label17->AutoSize = true;
    this->label17->Location = System::Drawing::Point(636, 625);
    this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label17->Name = L"label17";
    this->label17->Size = System::Drawing::Size(170, 25);
    this->label17->TabIndex = 48;
    this->label17->Text = L"Vision Coverage";
    //
    // comboBox1
    //
    this->comboBox1->DropDownStyle =
        System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboBox1->FormattingEnabled = true;
    this->comboBox1->Items->AddRange(gcnew cli::array<System::Object ^>(4){
        L"None/Purchase Later", L"Premium Package", L"Gold Package",
        L"Silver Package"});
    this->comboBox1->Location = System::Drawing::Point(848, 492);
    this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->comboBox1->Name = L"comboBox1";
    this->comboBox1->Size = System::Drawing::Size(316, 33);
    this->comboBox1->TabIndex = 21;
    this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(
        this, &AddEmployee::comboBox1_SelectedIndexChanged);
    //
    // comboBox2
    //
    this->comboBox2->DropDownStyle =
        System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboBox2->FormattingEnabled = true;
    this->comboBox2->Items->AddRange(gcnew cli::array<System::Object ^>(4){
        L"None/Purchase Later", L"Premium Package", L"Gold Package",
        L"Silver Package"});
    this->comboBox2->Location = System::Drawing::Point(848, 558);
    this->comboBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->comboBox2->Name = L"comboBox2";
    this->comboBox2->Size = System::Drawing::Size(316, 33);
    this->comboBox2->TabIndex = 22;
    //
    // comboBox3
    //
    this->comboBox3->DropDownStyle =
        System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboBox3->FormattingEnabled = true;
    this->comboBox3->Items->AddRange(gcnew cli::array<System::Object ^>(4){
        L"None/Purchase Later", L"Premium Package", L"Gold Package",
        L"Silver Package"});
    this->comboBox3->Location = System::Drawing::Point(848, 621);
    this->comboBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->comboBox3->Name = L"comboBox3";
    this->comboBox3->Size = System::Drawing::Size(316, 33);
    this->comboBox3->TabIndex = 23;
    //
    // pictureBox1
    //
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(1192, 752);
    this->pictureBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(92, 87);
    this->pictureBox1->TabIndex = 52;
    this->pictureBox1->TabStop = false;
    //
    // textBox12
    //
    this->textBox12->Location = System::Drawing::Point(840, 117);
    this->textBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox12->Name = L"textBox12";
    this->textBox12->Size = System::Drawing::Size(326, 31);
    this->textBox12->TabIndex = 13;
    //
    // label19
    //
    this->label19->AutoSize = true;
    this->label19->Location = System::Drawing::Point(698, 123);
    this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label19->Name = L"label19";
    this->label19->Size = System::Drawing::Size(49, 25);
    this->label19->TabIndex = 54;
    this->label19->Text = L"City";
    //
    // textBox16
    //
    this->textBox16->Location = System::Drawing::Point(840, 177);
    this->textBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox16->Name = L"textBox16";
    this->textBox16->Size = System::Drawing::Size(90, 31);
    this->textBox16->TabIndex = 14;
    //
    // label20
    //
    this->label20->AutoSize = true;
    this->label20->Location = System::Drawing::Point(698, 183);
    this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label20->Name = L"label20";
    this->label20->Size = System::Drawing::Size(62, 25);
    this->label20->TabIndex = 56;
    this->label20->Text = L"State";
    //
    // radioButton1
    //
    this->radioButton1->AutoSize = true;
    this->radioButton1->Location = System::Drawing::Point(642, 423);
    this->radioButton1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->radioButton1->Name = L"radioButton1";
    this->radioButton1->Size = System::Drawing::Size(128, 29);
    this->radioButton1->TabIndex = 18;
    this->radioButton1->TabStop = true;
    this->radioButton1->Text = L"Part time";
    this->radioButton1->UseVisualStyleBackColor = true;
    this->radioButton1->CheckedChanged += gcnew System::EventHandler(
        this, &AddEmployee::radioButton1_CheckedChanged);
    //
    // radioButton2
    //
    this->radioButton2->AutoSize = true;
    this->radioButton2->Location = System::Drawing::Point(840, 423);
    this->radioButton2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->radioButton2->Name = L"radioButton2";
    this->radioButton2->Size = System::Drawing::Size(124, 29);
    this->radioButton2->TabIndex = 19;
    this->radioButton2->TabStop = true;
    this->radioButton2->Text = L"Full time";
    this->radioButton2->UseVisualStyleBackColor = true;
    this->radioButton2->CheckedChanged += gcnew System::EventHandler(
        this, &AddEmployee::radioButton2_CheckedChanged);
    //
    // radioButton3
    //
    this->radioButton3->AutoSize = true;
    this->radioButton3->Location = System::Drawing::Point(1050, 423);
    this->radioButton3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
    this->radioButton3->Name = L"radioButton3";
    this->radioButton3->Size = System::Drawing::Size(104, 29);
    this->radioButton3->TabIndex = 20;
    this->radioButton3->TabStop = true;
    this->radioButton3->Text = L"Salary";
    this->radioButton3->UseVisualStyleBackColor = true;
    this->radioButton3->CheckedChanged += gcnew System::EventHandler(
        this, &AddEmployee::radioButton3_CheckedChanged);
    //
    // textBox15
    //
    this->textBox15->Location = System::Drawing::Point(192, 542);
    this->textBox15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->textBox15->Name = L"textBox15";
    this->textBox15->Size = System::Drawing::Size(158, 31);
    this->textBox15->TabIndex = 60;
    //
    // label15
    //
    this->label15->AutoSize = true;
    this->label15->Location = System::Drawing::Point(30, 542);
    this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label15->Name = L"label15";
    this->label15->Size = System::Drawing::Size(134, 25);
    this->label15->TabIndex = 61;
    this->label15->Text = L"Week Salary";
    //
    // label16
    //
    this->label16->AutoSize = true;
    this->label16->Location = System::Drawing::Point(34, 611);
    this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
    this->label16->Name = L"label16";
    this->label16->Size = System::Drawing::Size(182, 25);
    this->label16->TabIndex = 62;
    this->label16->Text = L"Applied Tax State";
    //
    // comboBox4
    //
    this->comboBox4->DropDownStyle =
        System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboBox4->FormattingEnabled = true;
    this->comboBox4->Items->AddRange(gcnew cli::array<System::Object ^>(3){
        L"New York", L"New Jersey", L"Connecticut"});
    this->comboBox4->Location = System::Drawing::Point(224, 608);
    this->comboBox4->Margin = System::Windows::Forms::Padding(4);
    this->comboBox4->Name = L"comboBox4";
    this->comboBox4->Size = System::Drawing::Size(316, 33);
    this->comboBox4->TabIndex = 63;
    //
    // AddEmployee
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(1280, 840);
    this->Controls->Add(this->comboBox4);
    this->Controls->Add(this->label16);
    this->Controls->Add(this->textBox15);
    this->Controls->Add(this->label15);
    this->Controls->Add(this->radioButton3);
    this->Controls->Add(this->radioButton2);
    this->Controls->Add(this->radioButton1);
    this->Controls->Add(this->textBox16);
    this->Controls->Add(this->label20);
    this->Controls->Add(this->textBox12);
    this->Controls->Add(this->label19);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->comboBox3);
    this->Controls->Add(this->comboBox2);
    this->Controls->Add(this->comboBox1);
    this->Controls->Add(this->label17);
    this->Controls->Add(this->label13);
    this->Controls->Add(this->label11);
    this->Controls->Add(this->textBox10);
    this->Controls->Add(this->label18);
    this->Controls->Add(this->textBox6);
    this->Controls->Add(this->label10);
    this->Controls->Add(this->dateTimePicker1);
    this->Controls->Add(this->button4);
    this->Controls->Add(this->button3);
    this->Controls->Add(this->textBox14);
    this->Controls->Add(this->label14);
    this->Controls->Add(this->textBox13);
    this->Controls->Add(this->label12);
    this->Controls->Add(this->textBox11);
    this->Controls->Add(this->textBox9);
    this->Controls->Add(this->label9);
    this->Controls->Add(this->textBox8);
    this->Controls->Add(this->label8);
    this->Controls->Add(this->textBox7);
    this->Controls->Add(this->label7);
    this->Controls->Add(this->label6);
    this->Controls->Add(this->textBox5);
    this->Controls->Add(this->label5);
    this->Controls->Add(this->textBox4);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->textBox3);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->textBox1);
    this->Controls->Add(this->label1);
    this->FormBorderStyle =
        System::Windows::Forms::FormBorderStyle::FixedSingle;
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
    this->Name = L"AddEmployee";
    this->Text = L"AddEmployee";
    this->Load +=
        gcnew System::EventHandler(this, &AddEmployee::AddEmployee_Load);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();
  }
#pragma endregion
private:
  System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
    this->Hide();
    otherPage->Show();
  }

private:
  System::Void AddEmployee_Load(System::Object ^ sender,
                                System::EventArgs ^ e) {
    label15->Hide();
    textBox15->Hide();
    label14->Hide();
    textBox14->Hide();

    label11->Hide();
    label13->Hide();
    label17->Hide();
    comboBox1->Hide();
    comboBox2->Hide();
    comboBox3->Hide();
  }

private:
  System::Void addNewEmployee(System::Object ^ sender, System::EventArgs ^ e) {

    DateTime ^ A = dateTimePicker1->Value;
    DateTime ^ B = DateTime::Now;

    if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" ||
        textBox5->Text == "" || textBox10->Text == "" ||
        textBox11->Text == "" || textBox13->Text == "" ||
        textBox7->Text == "" || textBox12->Text == "" ||
        textBox16->Text == "" || textBox6->Text == "" || textBox8->Text == "" ||
        textBox9->Text == "") {

      MessageBox::Show("Fill the boxes");
      return;
    }

    GrossIncome gross;
    FedTax fTax;
    NYTax nTax;
    NJTax njTax;
    CTTax ctTax;
    Benfits benfit;
    int overtimeHour;
    double overtimePay;
    double grossIncome;
    double nyTax;
    double nJTax;
    double cTTax;
    double health;
    double dental;
    double vision;
    double netPay;

    Regex ^ R1 = gcnew Regex("^[0-9]{1,6}$");
    if (!(R1->IsMatch(textBox1->Text))) {
      MessageBox::Show("Enter correct ID");
      return;
    }

    Regex ^ R2 = gcnew Regex("^\\d{3}-\\d{2}-\\d{4}$");
    if (!(R2->IsMatch(textBox3->Text))) {
      MessageBox::Show("Enter SSN format XXX-XX-XXXX");
      return;
    }

    Regex ^ R3 = gcnew Regex("^[a-z]{0,10}$");
    if (!(R3->IsMatch(textBox10->Text))) {
      MessageBox::Show("Enter no more than 10 letter in Gender box");
      return;
    }

    Regex ^ R4 = gcnew Regex("^(1[89]|[2-5][0-9]|6[0-5])$");
    if (!(R4->IsMatch(textBox11->Text))) {
      MessageBox::Show("Enter a correct age");
      return;
    }

    if (textBox13->Text == "Admin" || textBox13->Text == "Employee" ||
        textBox13->Text == "HR") {
    } else {
      MessageBox::Show("Enter a correct Position");
      return;
    }

    if (payType == "Full time" || payType == "Part time") {

      if (textBox14->Text == "") {

        MessageBox::Show("Fill the boxes");
        return;
      } else {
        Regex ^ R5 = gcnew Regex("^(3[01]|[12][0-9]|[1-9])$");
        if (!(R5->IsMatch(textBox14->Text))) {
          MessageBox::Show("Enter a correct amount of Hourly Wage");
          return;
        }
      }
    }

    if (payType == "Salary") {
      if (textBox15->Text == "") {

        MessageBox::Show("Fill the boxes");
        return;
      }

      Regex ^ R5 = gcnew Regex(
          "([1-9]|[1-9][0-9]|[1-9][0-9][0-9]|[1-9][0-9][0-9][0-9])");
      if (!(R5->IsMatch(textBox15->Text))) {
        MessageBox::Show("Enter a correct amount of Week Salary");
        return;
      }

      overtimeHour = 0;
      overtimePay = Convert::ToDouble(0);
      grossIncome = Convert::ToDouble(textBox15->Text);
    }

    Regex ^ R6 =
        gcnew Regex("^(\\b\\D+\\b)?\\s*(\\b.*?\\d.*?\\b)\\s*(\\b\\D+\\b)?$");
    if (!(R6->IsMatch(textBox7->Text))) {

      MessageBox::Show("Enter valid Street Number and name");
      return;
    }

    Regex ^ R7 = gcnew Regex("^[a-zA-Z\\s-]+$");
    if (!(R7->IsMatch(textBox12->Text))) {
      MessageBox::Show("Enter valid City");
      return;
    }

    Regex ^ R8 = gcnew Regex(
        "^(?:(A[KLRZ]|C[AOT]|D[CE]|FL|GA|HI|I[ADLN]|K[SY]|LA|M[ADEINOST]|N["
        "CDEHJMVY]|O[HKR]|P[AR]|RI|S[CD]|T[NX]|UT|V[AIT]|W[AIVY]))$");
    if (!(R8->IsMatch(textBox16->Text))) {
      MessageBox::Show("Enter a 2 letter US State");
      return;
    }

    Regex ^ R9 = gcnew Regex("^[0-9]{5}(?:-[0-9]{4})?$");
    if (!(R9->IsMatch(textBox6->Text))) {
      MessageBox::Show("Enter valid zipcode ");
      return;
    }

    Regex ^ R10 = gcnew Regex("\\d{3}-\\d{3}-\\d{4}");
    if (!(R10->IsMatch(textBox8->Text)))
    //	if (textBox4->Text == "" || textBox4->Text->Contains(".com"))
    {
      MessageBox::Show("Enter valid Phone number: 111-111-1111 ");
      return;
    }

    Regex ^ R11 = gcnew Regex("^([\\w\\.\\-]+)@([\\w\\-]+)((\\.(\\w){2,3})+)$");
    if (!(R11->IsMatch(textBox9->Text))) {
      MessageBox::Show("Enter valid email: name@email.com ");
      return;
    }

    try {
      if (payType != "Salary") {
        overtimeHour = gross.calculateOvertimeHour(Hours, payType);
        overtimePay = gross.CalculateOvertimePay(
            overtimeHour, Convert::ToDouble(textBox14->Text));
        grossIncome = gross.CalculateGrossIncome(
            Hours, overtimePay, Convert::ToDouble(textBox14->Text), payType);
      }
    }

    catch (System::FormatException ^ e) {
      return;
    }

    if (comboBox4->Text == "") {
      MessageBox::Show("Select An Applied Tax State", "Error",
                       MessageBoxButtons::OK, MessageBoxIcon::Error);
      return;
    }

    double fedTax = fTax.FedTaxRate(grossIncome);
    if (comboBox4->Text == "New York") {
      nyTax = nTax.NYTaxRate(grossIncome);
      nJTax = 0.00;
      cTTax = 0.00;
    } else if (comboBox4->Text == "New Jersey") {
      nJTax = njTax.NJTaxRate(grossIncome);
      nyTax = 0.00;
      cTTax = 0.00;
    } else {
      cTTax = ctTax.CTTaxRate(grossIncome);
      nyTax = 0.00;
      nJTax = 0.00;
    }
    if (((comboBox1->Text == "") || (comboBox2->Text == "") ||
         (comboBox3->Text == "")) &&
        payType != "Part time") {
      MessageBox::Show("Select An Option For Each Benefit! None Is A Choice.",
                       "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
      return;
    } else {
      try {
        if (payType == "Part time") {
          //	double health = benfit.CalculateHealthCoverage(grossIncome,
          //comboBox1->Text); 	double netPay = grossIncome - (fedTax + nyTax +
          //health);
          if (comboBox4->Text == "New York") {
            double netPay = grossIncome - (fedTax + nyTax);
          } else if (comboBox4->Text == "New Jersey") {
            double netPay = grossIncome - (fedTax + nJTax);
          } else {
            double netPay = grossIncome - (fedTax + cTTax);
          }
        } else {
          health = benfit.CalculateHealthCoverage(grossIncome, comboBox1->Text);
          dental = benfit.CalculateDentalCoverage(grossIncome, comboBox2->Text);
          vision = benfit.CalculateVisionCoverage(grossIncome, comboBox3->Text);
          if (comboBox4->Text == "New York") {
            netPay = grossIncome - (fedTax + nyTax + health + dental + vision);
          } else if (comboBox4->Text == "New Jersy") {
            netPay = grossIncome - (fedTax + nJTax + health + dental + vision);
          } else {
            netPay = grossIncome - (fedTax + cTTax + health + dental + vision);
          }
        }
        OleDbConnection ^ conn =
            gcnew OleDbConnection(ConnectionPath::connectionString);
        conn->Open();
        OleDbCommand ^ cmd = conn->CreateCommand();
        cmd->CommandType = CommandType::Text;

        cmd->CommandText =
            "Insert into EmployeeInfo ([ID], [Password], [SSN], [Firstname], "
            "[Lastname], [DateofBirth]," +
            "[Age], [Gender], [Email], [PhoneNumber], [Address1], [City], "
            "[State], [Zipcode], [Position], " +
            //"[Hours], [OvertimeHours], [OvertimePay], " +
            "[HourlyPay], [SalaryPay], " +
            //"[Weeklygrosspay], "
            "[PayType],  [HireDate], [HealthCoverage], " +
            "[DentalCoverage], [VisionCoverage], [AppliedTaxState]) " +
            //"[FederalTax],[NYTax],[HealthCost],[DentalCost],[VisionCost], " +
            //"[Netpay])" +
            "VALUES(@ID,@Password,@SSN,@Firstname,@Lastname,@DateofBirth,@Age,@"
            "Gender,@Email,@PhoneNumber,@Address1,@City,@State,@Zipcode,@"
            "Position, " +
            //"@Hours,@OvertimeHours,@OvertimePay, " +
            "@HourlyPay, @SalaryPay, " +
            //"@Weeklygrosspay, " +
            "@PayType, @HireDate, @HealthCoverage, " +
            "@DentalCoverage, @VisionCoverage, @AppliedTaxState)"; //+
        //"@FederalTax,@NYTax,@HealthCost,@DentalCost,@VisionCost, " +
        //"@Netpay)";

        /*try
        {*/
        cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
        cmd->Parameters->AddWithValue("@Password", pas);
        cmd->Parameters->AddWithValue("@SSN", textBox3->Text);
        cmd->Parameters->AddWithValue("@Firstname", textBox4->Text);
        cmd->Parameters->AddWithValue("@Lastname", textBox5->Text);
        cmd->Parameters->AddWithValue("@DateofBirth", dateTimePicker1->Value);
        cmd->Parameters->AddWithValue("@Age", Int32::Parse(textBox11->Text));
        cmd->Parameters->AddWithValue("@Gender", textBox10->Text);
        cmd->Parameters->AddWithValue("@Email", textBox9->Text);
        cmd->Parameters->AddWithValue("@PhoneNumber", textBox8->Text);
        cmd->Parameters->AddWithValue("@Address1", textBox7->Text);
        cmd->Parameters->AddWithValue("@City", textBox12->Text);
        cmd->Parameters->AddWithValue("@State", textBox16->Text);
        cmd->Parameters->AddWithValue("@Zipcode", textBox6->Text);
        cmd->Parameters->AddWithValue("@Position", textBox13->Text);

        if (payType != "Salary") {
          cmd->Parameters->AddWithValue("@HourlyPay",
                                        Convert::ToDouble(textBox14->Text));
          cmd->Parameters->AddWithValue("@SalaryPay", Convert::ToDouble(NULL));
        } else {
          cmd->Parameters->AddWithValue("@HourlyPay", Convert::ToDouble(NULL));
          cmd->Parameters->AddWithValue("@SalaryPay",
                                        Convert::ToDouble(textBox15->Text));
        }

        cmd->Parameters->AddWithValue("@PayType", payType);
        cmd->Parameters->AddWithValue("@HireDate", B->Date);

        if (payType == "Part time") {
          cmd->Parameters->AddWithValue("@HealthCoverage", "Can't Purchase");
          cmd->Parameters->AddWithValue("@DentalCoverage", "Can't Purchase");
          cmd->Parameters->AddWithValue("@VisionCoverage", "Can't Purchase");
        } else {
          cmd->Parameters->AddWithValue("@HealthCoverage", comboBox1->Text);
          cmd->Parameters->AddWithValue("@DentalCoverage", comboBox2->Text);
          cmd->Parameters->AddWithValue("@VisionCoverage", comboBox3->Text);
        }

        cmd->Parameters->AddWithValue("@AppliedTaxState", comboBox4->Text);
        /*cmd->Parameters->AddWithValue("@Hours", Int32::Parse(HO));
        cmd->Parameters->AddWithValue("@OvertimeHours", overtimeHour);
        cmd->Parameters->AddWithValue("@OvertimePay", overtimePay);



        cmd->Parameters->AddWithValue("@Weeklygrosspay", grossIncome);

        cmd->Parameters->AddWithValue("@FederalTax", fedTax);
        cmd->Parameters->AddWithValue("@NYTax", nyTax);
        cmd->Parameters->AddWithValue("@HealthCost", health);
        cmd->Parameters->AddWithValue("@DentalCost", dental);
        cmd->Parameters->AddWithValue("@VisionCost", vision);
        cmd->Parameters->AddWithValue("@Netpay", netPay);*/
        /*try
        {*/
        /*}*/
        /*catch (System::Data::OleDb::OleDbException^ e)
        {
                MessageBox::Show("Select An Option For Each Benefit! None Is A
        Choice."); return;
        }*/
        /*}
        catch (System::FormatException^ e)
        {
                return;
        }*/
        try {
          cmd->ExecuteNonQuery();
        } catch (System::Exception ^ e) {
          MessageBox::Show("Added Employee Failed");
          return;
        }
        conn->Close();
        MessageBox::Show("Add New Employee Succeed!");
        this->Close();
        otherPage->Show();
      } catch (System::FormatException ^ e) {
        return;
      }
    }
  }

private:
  System::Void dateTimePicker1_ValueChanged(System::Object ^ sender,
                                            System::EventArgs ^ e) {}

private:
  System::Void radioButton2_CheckedChanged(System::Object ^ sender,
                                           System::EventArgs ^ e) {
    label15->Hide();
    textBox15->Hide();
    label14->Show();
    textBox14->Show();
    Hours = 40;
    HO = "40";
    payType = "Full time";

    label11->Show();
    label13->Show();
    label17->Show();
    comboBox1->Show();
    comboBox2->Show();
    comboBox3->Show();
  }

private:
  System::Void radioButton1_CheckedChanged(System::Object ^ sender,
                                           System::EventArgs ^ e) {
    label15->Hide();
    textBox15->Hide();
    label14->Show();
    textBox14->Show();
    Hours = 20;
    HO = "20";
    payType = "Part time";

    label11->Hide();
    label13->Hide();
    label17->Hide();
    comboBox1->Hide();
    comboBox2->Hide();
    comboBox3->Hide();
  }

private:
  System::Void radioButton3_CheckedChanged(System::Object ^ sender,
                                           System::EventArgs ^ e) {
    label14->Hide();
    textBox14->Hide();
    label15->Show();
    textBox15->Show();
    Hours = 40;
    HO = "40";
    payType = "Salary";

    label11->Show();
    label13->Show();
    label17->Show();
    comboBox1->Show();
    comboBox2->Show();
    comboBox3->Show();
  }

private:
  System::Void comboBox1_SelectedIndexChanged(System::Object ^ sender,
                                              System::EventArgs ^ e) {}
};
} // namespace Payrolls
