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
using namespace System::Drawing::Printing;

/// <summary>
/// Summary for ViewPaystub
/// </summary>
public
ref class ViewPaystub : public System::Windows::Forms::Form {
public:
  Form ^ otherPage;
  ViewPaystub(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

public:
  ViewPaystub(String ^ a) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
    id = a;
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~ViewPaystub() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Label ^ label1;

protected:
private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::Label ^ label7;

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
  System::Windows::Forms::Label ^ label13;

private:
  System::Windows::Forms::Label ^ label14;

private:
  System::Windows::Forms::Label ^ label15;

private:
  System::Windows::Forms::Label ^ label16;

private:
  System::Windows::Forms::Label ^ label17;

private:
  System::Windows::Forms::Label ^ label18;

private:
  System::Windows::Forms::Label ^ label19;

private:
  System::Windows::Forms::Label ^ label20;

private:
  System::Windows::Forms::Label ^ label21;

private:
  System::Windows::Forms::Label ^ label22;

private:
  System::Windows::Forms::Label ^ label23;

private:
  System::Windows::Forms::Label ^ label24;

private:
  System::Windows::Forms::Label ^ label25;

private:
  System::Windows::Forms::Label ^ label26;

private:
  System::Windows::Forms::Label ^ label27;

private:
  System::Windows::Forms::Label ^ label28;

private:
  System::Windows::Forms::Label ^ label29;

private:
  System::Windows::Forms::Label ^ label30;

private:
  System::Windows::Forms::Label ^ label31;

private:
  System::Windows::Forms::Label ^ label32;

private:
  System::Windows::Forms::Label ^ label33;

private:
  System::Windows::Forms::Label ^ label34;

private:
  System::Windows::Forms::Label ^ label35;

private:
  System::Windows::Forms::Label ^ label36;

private:
  System::Windows::Forms::Label ^ label37;

private:
  System::Windows::Forms::Label ^ label38;

private:
  System::Windows::Forms::Label ^ label39;

private:
  System::Windows::Forms::Label ^ label40;

private:
  System::Windows::Forms::Label ^ label41;

private:
  System::Windows::Forms::Label ^ label42;

private:
  System::Windows::Forms::Label ^ label43;

private:
  System::Windows::Forms::Label ^ label44;

private:
  System::Windows::Forms::Label ^ label45;

private:
  System::Windows::Forms::Label ^ label46;

private:
  System::Windows::Forms::Label ^ label47;

private:
  System::Windows::Forms::Label ^ label48;

private:
  System::Windows::Forms::Label ^ label49;

private:
  System::Windows::Forms::Label ^ label50;

private:
  System::Windows::Forms::Label ^ label51;

private:
  System::Windows::Forms::Label ^ label52;

private:
  System::Windows::Forms::Label ^ label53;

private:
  System::Windows::Forms::Label ^ label54;

private:
  System::Windows::Forms::Label ^ label55;

private:
  System::Windows::Forms::Label ^ label56;

private:
  System::Windows::Forms::Label ^ label57;

private:
  System::Windows::Forms::Label ^ label58;

private:
  System::Windows::Forms::Label ^ label59;

private:
  System::Windows::Forms::Label ^ label60;

private:
  System::Windows::Forms::Label ^ label61;

private:
  System::Windows::Forms::Label ^ label62;

private:
  System::Windows::Forms::Label ^ label63;

private:
  System::Windows::Forms::Label ^ label64;

private:
  System::Windows::Forms::Label ^ label65;

private:
  System::Windows::Forms::Label ^ label66;

private:
  System::Windows::Forms::Label ^ label67;

private:
  System::Windows::Forms::Label ^ label68;

private:
  System::Windows::Forms::Label ^ label69;

private:
  System::Windows::Forms::Label ^ label70;

private:
  System::Windows::Forms::Label ^ label71;

private:
  System::Windows::Forms::Label ^ label72;

private:
  System::Windows::Forms::Label ^ label73;

private:
  System::Windows::Forms::Label ^ label74;

private:
  System::Windows::Forms::Label ^ label75;

private:
  System::Windows::Forms::Label ^ label76;

private:
  System::Windows::Forms::Label ^ label77;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::Label ^ label78;

private:
  System::Windows::Forms::Label ^ label79;

private:
  System::Windows::Forms::Button ^ paystubBack_button;

private:
  System::Windows::Forms::Label ^ label80;

private:
  System::Windows::Forms::Label ^ label83;

private:
  System::Windows::Forms::Label ^ label86;

private:
  System::Windows::Forms::Label ^ label87;

private:
  System::Windows::Forms::PictureBox ^ pictureBox1;

private:
  String ^ id = "";
  Bitmap ^ bitmap;

private:
  System::Windows::Forms::Label ^ label92;

private:
  System::Windows::Forms::Label ^ label93;

private:
  System::Windows::Forms::Label ^ label94;

private:
  System::Windows::Forms::Label ^ label95;

private:
  System::Windows::Forms::Label ^ label96;

private:
  System::Windows::Forms::Label ^ label97;

private:
  System::Windows::Forms::Button ^ print_check_btn;

private:
  System::Drawing::Printing::PrintDocument ^ printDocument1;

private:
  System::Windows::Forms::PrintPreviewDialog ^ printPreviewDialog1;

private:
  System::Windows::Forms::Label ^ label98;

private:
  System::Windows::Forms::Label ^ label99;

private:
  System::Windows::Forms::Label ^ label100;

private:
  System::Windows::Forms::Label ^ label101;

private:
  System::Windows::Forms::Label ^ label81;

private:
  System::Windows::Forms::Label ^ label82;

private:
  System::Windows::Forms::Label ^ label84;

private:
  System::Windows::Forms::Label ^ label85;

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
            ViewPaystub::typeid));
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->label13 = (gcnew System::Windows::Forms::Label());
    this->label14 = (gcnew System::Windows::Forms::Label());
    this->label15 = (gcnew System::Windows::Forms::Label());
    this->label16 = (gcnew System::Windows::Forms::Label());
    this->label17 = (gcnew System::Windows::Forms::Label());
    this->label18 = (gcnew System::Windows::Forms::Label());
    this->label19 = (gcnew System::Windows::Forms::Label());
    this->label20 = (gcnew System::Windows::Forms::Label());
    this->label21 = (gcnew System::Windows::Forms::Label());
    this->label22 = (gcnew System::Windows::Forms::Label());
    this->label23 = (gcnew System::Windows::Forms::Label());
    this->label24 = (gcnew System::Windows::Forms::Label());
    this->label25 = (gcnew System::Windows::Forms::Label());
    this->label26 = (gcnew System::Windows::Forms::Label());
    this->label27 = (gcnew System::Windows::Forms::Label());
    this->label28 = (gcnew System::Windows::Forms::Label());
    this->label29 = (gcnew System::Windows::Forms::Label());
    this->label30 = (gcnew System::Windows::Forms::Label());
    this->label31 = (gcnew System::Windows::Forms::Label());
    this->label32 = (gcnew System::Windows::Forms::Label());
    this->label33 = (gcnew System::Windows::Forms::Label());
    this->label34 = (gcnew System::Windows::Forms::Label());
    this->label35 = (gcnew System::Windows::Forms::Label());
    this->label36 = (gcnew System::Windows::Forms::Label());
    this->label37 = (gcnew System::Windows::Forms::Label());
    this->label38 = (gcnew System::Windows::Forms::Label());
    this->label39 = (gcnew System::Windows::Forms::Label());
    this->label40 = (gcnew System::Windows::Forms::Label());
    this->label41 = (gcnew System::Windows::Forms::Label());
    this->label42 = (gcnew System::Windows::Forms::Label());
    this->label43 = (gcnew System::Windows::Forms::Label());
    this->label44 = (gcnew System::Windows::Forms::Label());
    this->label45 = (gcnew System::Windows::Forms::Label());
    this->label46 = (gcnew System::Windows::Forms::Label());
    this->label47 = (gcnew System::Windows::Forms::Label());
    this->label48 = (gcnew System::Windows::Forms::Label());
    this->label49 = (gcnew System::Windows::Forms::Label());
    this->label50 = (gcnew System::Windows::Forms::Label());
    this->label51 = (gcnew System::Windows::Forms::Label());
    this->label52 = (gcnew System::Windows::Forms::Label());
    this->label53 = (gcnew System::Windows::Forms::Label());
    this->label54 = (gcnew System::Windows::Forms::Label());
    this->label55 = (gcnew System::Windows::Forms::Label());
    this->label56 = (gcnew System::Windows::Forms::Label());
    this->label57 = (gcnew System::Windows::Forms::Label());
    this->label58 = (gcnew System::Windows::Forms::Label());
    this->label59 = (gcnew System::Windows::Forms::Label());
    this->label60 = (gcnew System::Windows::Forms::Label());
    this->label61 = (gcnew System::Windows::Forms::Label());
    this->label62 = (gcnew System::Windows::Forms::Label());
    this->label63 = (gcnew System::Windows::Forms::Label());
    this->label64 = (gcnew System::Windows::Forms::Label());
    this->label65 = (gcnew System::Windows::Forms::Label());
    this->label66 = (gcnew System::Windows::Forms::Label());
    this->label67 = (gcnew System::Windows::Forms::Label());
    this->label68 = (gcnew System::Windows::Forms::Label());
    this->label69 = (gcnew System::Windows::Forms::Label());
    this->label70 = (gcnew System::Windows::Forms::Label());
    this->label71 = (gcnew System::Windows::Forms::Label());
    this->label72 = (gcnew System::Windows::Forms::Label());
    this->label73 = (gcnew System::Windows::Forms::Label());
    this->label74 = (gcnew System::Windows::Forms::Label());
    this->label75 = (gcnew System::Windows::Forms::Label());
    this->label76 = (gcnew System::Windows::Forms::Label());
    this->label77 = (gcnew System::Windows::Forms::Label());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->label78 = (gcnew System::Windows::Forms::Label());
    this->label79 = (gcnew System::Windows::Forms::Label());
    this->paystubBack_button = (gcnew System::Windows::Forms::Button());
    this->label80 = (gcnew System::Windows::Forms::Label());
    this->label83 = (gcnew System::Windows::Forms::Label());
    this->label86 = (gcnew System::Windows::Forms::Label());
    this->label87 = (gcnew System::Windows::Forms::Label());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->label92 = (gcnew System::Windows::Forms::Label());
    this->label93 = (gcnew System::Windows::Forms::Label());
    this->label94 = (gcnew System::Windows::Forms::Label());
    this->label95 = (gcnew System::Windows::Forms::Label());
    this->label96 = (gcnew System::Windows::Forms::Label());
    this->label97 = (gcnew System::Windows::Forms::Label());
    this->print_check_btn = (gcnew System::Windows::Forms::Button());
    this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
    this->printPreviewDialog1 =
        (gcnew System::Windows::Forms::PrintPreviewDialog());
    this->label98 = (gcnew System::Windows::Forms::Label());
    this->label99 = (gcnew System::Windows::Forms::Label());
    this->label100 = (gcnew System::Windows::Forms::Label());
    this->label101 = (gcnew System::Windows::Forms::Label());
    this->label81 = (gcnew System::Windows::Forms::Label());
    this->label82 = (gcnew System::Windows::Forms::Label());
    this->label84 = (gcnew System::Windows::Forms::Label());
    this->label85 = (gcnew System::Windows::Forms::Label());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->BeginInit();
    this->SuspendLayout();
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(58, 47);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(60, 13);
    this->label1->TabIndex = 0;
    this->label1->Text = L"SHmoney";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label2->Location = System::Drawing::Point(58, 60);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(78, 13);
    this->label2->TabIndex = 1;
    this->label2->Text = L"55 Victory Blvd";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label3->Location = System::Drawing::Point(58, 73);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(126, 13);
    this->label3->TabIndex = 2;
    this->label3->Text = L"Staten Island, NY 10301 ";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label4->Location = System::Drawing::Point(58, 86);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(79, 13);
    this->label4->TabIndex = 3;
    this->label4->Text = L"(646) 555-5555";
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label5->Location = System::Drawing::Point(188, 47);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(46, 13);
    this->label5->TabIndex = 4;
    this->label5->Text = L"LName";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label6->Location = System::Drawing::Point(240, 47);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(39, 13);
    this->label6->TabIndex = 5;
    this->label6->Text = L"Name";
    this->label6->Click +=
        gcnew System::EventHandler(this, &ViewPaystub::label6_Click);
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label7->Location = System::Drawing::Point(188, 60);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(45, 13);
    this->label7->TabIndex = 6;
    this->label7->Text = L"Address";
    //
    // label8
    //
    this->label8->AutoSize = true;
    this->label8->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label8->Location = System::Drawing::Point(190, 86);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(75, 13);
    this->label8->TabIndex = 7;
    this->label8->Text = L"PhoneNumber";
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label9->Location = System::Drawing::Point(306, 47);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(29, 13);
    this->label9->TabIndex = 8;
    this->label9->Text = L"SSN";
    //
    // label10
    //
    this->label10->AutoSize = true;
    this->label10->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label10->Location = System::Drawing::Point(387, 47);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(55, 13);
    this->label10->TabIndex = 9;
    this->label10->Text = L"SSN Here";
    //
    // label11
    //
    this->label11->AutoSize = true;
    this->label11->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label11->Location = System::Drawing::Point(306, 60);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(55, 13);
    this->label11->TabIndex = 10;
    this->label11->Text = L"Gross Pay";
    //
    // label12
    //
    this->label12->AutoSize = true;
    this->label12->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label12->Location = System::Drawing::Point(387, 60);
    this->label12->Name = L"label12";
    this->label12->Size = System::Drawing::Size(81, 13);
    this->label12->TabIndex = 11;
    this->label12->Text = L"Gross Pay Here";
    //
    // label13
    //
    this->label13->AutoSize = true;
    this->label13->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label13->Location = System::Drawing::Point(306, 73);
    this->label13->Name = L"label13";
    this->label13->Size = System::Drawing::Size(45, 13);
    this->label13->TabIndex = 12;
    this->label13->Text = L"Net Pay";
    //
    // label14
    //
    this->label14->AutoSize = true;
    this->label14->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label14->Location = System::Drawing::Point(387, 73);
    this->label14->Name = L"label14";
    this->label14->Size = System::Drawing::Size(71, 13);
    this->label14->TabIndex = 13;
    this->label14->Text = L"Net Pay Here";
    //
    // label15
    //
    this->label15->AutoSize = true;
    this->label15->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label15->Location = System::Drawing::Point(489, 47);
    this->label15->Name = L"label15";
    this->label15->Size = System::Drawing::Size(67, 13);
    this->label15->TabIndex = 14;
    this->label15->Text = L"Period Begin";
    //
    // label16
    //
    this->label16->AutoSize = true;
    this->label16->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label16->Location = System::Drawing::Point(561, 47);
    this->label16->Name = L"label16";
    this->label16->Size = System::Drawing::Size(55, 13);
    this->label16->TabIndex = 15;
    this->label16->Text = L"Start Date";
    //
    // label17
    //
    this->label17->AutoSize = true;
    this->label17->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label17->Location = System::Drawing::Point(489, 60);
    this->label17->Name = L"label17";
    this->label17->Size = System::Drawing::Size(59, 13);
    this->label17->TabIndex = 16;
    this->label17->Text = L"Period End";
    //
    // label18
    //
    this->label18->AutoSize = true;
    this->label18->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label18->Location = System::Drawing::Point(561, 60);
    this->label18->Name = L"label18";
    this->label18->Size = System::Drawing::Size(52, 13);
    this->label18->TabIndex = 17;
    this->label18->Text = L"End Date";
    //
    // label19
    //
    this->label19->AutoSize = true;
    this->label19->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label19->Location = System::Drawing::Point(490, 73);
    this->label19->Name = L"label19";
    this->label19->Size = System::Drawing::Size(58, 13);
    this->label19->TabIndex = 18;
    this->label19->Text = L"Check No.";
    //
    // label20
    //
    this->label20->AutoSize = true;
    this->label20->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label20->Location = System::Drawing::Point(563, 73);
    this->label20->Name = L"label20";
    this->label20->Size = System::Drawing::Size(10, 13);
    this->label20->TabIndex = 19;
    this->label20->Text = L"-";
    //
    // label21
    //
    this->label21->AutoSize = true;
    this->label21->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label21->Location = System::Drawing::Point(58, 378);
    this->label21->Name = L"label21";
    this->label21->Size = System::Drawing::Size(79, 13);
    this->label21->TabIndex = 23;
    this->label21->Text = L"(646) 555-5555";
    //
    // label22
    //
    this->label22->AutoSize = true;
    this->label22->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label22->Location = System::Drawing::Point(58, 365);
    this->label22->Name = L"label22";
    this->label22->Size = System::Drawing::Size(126, 13);
    this->label22->TabIndex = 22;
    this->label22->Text = L"Staten Island, NY 10301 ";
    //
    // label23
    //
    this->label23->AutoSize = true;
    this->label23->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label23->Location = System::Drawing::Point(58, 352);
    this->label23->Name = L"label23";
    this->label23->Size = System::Drawing::Size(78, 13);
    this->label23->TabIndex = 21;
    this->label23->Text = L"55 Victory Blvd";
    //
    // label24
    //
    this->label24->AutoSize = true;
    this->label24->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label24->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label24->Location = System::Drawing::Point(58, 339);
    this->label24->Name = L"label24";
    this->label24->Size = System::Drawing::Size(60, 13);
    this->label24->TabIndex = 20;
    this->label24->Text = L"SHmoney";
    //
    // label25
    //
    this->label25->AutoSize = true;
    this->label25->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label25->Location = System::Drawing::Point(306, 365);
    this->label25->Name = L"label25";
    this->label25->Size = System::Drawing::Size(45, 13);
    this->label25->TabIndex = 30;
    this->label25->Text = L"Net Pay";
    //
    // label26
    //
    this->label26->AutoSize = true;
    this->label26->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label26->Location = System::Drawing::Point(306, 352);
    this->label26->Name = L"label26";
    this->label26->Size = System::Drawing::Size(55, 13);
    this->label26->TabIndex = 29;
    this->label26->Text = L"Gross Pay";
    //
    // label27
    //
    this->label27->AutoSize = true;
    this->label27->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label27->Location = System::Drawing::Point(306, 339);
    this->label27->Name = L"label27";
    this->label27->Size = System::Drawing::Size(29, 13);
    this->label27->TabIndex = 28;
    this->label27->Text = L"SSN";
    //
    // label28
    //
    this->label28->AutoSize = true;
    this->label28->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label28->Location = System::Drawing::Point(188, 378);
    this->label28->Name = L"label28";
    this->label28->Size = System::Drawing::Size(75, 13);
    this->label28->TabIndex = 27;
    this->label28->Text = L"PhoneNumber";
    //
    // label29
    //
    this->label29->AutoSize = true;
    this->label29->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label29->Location = System::Drawing::Point(188, 352);
    this->label29->Name = L"label29";
    this->label29->Size = System::Drawing::Size(45, 13);
    this->label29->TabIndex = 26;
    this->label29->Text = L"Address";
    //
    // label30
    //
    this->label30->AutoSize = true;
    this->label30->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label30->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label30->Location = System::Drawing::Point(240, 339);
    this->label30->Name = L"label30";
    this->label30->Size = System::Drawing::Size(39, 13);
    this->label30->TabIndex = 25;
    this->label30->Text = L"Name";
    //
    // label31
    //
    this->label31->AutoSize = true;
    this->label31->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label31->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label31->Location = System::Drawing::Point(188, 339);
    this->label31->Name = L"label31";
    this->label31->Size = System::Drawing::Size(46, 13);
    this->label31->TabIndex = 24;
    this->label31->Text = L"LName";
    //
    // label32
    //
    this->label32->AutoSize = true;
    this->label32->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label32->Location = System::Drawing::Point(563, 365);
    this->label32->Name = L"label32";
    this->label32->Size = System::Drawing::Size(10, 13);
    this->label32->TabIndex = 39;
    this->label32->Text = L"-";
    //
    // label33
    //
    this->label33->AutoSize = true;
    this->label33->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label33->Location = System::Drawing::Point(490, 365);
    this->label33->Name = L"label33";
    this->label33->Size = System::Drawing::Size(58, 13);
    this->label33->TabIndex = 38;
    this->label33->Text = L"Check No.";
    //
    // label34
    //
    this->label34->AutoSize = true;
    this->label34->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label34->Location = System::Drawing::Point(561, 352);
    this->label34->Name = L"label34";
    this->label34->Size = System::Drawing::Size(52, 13);
    this->label34->TabIndex = 37;
    this->label34->Text = L"End Date";
    //
    // label35
    //
    this->label35->AutoSize = true;
    this->label35->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label35->Location = System::Drawing::Point(489, 352);
    this->label35->Name = L"label35";
    this->label35->Size = System::Drawing::Size(59, 13);
    this->label35->TabIndex = 36;
    this->label35->Text = L"Period End";
    //
    // label36
    //
    this->label36->AutoSize = true;
    this->label36->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label36->Location = System::Drawing::Point(561, 339);
    this->label36->Name = L"label36";
    this->label36->Size = System::Drawing::Size(55, 13);
    this->label36->TabIndex = 35;
    this->label36->Text = L"Start Date";
    //
    // label37
    //
    this->label37->AutoSize = true;
    this->label37->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label37->Location = System::Drawing::Point(489, 339);
    this->label37->Name = L"label37";
    this->label37->Size = System::Drawing::Size(67, 13);
    this->label37->TabIndex = 34;
    this->label37->Text = L"Period Begin";
    //
    // label38
    //
    this->label38->AutoSize = true;
    this->label38->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label38->Location = System::Drawing::Point(387, 365);
    this->label38->Name = L"label38";
    this->label38->Size = System::Drawing::Size(71, 13);
    this->label38->TabIndex = 33;
    this->label38->Text = L"Net Pay Here";
    //
    // label39
    //
    this->label39->AutoSize = true;
    this->label39->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label39->Location = System::Drawing::Point(387, 352);
    this->label39->Name = L"label39";
    this->label39->Size = System::Drawing::Size(81, 13);
    this->label39->TabIndex = 32;
    this->label39->Text = L"Gross Pay Here";
    //
    // label40
    //
    this->label40->AutoSize = true;
    this->label40->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label40->Location = System::Drawing::Point(387, 339);
    this->label40->Name = L"label40";
    this->label40->Size = System::Drawing::Size(55, 13);
    this->label40->TabIndex = 31;
    this->label40->Text = L"SSN Here";
    //
    // label41
    //
    this->label41->AutoSize = true;
    this->label41->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label41->Location = System::Drawing::Point(124, 665);
    this->label41->Name = L"label41";
    this->label41->Size = System::Drawing::Size(79, 13);
    this->label41->TabIndex = 43;
    this->label41->Text = L"(646) 555-5555";
    //
    // label42
    //
    this->label42->AutoSize = true;
    this->label42->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label42->Location = System::Drawing::Point(124, 652);
    this->label42->Name = L"label42";
    this->label42->Size = System::Drawing::Size(126, 13);
    this->label42->TabIndex = 42;
    this->label42->Text = L"Staten Island, NY 10301 ";
    //
    // label43
    //
    this->label43->AutoSize = true;
    this->label43->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label43->Location = System::Drawing::Point(124, 639);
    this->label43->Name = L"label43";
    this->label43->Size = System::Drawing::Size(78, 13);
    this->label43->TabIndex = 41;
    this->label43->Text = L"55 Victory Blvd";
    //
    // label44
    //
    this->label44->AutoSize = true;
    this->label44->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label44->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label44->Location = System::Drawing::Point(124, 626);
    this->label44->Name = L"label44";
    this->label44->Size = System::Drawing::Size(60, 13);
    this->label44->TabIndex = 40;
    this->label44->Text = L"SHmoney";
    //
    // label45
    //
    this->label45->AutoSize = true;
    this->label45->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label45->Location = System::Drawing::Point(58, 155);
    this->label45->Name = L"label45";
    this->label45->Size = System::Drawing::Size(36, 13);
    this->label45->TabIndex = 44;
    this->label45->Text = L"Salary";
    //
    // label46
    //
    this->label46->AutoSize = true;
    this->label46->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label46->Location = System::Drawing::Point(58, 441);
    this->label46->Name = L"label46";
    this->label46->Size = System::Drawing::Size(36, 13);
    this->label46->TabIndex = 45;
    this->label46->Text = L"Salary";
    //
    // label47
    //
    this->label47->AutoSize = true;
    this->label47->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label47->Location = System::Drawing::Point(188, 155);
    this->label47->Name = L"label47";
    this->label47->Size = System::Drawing::Size(30, 13);
    this->label47->TabIndex = 46;
    this->label47->Text = L"Hour";
    //
    // label48
    //
    this->label48->AutoSize = true;
    this->label48->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label48->Location = System::Drawing::Point(188, 441);
    this->label48->Name = L"label48";
    this->label48->Size = System::Drawing::Size(30, 13);
    this->label48->TabIndex = 47;
    this->label48->Text = L"Hour";
    //
    // label49
    //
    this->label49->AutoSize = true;
    this->label49->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label49->Location = System::Drawing::Point(273, 155);
    this->label49->Name = L"label49";
    this->label49->Size = System::Drawing::Size(62, 13);
    this->label49->TabIndex = 48;
    this->label49->Text = L"Salary Here";
    //
    // label50
    //
    this->label50->AutoSize = true;
    this->label50->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label50->Location = System::Drawing::Point(273, 441);
    this->label50->Name = L"label50";
    this->label50->Size = System::Drawing::Size(62, 13);
    this->label50->TabIndex = 49;
    this->label50->Text = L"Salary Here";
    //
    // label51
    //
    this->label51->AutoSize = true;
    this->label51->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label51->Location = System::Drawing::Point(58, 181);
    this->label51->Name = L"label51";
    this->label51->Size = System::Drawing::Size(49, 13);
    this->label51->TabIndex = 50;
    this->label51->Text = L"Overtime";
    //
    // label52
    //
    this->label52->AutoSize = true;
    this->label52->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label52->Location = System::Drawing::Point(188, 181);
    this->label52->Name = L"label52";
    this->label52->Size = System::Drawing::Size(30, 13);
    this->label52->TabIndex = 51;
    this->label52->Text = L"Hour";
    //
    // label53
    //
    this->label53->AutoSize = true;
    this->label53->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label53->Location = System::Drawing::Point(58, 470);
    this->label53->Name = L"label53";
    this->label53->Size = System::Drawing::Size(49, 13);
    this->label53->TabIndex = 52;
    this->label53->Text = L"Overtime";
    //
    // label54
    //
    this->label54->AutoSize = true;
    this->label54->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label54->Location = System::Drawing::Point(188, 470);
    this->label54->Name = L"label54";
    this->label54->Size = System::Drawing::Size(30, 13);
    this->label54->TabIndex = 53;
    this->label54->Text = L"Hour";
    //
    // label55
    //
    this->label55->AutoSize = true;
    this->label55->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label55->Location = System::Drawing::Point(273, 181);
    this->label55->Name = L"label55";
    this->label55->Size = System::Drawing::Size(75, 13);
    this->label55->TabIndex = 54;
    this->label55->Text = L"Overtime Here";
    //
    // label56
    //
    this->label56->AutoSize = true;
    this->label56->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label56->Location = System::Drawing::Point(273, 470);
    this->label56->Name = L"label56";
    this->label56->Size = System::Drawing::Size(75, 13);
    this->label56->TabIndex = 55;
    this->label56->Text = L"Overtime Here";
    //
    // label57
    //
    this->label57->AutoSize = true;
    this->label57->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label57->Location = System::Drawing::Point(58, 225);
    this->label57->Name = L"label57";
    this->label57->Size = System::Drawing::Size(55, 13);
    this->label57->TabIndex = 56;
    this->label57->Text = L"Gross Pay";
    //
    // label58
    //
    this->label58->AutoSize = true;
    this->label58->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label58->Location = System::Drawing::Point(58, 510);
    this->label58->Name = L"label58";
    this->label58->Size = System::Drawing::Size(55, 13);
    this->label58->TabIndex = 57;
    this->label58->Text = L"Gross Pay";
    //
    // label59
    //
    this->label59->AutoSize = true;
    this->label59->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label59->Location = System::Drawing::Point(273, 225);
    this->label59->Name = L"label59";
    this->label59->Size = System::Drawing::Size(81, 13);
    this->label59->TabIndex = 58;
    this->label59->Text = L"Gross Pay Here";
    //
    // label60
    //
    this->label60->AutoSize = true;
    this->label60->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label60->Location = System::Drawing::Point(273, 510);
    this->label60->Name = L"label60";
    this->label60->Size = System::Drawing::Size(81, 13);
    this->label60->TabIndex = 59;
    this->label60->Text = L"Gross Pay Here";
    //
    // label61
    //
    this->label61->AutoSize = true;
    this->label61->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label61->Location = System::Drawing::Point(419, 155);
    this->label61->Name = L"label61";
    this->label61->Size = System::Drawing::Size(63, 13);
    this->label61->TabIndex = 60;
    this->label61->Text = L"Federal Tax";
    //
    // label62
    //
    this->label62->AutoSize = true;
    this->label62->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label62->Location = System::Drawing::Point(419, 441);
    this->label62->Name = L"label62";
    this->label62->Size = System::Drawing::Size(63, 13);
    this->label62->TabIndex = 61;
    this->label62->Text = L"Federal Tax";
    //
    // label63
    //
    this->label63->AutoSize = true;
    this->label63->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label63->Location = System::Drawing::Point(419, 168);
    this->label63->Name = L"label63";
    this->label63->Size = System::Drawing::Size(53, 13);
    this->label63->TabIndex = 62;
    this->label63->Text = L"State Tax";
    //
    // label64
    //
    this->label64->AutoSize = true;
    this->label64->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label64->Location = System::Drawing::Point(419, 454);
    this->label64->Name = L"label64";
    this->label64->Size = System::Drawing::Size(53, 13);
    this->label64->TabIndex = 63;
    this->label64->Text = L"State Tax";
    //
    // label65
    //
    this->label65->AutoSize = true;
    this->label65->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label65->Location = System::Drawing::Point(527, 168);
    this->label65->Name = L"label65";
    this->label65->Size = System::Drawing::Size(79, 13);
    this->label65->TabIndex = 64;
    this->label65->Text = L"State Tax Here";
    //
    // label66
    //
    this->label66->AutoSize = true;
    this->label66->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label66->Location = System::Drawing::Point(527, 454);
    this->label66->Name = L"label66";
    this->label66->Size = System::Drawing::Size(79, 13);
    this->label66->TabIndex = 65;
    this->label66->Text = L"State Tax Here";
    //
    // label67
    //
    this->label67->AutoSize = true;
    this->label67->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label67->Location = System::Drawing::Point(527, 155);
    this->label67->Name = L"label67";
    this->label67->Size = System::Drawing::Size(89, 13);
    this->label67->TabIndex = 66;
    this->label67->Text = L"Federal Tax Here";
    //
    // label68
    //
    this->label68->AutoSize = true;
    this->label68->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label68->Location = System::Drawing::Point(527, 441);
    this->label68->Name = L"label68";
    this->label68->Size = System::Drawing::Size(89, 13);
    this->label68->TabIndex = 67;
    this->label68->Text = L"Federal Tax Here";
    //
    // label69
    //
    this->label69->AutoSize = true;
    this->label69->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label69->Location = System::Drawing::Point(419, 249);
    this->label69->Name = L"label69";
    this->label69->Size = System::Drawing::Size(45, 13);
    this->label69->TabIndex = 68;
    this->label69->Text = L"Net Pay";
    //
    // label70
    //
    this->label70->AutoSize = true;
    this->label70->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label70->Location = System::Drawing::Point(419, 528);
    this->label70->Name = L"label70";
    this->label70->Size = System::Drawing::Size(45, 13);
    this->label70->TabIndex = 69;
    this->label70->Text = L"Net Pay";
    //
    // label71
    //
    this->label71->AutoSize = true;
    this->label71->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label71->Location = System::Drawing::Point(535, 249);
    this->label71->Name = L"label71";
    this->label71->Size = System::Drawing::Size(71, 13);
    this->label71->TabIndex = 70;
    this->label71->Text = L"Net Pay Here";
    //
    // label72
    //
    this->label72->AutoSize = true;
    this->label72->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label72->Location = System::Drawing::Point(535, 528);
    this->label72->Name = L"label72";
    this->label72->Size = System::Drawing::Size(71, 13);
    this->label72->TabIndex = 71;
    this->label72->Text = L"Net Pay Here";
    //
    // label73
    //
    this->label73->AutoSize = true;
    this->label73->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label73->Location = System::Drawing::Point(113, 706);
    this->label73->Name = L"label73";
    this->label73->Size = System::Drawing::Size(35, 13);
    this->label73->TabIndex = 72;
    this->label73->Text = L"Name";
    //
    // label74
    //
    this->label74->AutoSize = true;
    this->label74->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label74->Location = System::Drawing::Point(149, 706);
    this->label74->Name = L"label74";
    this->label74->Size = System::Drawing::Size(41, 13);
    this->label74->TabIndex = 73;
    this->label74->Text = L"LName";
    //
    // label75
    //
    this->label75->AutoSize = true;
    this->label75->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label75->Location = System::Drawing::Point(571, 715);
    this->label75->Name = L"label75";
    this->label75->Size = System::Drawing::Size(45, 13);
    this->label75->TabIndex = 74;
    this->label75->Text = L"Net Pay";
    //
    // label76
    //
    this->label76->AutoSize = true;
    this->label76->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label76->Location = System::Drawing::Point(49, 735);
    this->label76->Name = L"label76";
    this->label76->Size = System::Drawing::Size(10, 13);
    this->label76->TabIndex = 75;
    this->label76->Text = L"-";
    //
    // label77
    //
    this->label77->AutoSize = true;
    this->label77->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label77->Location = System::Drawing::Point(478, 814);
    this->label77->Name = L"label77";
    this->label77->Size = System::Drawing::Size(52, 13);
    this->label77->TabIndex = 76;
    this->label77->Text = L"Signature";
    //
    // textBox1
    //
    this->textBox1->Location = System::Drawing::Point(85, 915);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(84, 20);
    this->textBox1->TabIndex = 0;
    this->textBox1->TextChanged +=
        gcnew System::EventHandler(this, &ViewPaystub::textBox1_TextChanged);
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(175, 913);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(105, 23);
    this->button1->TabIndex = 1;
    this->button1->Text = L"Retrieve Info";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &ViewPaystub::button1_Click);
    //
    // label78
    //
    this->label78->AutoSize = true;
    this->label78->BackColor = System::Drawing::SystemColors::Control;
    this->label78->Location = System::Drawing::Point(12, 918);
    this->label78->Name = L"label78";
    this->label78->Size = System::Drawing::Size(67, 13);
    this->label78->TabIndex = 79;
    this->label78->Text = L"Employee ID";
    //
    // label79
    //
    this->label79->AutoSize = true;
    this->label79->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label79->Location = System::Drawing::Point(535, 675);
    this->label79->Name = L"label79";
    this->label79->Size = System::Drawing::Size(30, 13);
    this->label79->TabIndex = 80;
    this->label79->Text = L"Date";
    //
    // paystubBack_button
    //
    this->paystubBack_button->Location = System::Drawing::Point(418, 912);
    this->paystubBack_button->Name = L"paystubBack_button";
    this->paystubBack_button->Size = System::Drawing::Size(87, 23);
    this->paystubBack_button->TabIndex = 2;
    this->paystubBack_button->Text = L"Back";
    this->paystubBack_button->UseVisualStyleBackColor = true;
    this->paystubBack_button->Click += gcnew System::EventHandler(
        this, &ViewPaystub::paystubBack_button_Click);
    //
    // label80
    //
    this->label80->AutoSize = true;
    this->label80->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label80->Location = System::Drawing::Point(419, 181);
    this->label80->Name = L"label80";
    this->label80->Size = System::Drawing::Size(88, 13);
    this->label80->TabIndex = 82;
    this->label80->Text = L"Health Insurance";
    this->label80->Click +=
        gcnew System::EventHandler(this, &ViewPaystub::label80_Click);
    //
    // label83
    //
    this->label83->AutoSize = true;
    this->label83->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label83->Location = System::Drawing::Point(527, 181);
    this->label83->Name = L"label83";
    this->label83->Size = System::Drawing::Size(114, 13);
    this->label83->TabIndex = 85;
    this->label83->Text = L"Health Insurance Here";
    //
    // label86
    //
    this->label86->AutoSize = true;
    this->label86->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label86->Location = System::Drawing::Point(419, 467);
    this->label86->Name = L"label86";
    this->label86->Size = System::Drawing::Size(88, 13);
    this->label86->TabIndex = 88;
    this->label86->Text = L"Health Insurance";
    //
    // label87
    //
    this->label87->AutoSize = true;
    this->label87->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label87->Location = System::Drawing::Point(527, 467);
    this->label87->Name = L"label87";
    this->label87->Size = System::Drawing::Size(114, 13);
    this->label87->TabIndex = 89;
    this->label87->Text = L"Health Insurance Here";
    //
    // pictureBox1
    //
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(647, 904);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(50, 45);
    this->pictureBox1->TabIndex = 94;
    this->pictureBox1->TabStop = false;
    //
    // label92
    //
    this->label92->AutoSize = true;
    this->label92->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label92->Location = System::Drawing::Point(188, 73);
    this->label92->Name = L"label92";
    this->label92->Size = System::Drawing::Size(45, 13);
    this->label92->TabIndex = 95;
    this->label92->Text = L"Address";
    //
    // label93
    //
    this->label93->AutoSize = true;
    this->label93->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label93->Location = System::Drawing::Point(188, 365);
    this->label93->Name = L"label93";
    this->label93->Size = System::Drawing::Size(45, 13);
    this->label93->TabIndex = 96;
    this->label93->Text = L"Address";
    //
    // label94
    //
    this->label94->AutoSize = true;
    this->label94->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label94->Location = System::Drawing::Point(387, 378);
    this->label94->Name = L"label94";
    this->label94->Size = System::Drawing::Size(57, 13);
    this->label94->TabIndex = 98;
    this->label94->Text = L"Type Here";
    //
    // label95
    //
    this->label95->AutoSize = true;
    this->label95->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label95->Location = System::Drawing::Point(306, 378);
    this->label95->Name = L"label95";
    this->label95->Size = System::Drawing::Size(31, 13);
    this->label95->TabIndex = 97;
    this->label95->Text = L"Type";
    //
    // label96
    //
    this->label96->AutoSize = true;
    this->label96->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label96->Location = System::Drawing::Point(387, 86);
    this->label96->Name = L"label96";
    this->label96->Size = System::Drawing::Size(57, 13);
    this->label96->TabIndex = 100;
    this->label96->Text = L"Type Here";
    //
    // label97
    //
    this->label97->AutoSize = true;
    this->label97->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label97->Location = System::Drawing::Point(306, 86);
    this->label97->Name = L"label97";
    this->label97->Size = System::Drawing::Size(31, 13);
    this->label97->TabIndex = 99;
    this->label97->Text = L"Type";
    //
    // print_check_btn
    //
    this->print_check_btn->Location = System::Drawing::Point(294, 912);
    this->print_check_btn->Name = L"print_check_btn";
    this->print_check_btn->Size = System::Drawing::Size(105, 23);
    this->print_check_btn->TabIndex = 101;
    this->print_check_btn->Text = L"Print Check";
    this->print_check_btn->UseVisualStyleBackColor = true;
    this->print_check_btn->Click +=
        gcnew System::EventHandler(this, &ViewPaystub::print_check_btn_Click);
    //
    // printDocument1
    //
    this->printDocument1->PrintPage +=
        gcnew System::Drawing::Printing::PrintPageEventHandler(
            this, &ViewPaystub::printDocument1_PrintPage);
    //
    // printPreviewDialog1
    //
    this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
    this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
    this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
    this->printPreviewDialog1->Enabled = true;
    this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"printPreviewDialog1.Icon")));
    this->printPreviewDialog1->Name = L"printPreviewDialog1";
    this->printPreviewDialog1->Visible = false;
    this->printPreviewDialog1->Load += gcnew System::EventHandler(
        this, &ViewPaystub::printPreviewDialog1_Load);
    //
    // label98
    //
    this->label98->AutoSize = true;
    this->label98->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label98->Location = System::Drawing::Point(419, 194);
    this->label98->Name = L"label98";
    this->label98->Size = System::Drawing::Size(77, 13);
    this->label98->TabIndex = 102;
    this->label98->Text = L"Social Security";
    //
    // label99
    //
    this->label99->AutoSize = true;
    this->label99->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label99->Location = System::Drawing::Point(419, 480);
    this->label99->Name = L"label99";
    this->label99->Size = System::Drawing::Size(77, 13);
    this->label99->TabIndex = 103;
    this->label99->Text = L"Social Security";
    //
    // label100
    //
    this->label100->AutoSize = true;
    this->label100->BackColor =
        System::Drawing::SystemColors::ControlLightLight;
    this->label100->Location = System::Drawing::Point(527, 194);
    this->label100->Name = L"label100";
    this->label100->Size = System::Drawing::Size(103, 13);
    this->label100->TabIndex = 104;
    this->label100->Text = L"Social Security Here";
    //
    // label101
    //
    this->label101->AutoSize = true;
    this->label101->BackColor =
        System::Drawing::SystemColors::ControlLightLight;
    this->label101->Location = System::Drawing::Point(527, 480);
    this->label101->Name = L"label101";
    this->label101->Size = System::Drawing::Size(103, 13);
    this->label101->TabIndex = 105;
    this->label101->Text = L"Social Security Here";
    //
    // label81
    //
    this->label81->AutoSize = true;
    this->label81->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label81->Location = System::Drawing::Point(419, 207);
    this->label81->Name = L"label81";
    this->label81->Size = System::Drawing::Size(32, 13);
    this->label81->TabIndex = 106;
    this->label81->Text = L"401K";
    //
    // label82
    //
    this->label82->AutoSize = true;
    this->label82->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label82->Location = System::Drawing::Point(419, 493);
    this->label82->Name = L"label82";
    this->label82->Size = System::Drawing::Size(32, 13);
    this->label82->TabIndex = 107;
    this->label82->Text = L"401K";
    //
    // label84
    //
    this->label84->AutoSize = true;
    this->label84->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label84->Location = System::Drawing::Point(527, 207);
    this->label84->Name = L"label84";
    this->label84->Size = System::Drawing::Size(58, 13);
    this->label84->TabIndex = 108;
    this->label84->Text = L"401K Here";
    //
    // label85
    //
    this->label85->AutoSize = true;
    this->label85->BackColor = System::Drawing::SystemColors::ControlLightLight;
    this->label85->Location = System::Drawing::Point(527, 493);
    this->label85->Name = L"label85";
    this->label85->Size = System::Drawing::Size(58, 13);
    this->label85->TabIndex = 109;
    this->label85->Text = L"401K Here";
    //
    // ViewPaystub
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"$this.BackgroundImage")));
    this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
    this->ClientSize = System::Drawing::Size(701, 949);
    this->Controls->Add(this->label85);
    this->Controls->Add(this->label84);
    this->Controls->Add(this->label82);
    this->Controls->Add(this->label81);
    this->Controls->Add(this->label101);
    this->Controls->Add(this->label100);
    this->Controls->Add(this->label99);
    this->Controls->Add(this->label98);
    this->Controls->Add(this->print_check_btn);
    this->Controls->Add(this->label96);
    this->Controls->Add(this->label97);
    this->Controls->Add(this->label94);
    this->Controls->Add(this->label95);
    this->Controls->Add(this->label93);
    this->Controls->Add(this->label92);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->label87);
    this->Controls->Add(this->label86);
    this->Controls->Add(this->label83);
    this->Controls->Add(this->label80);
    this->Controls->Add(this->paystubBack_button);
    this->Controls->Add(this->label79);
    this->Controls->Add(this->label78);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->textBox1);
    this->Controls->Add(this->label77);
    this->Controls->Add(this->label76);
    this->Controls->Add(this->label75);
    this->Controls->Add(this->label74);
    this->Controls->Add(this->label73);
    this->Controls->Add(this->label72);
    this->Controls->Add(this->label71);
    this->Controls->Add(this->label70);
    this->Controls->Add(this->label69);
    this->Controls->Add(this->label68);
    this->Controls->Add(this->label67);
    this->Controls->Add(this->label66);
    this->Controls->Add(this->label65);
    this->Controls->Add(this->label64);
    this->Controls->Add(this->label63);
    this->Controls->Add(this->label62);
    this->Controls->Add(this->label61);
    this->Controls->Add(this->label60);
    this->Controls->Add(this->label59);
    this->Controls->Add(this->label58);
    this->Controls->Add(this->label57);
    this->Controls->Add(this->label56);
    this->Controls->Add(this->label55);
    this->Controls->Add(this->label54);
    this->Controls->Add(this->label53);
    this->Controls->Add(this->label52);
    this->Controls->Add(this->label51);
    this->Controls->Add(this->label50);
    this->Controls->Add(this->label49);
    this->Controls->Add(this->label48);
    this->Controls->Add(this->label47);
    this->Controls->Add(this->label46);
    this->Controls->Add(this->label45);
    this->Controls->Add(this->label41);
    this->Controls->Add(this->label42);
    this->Controls->Add(this->label43);
    this->Controls->Add(this->label44);
    this->Controls->Add(this->label32);
    this->Controls->Add(this->label33);
    this->Controls->Add(this->label34);
    this->Controls->Add(this->label35);
    this->Controls->Add(this->label36);
    this->Controls->Add(this->label37);
    this->Controls->Add(this->label38);
    this->Controls->Add(this->label39);
    this->Controls->Add(this->label40);
    this->Controls->Add(this->label25);
    this->Controls->Add(this->label26);
    this->Controls->Add(this->label27);
    this->Controls->Add(this->label28);
    this->Controls->Add(this->label29);
    this->Controls->Add(this->label30);
    this->Controls->Add(this->label31);
    this->Controls->Add(this->label21);
    this->Controls->Add(this->label22);
    this->Controls->Add(this->label23);
    this->Controls->Add(this->label24);
    this->Controls->Add(this->label20);
    this->Controls->Add(this->label19);
    this->Controls->Add(this->label18);
    this->Controls->Add(this->label17);
    this->Controls->Add(this->label16);
    this->Controls->Add(this->label15);
    this->Controls->Add(this->label14);
    this->Controls->Add(this->label13);
    this->Controls->Add(this->label12);
    this->Controls->Add(this->label11);
    this->Controls->Add(this->label10);
    this->Controls->Add(this->label9);
    this->Controls->Add(this->label8);
    this->Controls->Add(this->label7);
    this->Controls->Add(this->label6);
    this->Controls->Add(this->label5);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Margin = System::Windows::Forms::Padding(2);
    this->Name = L"ViewPaystub";
    this->Text = L"ViewPaystub";
    this->Load +=
        gcnew System::EventHandler(this, &ViewPaystub::ViewPaystub_Load);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();
  }
#pragma endregion
private:
  System::Void ViewPaystub_Load(System::Object ^ sender,
                                System::EventArgs ^ e) {

    this->StartPosition = FormStartPosition::CenterScreen;

    if (id != "") {
      label78->Hide();
      button1->Hide();
      textBox1->Hide();
      textBox1->Text = id;
      button1_Click(sender, e);
    }
  }

private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {

    label53->Text = "Overtime";

    DateTime today = DateTime::Today;
    DateTime weekStart = today.AddDays(-(int)today.DayOfWeek);
    DateTime weekEnd = weekStart.AddDays(7).AddSeconds(-1);

    DateTime HireDay;

    label79->Text = DateTime::Now.ToString();
    label16->Text = weekStart.ToString();
    label36->Text = weekStart.ToString();
    label18->Text = weekEnd.ToString();
    label34->Text = weekEnd.ToString();
    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText = "select * from EmployeeInfo where ID = @ID";

    // catch error where user doesn't enter a emp id
    // error checking
    if (textBox1->Text == "") {
      MessageBox::Show("Enter An Employee Id.");
      return;
    }
    if (!checkID(textBox1->Text)) {
      MessageBox::Show("This ID does not exist within the Database");
      return;
    }
    cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
    OleDbDataReader ^ reader = cmd->ExecuteReader();
    while (reader->Read()) {
      label5->Text = reader["Lastname"]->ToString();
      label31->Text = reader["Lastname"]->ToString();
      label74->Text = reader["Lastname"]->ToString();
      label6->Text = reader["Firstname"]->ToString();
      label30->Text = reader["Firstname"]->ToString();
      label73->Text = reader["Firstname"]->ToString();
      label7->Text = reader["Address1"]->ToString();
      label92->Text =
          reader["City"]->ToString() + ", " + reader["State"]->ToString();
      label29->Text = reader["Address1"]->ToString();
      label93->Text =
          reader["City"]->ToString() + ", " + reader["State"]->ToString();
      label8->Text = reader["PhoneNumber"]->ToString();
      label28->Text = reader["PhoneNumber"]->ToString();
      label10->Text = reader["SSN"]->ToString();
      label40->Text = reader["SSN"]->ToString();
      label12->Text = reader["Weeklygrosspay"]->ToString();
      label39->Text = reader["Weeklygrosspay"]->ToString();
      label59->Text = reader["Weeklygrosspay"]->ToString();
      label60->Text = reader["Weeklygrosspay"]->ToString();
      label47->Text = reader["Hours"]->ToString();
      label48->Text = reader["Hours"]->ToString();
      label49->Text = reader["HourlyPay"]->ToString();
      label50->Text = reader["HourlyPay"]->ToString();
      label52->Text = reader["OvertimeHours"]->ToString();
      label54->Text = reader["OvertimeHours"]->ToString();
      label55->Text = reader["Overtimepay"]->ToString();
      label56->Text = reader["Overtimepay"]->ToString();
      label67->Text = reader["FederalTax"]->ToString();
      label68->Text = reader["FederalTax"]->ToString();
      double health = Convert::ToDouble(reader["HealthCost"]->ToString());
      double dental = Convert::ToDouble(reader["DentalCost"]->ToString());
      double vision = Convert::ToDouble(reader["VisionCost"]->ToString());
      double healthInsurance = health + dental + vision;
      label83->Text = healthInsurance.ToString();
      label87->Text = healthInsurance.ToString();
      label14->Text = reader["Netpay"]->ToString();
      label71->Text = reader["Netpay"]->ToString();
      label72->Text = reader["Netpay"]->ToString();
      label38->Text = reader["Netpay"]->ToString();
      label75->Text = reader["Netpay"]->ToString();

      label96->Text = reader["PayType"]->ToString();
      label94->Text = reader["PayType"]->ToString();

      String ^ state = reader["AppliedTaxState"]->ToString();
      label100->Text = reader["SSAWithholding"]->ToString();
      label101->Text = reader["SSAWithholding"]->ToString();
      label84->Text = reader["401K"]->ToString();
      label85->Text = reader["401K"]->ToString();

      if (state == "New York") {
        label65->Text = reader["NYTax"]->ToString();
        label66->Text = reader["NYTax"]->ToString();
      }

      else if (state == "New Jersey") {
        label65->Text = reader["NJTax"]->ToString();
        label66->Text = reader["NJTax"]->ToString();
      } else {
        label65->Text = reader["CTTax"]->ToString();
        label66->Text = reader["CTTax"]->ToString();
      }

      if (label96->Text == "Salary") {
        label47->Text = "-";
        label52->Text = " ";
        label48->Text = "-";
        label54->Text = " ";
        label55->Text = " ";
        label56->Text = " ";
        label51->Text = " ";
        label53->Text = " ";
        label49->Text = reader["SalaryPay"]->ToString();
        label50->Text = reader["SalaryPay"]->ToString();
      }
    }
    conn->Close();
  }

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void label6_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void paystubBack_button_Click(System::Object ^ sender,
                                        System::EventArgs ^ e) {
    id = "";
    this->Hide();
    otherPage->Show();
  }

private:
  System::Void label80_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void vScrollBar1_Scroll(System::Object ^ sender,
                                  System::Windows::Forms::ScrollEventArgs ^ e) {

  }

private:
  System::Void print_check_btn_Click(System::Object ^ sender,
                                     System::EventArgs ^ e) {
    bitmap = gcnew Bitmap(this->Width, this->Height);
    this->DrawToBitmap(bitmap, Rectangle(Point(0, 0), bitmap->Size));
    printPreviewDialog1->Document = printDocument1;
    printPreviewDialog1->PrintPreviewControl->Zoom = 1;
    printPreviewDialog1->ShowDialog();
  }

private:
  System::Void printPreviewDialog1_Load(System::Object ^ sender,
                                        System::EventArgs ^ e) {}

private:
  System::Void
  printDocument1_PrintPage(System::Object ^ sender,
                           System::Drawing::Printing::PrintPageEventArgs ^ e) {
    e->Graphics->DrawImage(bitmap, 0, 0);
  }
};
} // namespace Payrolls