#pragma once

#include "CheckID.h"
#include "ConnectionPath.h"
#include "ViewPaystub.h"
#include <array>
#include <string>

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
/// Summary for MyForm1
/// </summary>
public
ref class AdminMenu : public System::Windows::Forms::Form {
public:
  AdminMenu(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

public:
  AdminMenu(System::Windows::Forms::Form ^ Admin, String ^ text) {

    InitializeComponent();
    otherform = Admin;
    word = text;
    ID = Int32::Parse(text);
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~AdminMenu() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Form ^ otherform;

private:
  String ^ word;

private:
  String ^ Name;

private:
  String ^ LastName;

private:
  String ^ email;

private:
  String ^ phone;

private:
  String ^ pay;

private:
  String ^ Department;

private:
  String ^ NameE;

private:
  String ^ LastNameE;

private:
  String ^ emailE;

private:
  String ^ DepartmentE;

private:
  String ^ phoneE;

private:
  String ^ payE;

public:
  String ^ word1;

private:
  String ^ DOB;

private:
  String ^ HireDateE;

private:
  Int32 ^ ID;

private:
  String ^ Address;

private:
  String ^ State;

private:
  String ^ City;

private:
  String ^ Zip;

private:
  String ^ CurrHours;

private:
  String ^ Crypt;

private:
  String ^ HireE;

private:
  String ^ Hire;

private:
  System::Windows::Forms::TabPage ^ tab2;

private:
  System::Windows::Forms::TabControl ^ tabControl1;

private:
  System::Windows::Forms::TabPage ^ tab1Page2;

private:
  System::Windows::Forms::Label ^ label30;

private:
  System::Windows::Forms::Label ^ label31;

private:
  System::Windows::Forms::PictureBox ^ pictureBox2;

private:
  System::Windows::Forms::LinkLabel ^ LogOut2;

private:
  System::Windows::Forms::Label ^ lbl12;

private:
  System::Windows::Forms::Label ^ lbl11;

private:
  System::Windows::Forms::Label ^ lbl10;

private:
  System::Windows::Forms::Label ^ lbl9;

private:
  System::Windows::Forms::Label ^ lbl8;

private:
  System::Windows::Forms::Label ^ label11;

private:
  System::Windows::Forms::Label ^ label10;

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::Label ^ label8;

private:
  System::Windows::Forms::Label ^ label7;

private:
  System::Windows::Forms::Label ^ lbl7;

private:
  System::Windows::Forms::Button ^ buttonReset;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::Button ^ buttonSearch;

private:
  System::Windows::Forms::TabPage ^ tab2Page2;

private:
  System::Windows::Forms::Label ^ label15;

private:
  System::Windows::Forms::Label ^ label14;

private:
  System::Windows::Forms::Button ^ button6;

private:
  System::Windows::Forms::ListView ^ empHours_list;

private:
  System::Windows::Forms::ColumnHeader ^ columnHeader1;

private:
  System::Windows::Forms::ColumnHeader ^ columnHeader2;

private:
  System::Windows::Forms::ColumnHeader ^ columnHeader3;

private:
  System::Windows::Forms::ColumnHeader ^ columnHeader5;

private:
  System::Windows::Forms::ColumnHeader ^ columnHeader6;

private:
  System::Windows::Forms::Button ^ timeSheet_startButton;

private:
  System::Windows::Forms::PictureBox ^ pictureBox3;

private:
  System::Windows::Forms::TabPage ^ tabPage1;

private:
  System::Windows::Forms::Label ^ label28;

private:
  System::Windows::Forms::Label ^ label29;

private:
  System::Windows::Forms::TextBox ^ textBox10;

private:
  System::Windows::Forms::TextBox ^ textBox9;

private:
  System::Windows::Forms::TextBox ^ textBox8;

private:
  System::Windows::Forms::TextBox ^ textBox7;

private:
  System::Windows::Forms::TextBox ^ textBox6;

private:
  System::Windows::Forms::TextBox ^ textBox5;

private:
  System::Windows::Forms::TextBox ^ textBox4;

private:
  System::Windows::Forms::Label ^ label27;

private:
  System::Windows::Forms::Button ^ button5;

private:
  System::Windows::Forms::Button ^ button4;

private:
  System::Windows::Forms::LinkLabel ^ linkLabel2;

private:
  System::Windows::Forms::Label ^ label26;

private:
  System::Windows::Forms::Button ^ button3;

private:
  System::Windows::Forms::LinkLabel ^ linkLabel1;

private:
  System::Windows::Forms::Label ^ label23;

private:
  System::Windows::Forms::Label ^ label24;

private:
  System::Windows::Forms::PictureBox ^ pictureBox1;

private:
  System::Windows::Forms::Button ^ button2;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::Windows::Forms::LinkLabel ^ linkedit2;

private:
  System::Windows::Forms::LinkLabel ^ linkedit1;

private:
  System::Windows::Forms::LinkLabel ^ logout;

private:
  System::Windows::Forms::Button ^ buttonNoShow;

private:
  System::Windows::Forms::Button ^ ButtonShow;

private:
  System::Windows::Forms::Label ^ lbl6;

private:
  System::Windows::Forms::Label ^ lbl5;

private:
  System::Windows::Forms::Label ^ lbl4;

private:
  System::Windows::Forms::Label ^ lbl3;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Label ^ lbl2;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Label ^ lbl1;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::TabControl ^ tab1;

private:
  System::Windows::Forms::Label ^ label12;

private:
  System::Windows::Forms::TextBox ^ idBox;

private:
  System::Windows::Forms::TextBox ^ otBox;

private:
  System::Windows::Forms::TextBox ^ hoursBox;

private:
  System::Windows::Forms::Button ^ button7;

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
            AdminMenu::typeid));
    this->tab2 = (gcnew System::Windows::Forms::TabPage());
    this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
    this->tab1Page2 = (gcnew System::Windows::Forms::TabPage());
    this->label30 = (gcnew System::Windows::Forms::Label());
    this->label31 = (gcnew System::Windows::Forms::Label());
    this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
    this->LogOut2 = (gcnew System::Windows::Forms::LinkLabel());
    this->lbl12 = (gcnew System::Windows::Forms::Label());
    this->lbl11 = (gcnew System::Windows::Forms::Label());
    this->lbl10 = (gcnew System::Windows::Forms::Label());
    this->lbl9 = (gcnew System::Windows::Forms::Label());
    this->lbl8 = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->lbl7 = (gcnew System::Windows::Forms::Label());
    this->buttonReset = (gcnew System::Windows::Forms::Button());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->buttonSearch = (gcnew System::Windows::Forms::Button());
    this->tab2Page2 = (gcnew System::Windows::Forms::TabPage());
    this->button7 = (gcnew System::Windows::Forms::Button());
    this->otBox = (gcnew System::Windows::Forms::TextBox());
    this->hoursBox = (gcnew System::Windows::Forms::TextBox());
    this->idBox = (gcnew System::Windows::Forms::TextBox());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->label15 = (gcnew System::Windows::Forms::Label());
    this->label14 = (gcnew System::Windows::Forms::Label());
    this->button6 = (gcnew System::Windows::Forms::Button());
    this->empHours_list = (gcnew System::Windows::Forms::ListView());
    this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
    this->timeSheet_startButton = (gcnew System::Windows::Forms::Button());
    this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
    this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
    this->label28 = (gcnew System::Windows::Forms::Label());
    this->label29 = (gcnew System::Windows::Forms::Label());
    this->textBox10 = (gcnew System::Windows::Forms::TextBox());
    this->textBox9 = (gcnew System::Windows::Forms::TextBox());
    this->textBox8 = (gcnew System::Windows::Forms::TextBox());
    this->textBox7 = (gcnew System::Windows::Forms::TextBox());
    this->textBox6 = (gcnew System::Windows::Forms::TextBox());
    this->textBox5 = (gcnew System::Windows::Forms::TextBox());
    this->textBox4 = (gcnew System::Windows::Forms::TextBox());
    this->label27 = (gcnew System::Windows::Forms::Label());
    this->button5 = (gcnew System::Windows::Forms::Button());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
    this->label26 = (gcnew System::Windows::Forms::Label());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
    this->label23 = (gcnew System::Windows::Forms::Label());
    this->label24 = (gcnew System::Windows::Forms::Label());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->linkedit2 = (gcnew System::Windows::Forms::LinkLabel());
    this->linkedit1 = (gcnew System::Windows::Forms::LinkLabel());
    this->logout = (gcnew System::Windows::Forms::LinkLabel());
    this->buttonNoShow = (gcnew System::Windows::Forms::Button());
    this->ButtonShow = (gcnew System::Windows::Forms::Button());
    this->lbl6 = (gcnew System::Windows::Forms::Label());
    this->lbl5 = (gcnew System::Windows::Forms::Label());
    this->lbl4 = (gcnew System::Windows::Forms::Label());
    this->lbl3 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->lbl2 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->lbl1 = (gcnew System::Windows::Forms::Label());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->tab1 = (gcnew System::Windows::Forms::TabControl());
    this->tab2->SuspendLayout();
    this->tabControl1->SuspendLayout();
    this->tab1Page2->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox2))
        ->BeginInit();
    this->tab2Page2->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox3))
        ->BeginInit();
    this->tabPage1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->BeginInit();
    this->tab1->SuspendLayout();
    this->SuspendLayout();
    //
    // tab2
    //
    this->tab2->BackColor = System::Drawing::SystemColors::Control;
    this->tab2->Controls->Add(this->tabControl1);
    this->tab2->Location = System::Drawing::Point(4, 22);
    this->tab2->Name = L"tab2";
    this->tab2->Padding = System::Windows::Forms::Padding(3);
    this->tab2->Size = System::Drawing::Size(818, 593);
    this->tab2->TabIndex = 1;
    this->tab2->Text = L"Search Employees";
    this->tab2->Click +=
        gcnew System::EventHandler(this, &AdminMenu::tab2_Click);
    //
    // tabControl1
    //
    this->tabControl1->Controls->Add(this->tab1Page2);
    this->tabControl1->Controls->Add(this->tab2Page2);
    this->tabControl1->Location = System::Drawing::Point(0, 0);
    this->tabControl1->Name = L"tabControl1";
    this->tabControl1->SelectedIndex = 0;
    this->tabControl1->Size = System::Drawing::Size(818, 593);
    this->tabControl1->TabIndex = 0;
    //
    // tab1Page2
    //
    this->tab1Page2->BackColor = System::Drawing::SystemColors::Control;
    this->tab1Page2->Controls->Add(this->label30);
    this->tab1Page2->Controls->Add(this->label31);
    this->tab1Page2->Controls->Add(this->pictureBox2);
    this->tab1Page2->Controls->Add(this->LogOut2);
    this->tab1Page2->Controls->Add(this->lbl12);
    this->tab1Page2->Controls->Add(this->lbl11);
    this->tab1Page2->Controls->Add(this->lbl10);
    this->tab1Page2->Controls->Add(this->lbl9);
    this->tab1Page2->Controls->Add(this->lbl8);
    this->tab1Page2->Controls->Add(this->label11);
    this->tab1Page2->Controls->Add(this->label10);
    this->tab1Page2->Controls->Add(this->label9);
    this->tab1Page2->Controls->Add(this->label8);
    this->tab1Page2->Controls->Add(this->label7);
    this->tab1Page2->Controls->Add(this->lbl7);
    this->tab1Page2->Controls->Add(this->buttonReset);
    this->tab1Page2->Controls->Add(this->textBox1);
    this->tab1Page2->Controls->Add(this->buttonSearch);
    this->tab1Page2->Location = System::Drawing::Point(4, 22);
    this->tab1Page2->Name = L"tab1Page2";
    this->tab1Page2->Padding = System::Windows::Forms::Padding(3);
    this->tab1Page2->Size = System::Drawing::Size(810, 567);
    this->tab1Page2->TabIndex = 0;
    this->tab1Page2->Text = L"Employee Detail";
    this->tab1Page2->Click +=
        gcnew System::EventHandler(this, &AdminMenu::tab1Page2_Click);
    //
    // label30
    //
    this->label30->AutoSize = true;
    this->label30->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label30->Location = System::Drawing::Point(250, 169);
    this->label30->Name = L"label30";
    this->label30->Size = System::Drawing::Size(43, 20);
    this->label30->TabIndex = 38;
    this->label30->Text = L"Type";
    //
    // label31
    //
    this->label31->AutoSize = true;
    this->label31->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label31->Location = System::Drawing::Point(91, 169);
    this->label31->Name = L"label31";
    this->label31->Size = System::Drawing::Size(47, 20);
    this->label31->TabIndex = 37;
    this->label31->Text = L"Type:";
    //
    // pictureBox2
    //
    this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox2.Image")));
    this->pictureBox2->Location = System::Drawing::Point(768, 526);
    this->pictureBox2->Name = L"pictureBox2";
    this->pictureBox2->Size = System::Drawing::Size(46, 45);
    this->pictureBox2->TabIndex = 36;
    this->pictureBox2->TabStop = false;
    //
    // LogOut2
    //
    this->LogOut2->AutoSize = true;
    this->LogOut2->Location = System::Drawing::Point(747, 3);
    this->LogOut2->Name = L"LogOut2";
    this->LogOut2->Size = System::Drawing::Size(42, 13);
    this->LogOut2->TabIndex = 7;
    this->LogOut2->TabStop = true;
    this->LogOut2->Text = L"LogOut";
    this->LogOut2->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::LogOut2_LinkClicked);
    //
    // lbl12
    //
    this->lbl12->AutoSize = true;
    this->lbl12->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl12->Location = System::Drawing::Point(254, 339);
    this->lbl12->Name = L"lbl12";
    this->lbl12->Size = System::Drawing::Size(44, 20);
    this->lbl12->TabIndex = 12;
    this->lbl12->Text = L"Date";
    //
    // lbl11
    //
    this->lbl11->AutoSize = true;
    this->lbl11->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl11->Location = System::Drawing::Point(254, 291);
    this->lbl11->Name = L"lbl11";
    this->lbl11->Size = System::Drawing::Size(86, 20);
    this->lbl11->TabIndex = 11;
    this->lbl11->Text = L"DOLLAR!!!";
    //
    // lbl10
    //
    this->lbl10->AutoSize = true;
    this->lbl10->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl10->Location = System::Drawing::Point(254, 250);
    this->lbl10->Name = L"lbl10";
    this->lbl10->Size = System::Drawing::Size(55, 20);
    this->lbl10->TabIndex = 10;
    this->lbl10->Text = L"Phone";
    //
    // lbl9
    //
    this->lbl9->AutoSize = true;
    this->lbl9->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl9->Location = System::Drawing::Point(254, 206);
    this->lbl9->Name = L"lbl9";
    this->lbl9->Size = System::Drawing::Size(46, 20);
    this->lbl9->TabIndex = 9;
    this->lbl9->Text = L"email";
    //
    // lbl8
    //
    this->lbl8->AutoSize = true;
    this->lbl8->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl8->Location = System::Drawing::Point(250, 129);
    this->lbl8->Name = L"lbl8";
    this->lbl8->Size = System::Drawing::Size(94, 20);
    this->lbl8->TabIndex = 8;
    this->lbl8->Text = L"Department";
    //
    // label11
    //
    this->label11->AutoSize = true;
    this->label11->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label11->Location = System::Drawing::Point(95, 339);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(87, 20);
    this->label11->TabIndex = 7;
    this->label11->Text = L"Hired date:";
    this->label11->Click +=
        gcnew System::EventHandler(this, &AdminMenu::label11_Click);
    //
    // label10
    //
    this->label10->AutoSize = true;
    this->label10->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label10->Location = System::Drawing::Point(95, 291);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(87, 20);
    this->label10->TabIndex = 6;
    this->label10->Text = L"Hourly pay:";
    this->label10->Click +=
        gcnew System::EventHandler(this, &AdminMenu::label10_Click);
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label9->Location = System::Drawing::Point(95, 250);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(59, 20);
    this->label9->TabIndex = 5;
    this->label9->Text = L"Phone:";
    //
    // label8
    //
    this->label8->AutoSize = true;
    this->label8->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label8->Location = System::Drawing::Point(95, 206);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(50, 20);
    this->label8->TabIndex = 4;
    this->label8->Text = L"email:";
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label7->Location = System::Drawing::Point(91, 129);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(69, 20);
    this->label7->TabIndex = 3;
    this->label7->Text = L"Position:";
    //
    // lbl7
    //
    this->lbl7->AutoSize = true;
    this->lbl7->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl7->Location = System::Drawing::Point(48, 86);
    this->lbl7->Name = L"lbl7";
    this->lbl7->Size = System::Drawing::Size(152, 24);
    this->lbl7->TabIndex = 1;
    this->lbl7->Text = L"Employee Name";
    this->lbl7->Click +=
        gcnew System::EventHandler(this, &AdminMenu::lbl7_Click);
    //
    // buttonReset
    //
    this->buttonReset->Location = System::Drawing::Point(609, 44);
    this->buttonReset->Name = L"buttonReset";
    this->buttonReset->Size = System::Drawing::Size(75, 23);
    this->buttonReset->TabIndex = 6;
    this->buttonReset->Text = L"Reset";
    this->buttonReset->UseVisualStyleBackColor = true;
    this->buttonReset->Click +=
        gcnew System::EventHandler(this, &AdminMenu::buttonReset_Click);
    //
    // textBox1
    //
    this->textBox1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->textBox1->Location = System::Drawing::Point(294, 37);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(250, 26);
    this->textBox1->TabIndex = 1;
    this->textBox1->TextChanged +=
        gcnew System::EventHandler(this, &AdminMenu::textBox1_TextChanged);
    //
    // buttonSearch
    //
    this->buttonSearch->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->buttonSearch->Location = System::Drawing::Point(52, 34);
    this->buttonSearch->Name = L"buttonSearch";
    this->buttonSearch->Size = System::Drawing::Size(187, 33);
    this->buttonSearch->TabIndex = 2;
    this->buttonSearch->Text = L"Search Employee";
    this->buttonSearch->UseVisualStyleBackColor = true;
    this->buttonSearch->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button1_Click);
    //
    // tab2Page2
    //
    this->tab2Page2->BackColor = System::Drawing::SystemColors::Control;
    this->tab2Page2->Controls->Add(this->button7);
    this->tab2Page2->Controls->Add(this->otBox);
    this->tab2Page2->Controls->Add(this->hoursBox);
    this->tab2Page2->Controls->Add(this->idBox);
    this->tab2Page2->Controls->Add(this->label12);
    this->tab2Page2->Controls->Add(this->label15);
    this->tab2Page2->Controls->Add(this->label14);
    this->tab2Page2->Controls->Add(this->button6);
    this->tab2Page2->Controls->Add(this->empHours_list);
    this->tab2Page2->Controls->Add(this->timeSheet_startButton);
    this->tab2Page2->Controls->Add(this->pictureBox3);
    this->tab2Page2->Location = System::Drawing::Point(4, 22);
    this->tab2Page2->Name = L"tab2Page2";
    this->tab2Page2->Padding = System::Windows::Forms::Padding(3);
    this->tab2Page2->Size = System::Drawing::Size(810, 567);
    this->tab2Page2->TabIndex = 1;
    this->tab2Page2->Text = L"Time Sheet";
    this->tab2Page2->Click +=
        gcnew System::EventHandler(this, &AdminMenu::tab2Page2_Click);
    //
    // button7
    //
    this->button7->Location = System::Drawing::Point(230, 165);
    this->button7->Margin = System::Windows::Forms::Padding(2);
    this->button7->Name = L"button7";
    this->button7->Size = System::Drawing::Size(108, 24);
    this->button7->TabIndex = 48;
    this->button7->Text = L"Remove Hours";
    this->button7->UseVisualStyleBackColor = true;
    this->button7->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button7_Click);
    //
    // otBox
    //
    this->otBox->Location = System::Drawing::Point(252, 96);
    this->otBox->Name = L"otBox";
    this->otBox->Size = System::Drawing::Size(86, 20);
    this->otBox->TabIndex = 47;
    //
    // hoursBox
    //
    this->hoursBox->Location = System::Drawing::Point(252, 70);
    this->hoursBox->Name = L"hoursBox";
    this->hoursBox->Size = System::Drawing::Size(79, 20);
    this->hoursBox->TabIndex = 46;
    //
    // idBox
    //
    this->idBox->Location = System::Drawing::Point(252, 44);
    this->idBox->Name = L"idBox";
    this->idBox->Size = System::Drawing::Size(79, 20);
    this->idBox->TabIndex = 45;
    //
    // label12
    //
    this->label12->AutoSize = true;
    this->label12->Location = System::Drawing::Point(177, 47);
    this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
    this->label12->Name = L"label12";
    this->label12->Size = System::Drawing::Size(70, 13);
    this->label12->TabIndex = 44;
    this->label12->Text = L"Employee ID:";
    //
    // label15
    //
    this->label15->AutoSize = true;
    this->label15->Location = System::Drawing::Point(164, 102);
    this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
    this->label15->Name = L"label15";
    this->label15->Size = System::Drawing::Size(83, 13);
    this->label15->TabIndex = 41;
    this->label15->Text = L"Overtime Hours:";
    //
    // label14
    //
    this->label14->AutoSize = true;
    this->label14->Location = System::Drawing::Point(71, 74);
    this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
    this->label14->Name = L"label14";
    this->label14->Size = System::Drawing::Size(176, 13);
    this->label14->TabIndex = 40;
    this->label14->Text = L"Hours Worked (excluding overtime):";
    //
    // button6
    //
    this->button6->Location = System::Drawing::Point(230, 137);
    this->button6->Margin = System::Windows::Forms::Padding(2);
    this->button6->Name = L"button6";
    this->button6->Size = System::Drawing::Size(108, 24);
    this->button6->TabIndex = 39;
    this->button6->Text = L"Enter";
    this->button6->UseVisualStyleBackColor = true;
    this->button6->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button6_Click);
    //
    // empHours_list
    //
    this->empHours_list->Columns->AddRange(
        gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(5){
            this->columnHeader1, this->columnHeader2, this->columnHeader3,
            this->columnHeader5, this->columnHeader6});
    this->empHours_list->FullRowSelect = true;
    this->empHours_list->GridLines = true;
    this->empHours_list->HideSelection = false;
    this->empHours_list->Location = System::Drawing::Point(23, 212);
    this->empHours_list->Name = L"empHours_list";
    this->empHours_list->Size = System::Drawing::Size(741, 262);
    this->empHours_list->TabIndex = 38;
    this->empHours_list->UseCompatibleStateImageBehavior = false;
    this->empHours_list->View = System::Windows::Forms::View::Details;
    //
    // columnHeader1
    //
    this->columnHeader1->Text = L"ID";
    //
    // columnHeader2
    //
    this->columnHeader2->Text = L"First Name";
    this->columnHeader2->Width = 191;
    //
    // columnHeader3
    //
    this->columnHeader3->Text = L"Last Name";
    this->columnHeader3->Width = 138;
    //
    // columnHeader5
    //
    this->columnHeader5->Text = L"Entered Hours";
    this->columnHeader5->Width = 114;
    //
    // columnHeader6
    //
    this->columnHeader6->Text = L"Overtime Hours";
    this->columnHeader6->Width = 325;
    //
    // timeSheet_startButton
    //
    this->timeSheet_startButton->Location = System::Drawing::Point(552, 79);
    this->timeSheet_startButton->Name = L"timeSheet_startButton";
    this->timeSheet_startButton->Size = System::Drawing::Size(196, 58);
    this->timeSheet_startButton->TabIndex = 37;
    this->timeSheet_startButton->Text = L"Begin TimeSheet Proccessing";
    this->timeSheet_startButton->UseVisualStyleBackColor = true;
    this->timeSheet_startButton->Click += gcnew System::EventHandler(
        this, &AdminMenu::timeSheet_startButton_Click);
    //
    // pictureBox3
    //
    this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox3.Image")));
    this->pictureBox3->Location = System::Drawing::Point(768, 526);
    this->pictureBox3->Name = L"pictureBox3";
    this->pictureBox3->Size = System::Drawing::Size(46, 45);
    this->pictureBox3->TabIndex = 36;
    this->pictureBox3->TabStop = false;
    //
    // tabPage1
    //
    this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
    this->tabPage1->Controls->Add(this->label28);
    this->tabPage1->Controls->Add(this->label29);
    this->tabPage1->Controls->Add(this->textBox10);
    this->tabPage1->Controls->Add(this->textBox9);
    this->tabPage1->Controls->Add(this->textBox8);
    this->tabPage1->Controls->Add(this->textBox7);
    this->tabPage1->Controls->Add(this->textBox6);
    this->tabPage1->Controls->Add(this->textBox5);
    this->tabPage1->Controls->Add(this->textBox4);
    this->tabPage1->Controls->Add(this->label27);
    this->tabPage1->Controls->Add(this->button5);
    this->tabPage1->Controls->Add(this->button4);
    this->tabPage1->Controls->Add(this->linkLabel2);
    this->tabPage1->Controls->Add(this->label26);
    this->tabPage1->Controls->Add(this->button3);
    this->tabPage1->Controls->Add(this->linkLabel1);
    this->tabPage1->Controls->Add(this->label23);
    this->tabPage1->Controls->Add(this->label24);
    this->tabPage1->Controls->Add(this->pictureBox1);
    this->tabPage1->Controls->Add(this->button2);
    this->tabPage1->Controls->Add(this->button1);
    this->tabPage1->Controls->Add(this->linkedit2);
    this->tabPage1->Controls->Add(this->linkedit1);
    this->tabPage1->Controls->Add(this->logout);
    this->tabPage1->Controls->Add(this->buttonNoShow);
    this->tabPage1->Controls->Add(this->ButtonShow);
    this->tabPage1->Controls->Add(this->lbl6);
    this->tabPage1->Controls->Add(this->lbl5);
    this->tabPage1->Controls->Add(this->lbl4);
    this->tabPage1->Controls->Add(this->lbl3);
    this->tabPage1->Controls->Add(this->label6);
    this->tabPage1->Controls->Add(this->label5);
    this->tabPage1->Controls->Add(this->label4);
    this->tabPage1->Controls->Add(this->label3);
    this->tabPage1->Controls->Add(this->lbl2);
    this->tabPage1->Controls->Add(this->label2);
    this->tabPage1->Controls->Add(this->lbl1);
    this->tabPage1->Controls->Add(this->label1);
    this->tabPage1->Location = System::Drawing::Point(4, 22);
    this->tabPage1->Name = L"tabPage1";
    this->tabPage1->Padding = System::Windows::Forms::Padding(3);
    this->tabPage1->Size = System::Drawing::Size(818, 593);
    this->tabPage1->TabIndex = 0;
    this->tabPage1->Text = L"Admin Menu";
    this->tabPage1->Click +=
        gcnew System::EventHandler(this, &AdminMenu::tabPage1_Click);
    //
    // label28
    //
    this->label28->AutoSize = true;
    this->label28->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label28->Location = System::Drawing::Point(232, 165);
    this->label28->Name = L"label28";
    this->label28->Size = System::Drawing::Size(26, 20);
    this->label28->TabIndex = 46;
    this->label28->Text = L"ID";
    //
    // label29
    //
    this->label29->AutoSize = true;
    this->label29->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label29->Location = System::Drawing::Point(139, 165);
    this->label29->Name = L"label29";
    this->label29->Size = System::Drawing::Size(30, 20);
    this->label29->TabIndex = 45;
    this->label29->Text = L"ID:";
    //
    // textBox10
    //
    this->textBox10->Location = System::Drawing::Point(494, 361);
    this->textBox10->Name = L"textBox10";
    this->textBox10->Size = System::Drawing::Size(183, 20);
    this->textBox10->TabIndex = 10;
    this->textBox10->Text = L"City";
    //
    // textBox9
    //
    this->textBox9->Location = System::Drawing::Point(236, 507);
    this->textBox9->Name = L"textBox9";
    this->textBox9->Size = System::Drawing::Size(183, 20);
    this->textBox9->TabIndex = 16;
    this->textBox9->TextChanged +=
        gcnew System::EventHandler(this, &AdminMenu::textBox9_TextChanged);
    //
    // textBox8
    //
    this->textBox8->Location = System::Drawing::Point(495, 425);
    this->textBox8->Name = L"textBox8";
    this->textBox8->Size = System::Drawing::Size(183, 20);
    this->textBox8->TabIndex = 12;
    this->textBox8->Text = L"ZipCode";
    //
    // textBox7
    //
    this->textBox7->Location = System::Drawing::Point(494, 393);
    this->textBox7->Name = L"textBox7";
    this->textBox7->Size = System::Drawing::Size(63, 20);
    this->textBox7->TabIndex = 11;
    this->textBox7->Text = L"State";
    //
    // textBox6
    //
    this->textBox6->Location = System::Drawing::Point(494, 324);
    this->textBox6->Name = L"textBox6";
    this->textBox6->Size = System::Drawing::Size(183, 20);
    this->textBox6->TabIndex = 9;
    this->textBox6->Text = L"Street Address";
    //
    // textBox5
    //
    this->textBox5->Location = System::Drawing::Point(494, 287);
    this->textBox5->Name = L"textBox5";
    this->textBox5->Size = System::Drawing::Size(183, 20);
    this->textBox5->TabIndex = 6;
    //
    // textBox4
    //
    this->textBox4->Location = System::Drawing::Point(494, 243);
    this->textBox4->Name = L"textBox4";
    this->textBox4->Size = System::Drawing::Size(183, 20);
    this->textBox4->TabIndex = 3;
    this->textBox4->TextChanged +=
        gcnew System::EventHandler(this, &AdminMenu::textBox4_TextChanged);
    //
    // label27
    //
    this->label27->AutoSize = true;
    this->label27->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label27->Location = System::Drawing::Point(233, 359);
    this->label27->Name = L"label27";
    this->label27->Size = System::Drawing::Size(35, 20);
    this->label27->TabIndex = 44;
    this->label27->Text = L"City";
    //
    // button5
    //
    this->button5->Location = System::Drawing::Point(591, 66);
    this->button5->Name = L"button5";
    this->button5->Size = System::Drawing::Size(116, 29);
    this->button5->TabIndex = 1;
    this->button5->Text = L"See Paystub";
    this->button5->UseVisualStyleBackColor = true;
    this->button5->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button5_Click);
    //
    // button4
    //
    this->button4->Location = System::Drawing::Point(425, 505);
    this->button4->Name = L"button4";
    this->button4->Size = System::Drawing::Size(75, 23);
    this->button4->TabIndex = 17;
    this->button4->Text = L"Update";
    this->button4->UseVisualStyleBackColor = true;
    this->button4->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button4_Click);
    //
    // linkLabel2
    //
    this->linkLabel2->AutoSize = true;
    this->linkLabel2->Location = System::Drawing::Point(117, 510);
    this->linkLabel2->Name = L"linkLabel2";
    this->linkLabel2->Size = System::Drawing::Size(92, 13);
    this->linkLabel2->TabIndex = 15;
    this->linkLabel2->TabStop = true;
    this->linkLabel2->Text = L"Change password";
    this->linkLabel2->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::linkLabel2_LinkClicked);
    //
    // label26
    //
    this->label26->AutoSize = true;
    this->label26->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label26->Location = System::Drawing::Point(234, 393);
    this->label26->Name = L"label26";
    this->label26->Size = System::Drawing::Size(73, 20);
    this->label26->TabIndex = 42;
    this->label26->Text = L"Zip Code";
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(549, 468);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(75, 23);
    this->button3->TabIndex = 13;
    this->button3->Text = L"Update";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button3_Click);
    //
    // linkLabel1
    //
    this->linkLabel1->AutoSize = true;
    this->linkLabel1->Location = System::Drawing::Point(118, 331);
    this->linkLabel1->Name = L"linkLabel1";
    this->linkLabel1->Size = System::Drawing::Size(24, 13);
    this->linkLabel1->TabIndex = 8;
    this->linkLabel1->TabStop = true;
    this->linkLabel1->Text = L"edit";
    this->linkLabel1->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::linkLabel1_LinkClicked);
    //
    // label23
    //
    this->label23->AutoSize = true;
    this->label23->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label23->Location = System::Drawing::Point(233, 328);
    this->label23->Name = L"label23";
    this->label23->Size = System::Drawing::Size(116, 20);
    this->label23->TabIndex = 37;
    this->label23->Text = L"Street Address";
    //
    // label24
    //
    this->label24->AutoSize = true;
    this->label24->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label24->Location = System::Drawing::Point(141, 328);
    this->label24->Name = L"label24";
    this->label24->Size = System::Drawing::Size(72, 20);
    this->label24->TabIndex = 36;
    this->label24->Text = L"Address:";
    //
    // pictureBox1
    //
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(772, 548);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(46, 45);
    this->pictureBox1->TabIndex = 35;
    this->pictureBox1->TabStop = false;
    //
    // button2
    //
    this->button2->Location = System::Drawing::Point(683, 285);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(75, 23);
    this->button2->TabIndex = 7;
    this->button2->Text = L"Update";
    this->button2->UseVisualStyleBackColor = true;
    this->button2->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button2_Click);
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(683, 243);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(75, 23);
    this->button1->TabIndex = 4;
    this->button1->Text = L"Update";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &AdminMenu::button1_Click_1);
    //
    // linkedit2
    //
    this->linkedit2->AutoSize = true;
    this->linkedit2->Location = System::Drawing::Point(118, 294);
    this->linkedit2->Name = L"linkedit2";
    this->linkedit2->Size = System::Drawing::Size(24, 13);
    this->linkedit2->TabIndex = 5;
    this->linkedit2->TabStop = true;
    this->linkedit2->Text = L"edit";
    this->linkedit2->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::linkedit2_LinkClicked);
    //
    // linkedit1
    //
    this->linkedit1->AutoSize = true;
    this->linkedit1->Location = System::Drawing::Point(118, 250);
    this->linkedit1->Name = L"linkedit1";
    this->linkedit1->Size = System::Drawing::Size(24, 13);
    this->linkedit1->TabIndex = 2;
    this->linkedit1->TabStop = true;
    this->linkedit1->Text = L"edit";
    this->linkedit1->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::linkedit1_LinkClicked);
    //
    // logout
    //
    this->logout->AutoSize = true;
    this->logout->Location = System::Drawing::Point(751, 3);
    this->logout->Name = L"logout";
    this->logout->Size = System::Drawing::Size(42, 13);
    this->logout->TabIndex = 17;
    this->logout->TabStop = true;
    this->logout->Text = L"LogOut";
    this->logout->LinkClicked +=
        gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(
            this, &AdminMenu::logout_LinkClicked);
    //
    // buttonNoShow
    //
    this->buttonNoShow->Location = System::Drawing::Point(344, 439);
    this->buttonNoShow->Name = L"buttonNoShow";
    this->buttonNoShow->Size = System::Drawing::Size(75, 23);
    this->buttonNoShow->TabIndex = 14;
    this->buttonNoShow->Text = L"No Show";
    this->buttonNoShow->UseVisualStyleBackColor = true;
    this->buttonNoShow->Click +=
        gcnew System::EventHandler(this, &AdminMenu::buttonNoShow_Click);
    //
    // ButtonShow
    //
    this->ButtonShow->Location = System::Drawing::Point(344, 439);
    this->ButtonShow->Name = L"ButtonShow";
    this->ButtonShow->Size = System::Drawing::Size(75, 23);
    this->ButtonShow->TabIndex = 26;
    this->ButtonShow->Text = L"Show";
    this->ButtonShow->UseVisualStyleBackColor = true;
    this->ButtonShow->Click +=
        gcnew System::EventHandler(this, &AdminMenu::ButtonShow_Click);
    //
    // lbl6
    //
    this->lbl6->AutoSize = true;
    this->lbl6->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl6->Location = System::Drawing::Point(274, 439);
    this->lbl6->Name = L"lbl6";
    this->lbl6->Size = System::Drawing::Size(35, 20);
    this->lbl6->TabIndex = 25;
    this->lbl6->Text = L"Pay";
    //
    // lbl5
    //
    this->lbl5->AutoSize = true;
    this->lbl5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl5->Location = System::Drawing::Point(233, 291);
    this->lbl5->Name = L"lbl5";
    this->lbl5->Size = System::Drawing::Size(55, 20);
    this->lbl5->TabIndex = 24;
    this->lbl5->Text = L"Phone";
    //
    // lbl4
    //
    this->lbl4->AutoSize = true;
    this->lbl4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl4->Location = System::Drawing::Point(234, 247);
    this->lbl4->Name = L"lbl4";
    this->lbl4->Size = System::Drawing::Size(46, 20);
    this->lbl4->TabIndex = 23;
    this->lbl4->Text = L"email";
    //
    // lbl3
    //
    this->lbl3->AutoSize = true;
    this->lbl3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl3->Location = System::Drawing::Point(234, 204);
    this->lbl3->Name = L"lbl3";
    this->lbl3->Size = System::Drawing::Size(77, 20);
    this->lbl3->TabIndex = 22;
    this->lbl3->Text = L"Hire Date";
    this->lbl3->Click +=
        gcnew System::EventHandler(this, &AdminMenu::lbl3_Click);
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label6->Location = System::Drawing::Point(139, 439);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(111, 20);
    this->label6->TabIndex = 21;
    this->label6->Text = L"Weekly Pay:  $";
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label5->Location = System::Drawing::Point(141, 291);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(59, 20);
    this->label5->TabIndex = 20;
    this->label5->Text = L"Phone:";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label4->Location = System::Drawing::Point(141, 247);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(52, 20);
    this->label4->TabIndex = 19;
    this->label4->Text = L"Email:";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label3->Location = System::Drawing::Point(141, 204);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(81, 20);
    this->label3->TabIndex = 18;
    this->label3->Text = L"Hire Date:";
    //
    // lbl2
    //
    this->lbl2->AutoSize = true;
    this->lbl2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl2->Location = System::Drawing::Point(117, 115);
    this->lbl2->Name = L"lbl2";
    this->lbl2->Size = System::Drawing::Size(94, 20);
    this->lbl2->TabIndex = 17;
    this->lbl2->Text = L"Department";
    this->lbl2->Click +=
        gcnew System::EventHandler(this, &AdminMenu::lbl2_Click);
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label2->Location = System::Drawing::Point(117, 115);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(94, 20);
    this->label2->TabIndex = 16;
    this->label2->Text = L"Manager of ";
    //
    // lbl1
    //
    this->lbl1->AutoSize = true;
    this->lbl1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl1->Location = System::Drawing::Point(256, 66);
    this->lbl1->Name = L"lbl1";
    this->lbl1->Size = System::Drawing::Size(188, 29);
    this->lbl1->TabIndex = 15;
    this->lbl1->Text = L"Employee name";
    this->lbl1->Click +=
        gcnew System::EventHandler(this, &AdminMenu::lbl1_Click);
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(115, 66);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(121, 29);
    this->label1->TabIndex = 14;
    this->label1->Text = L"Welcome:";
    //
    // tab1
    //
    this->tab1->Controls->Add(this->tabPage1);
    this->tab1->Controls->Add(this->tab2);
    this->tab1->Location = System::Drawing::Point(0, 0);
    this->tab1->Name = L"tab1";
    this->tab1->SelectedIndex = 0;
    this->tab1->Size = System::Drawing::Size(826, 619);
    this->tab1->TabIndex = 0;
    //
    // AdminMenu
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(822, 615);
    this->Controls->Add(this->tab1);
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Name = L"AdminMenu";
    this->Text = L"Admin Main Menu";
    this->Load += gcnew System::EventHandler(this, &AdminMenu::AminMenu_Load);
    this->tab2->ResumeLayout(false);
    this->tabControl1->ResumeLayout(false);
    this->tab1Page2->ResumeLayout(false);
    this->tab1Page2->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox2))
        ->EndInit();
    this->tab2Page2->ResumeLayout(false);
    this->tab2Page2->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox3))
        ->EndInit();
    this->tabPage1->ResumeLayout(false);
    this->tabPage1->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->EndInit();
    this->tab1->ResumeLayout(false);
    this->ResumeLayout(false);
  }
#pragma endregion
private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void tab2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void AminMenu_Load(System::Object ^ sender, System::EventArgs ^ e) {

    textBox4->Hide();
    textBox5->Hide();
    button1->Hide();
    button2->Hide();
    buttonNoShow->Hide();

    label2->Hide();

    textBox6->Hide();
    textBox7->Hide();
    textBox8->Hide();
    textBox10->Hide();
    button3->Hide();

    textBox9->Hide();
    button4->Hide();

    label7->Hide();
    label8->Hide();
    label9->Hide();
    label10->Hide();
    label11->Hide();
    lbl6->Hide();
    lbl7->Hide();
    lbl8->Hide();
    lbl9->Hide();
    lbl10->Hide();
    lbl11->Hide();
    lbl12->Hide();

    label30->Hide();
    label31->Hide();

    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();

    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText =
        "select [Firstname],[Lastname], [Email],[Address1], "
        "[City],[State],[Zipcode], [HireDate], [PhoneNumber], [SalaryPay], "
        "[Position] from EmployeeInfo where ([ID] = @ID)  ";
    cmd->Parameters->AddWithValue("@ID", ID);

    OleDbDataReader ^ myReader = cmd->ExecuteReader();

    while (myReader->Read()) {

      Name = myReader["Firstname"]->ToString();
      LastName = myReader["Lastname"]->ToString();
      email = myReader["Email"]->ToString();
      phone = myReader["PhoneNumber"]->ToString();
      Hire = myReader["HireDate"]->ToString();
      pay = myReader["SalaryPay"]->ToString();
      Department = myReader["Position"]->ToString();
      Address = myReader["Address1"]->ToString();
      City = myReader["City"]->ToString();
      State = myReader["State"]->ToString();
      Zip = myReader["Zipcode"]->ToString();
    }

    lbl1->Text = LastName + ", " + Name;
    lbl2->Text = Department;
    lbl3->Text = Hire;
    label28->Text = word;
    lbl4->Text = email;
    lbl5->Text = phone;
    lbl6->Text = pay;
    label23->Text = Address;
    label27->Text = City + ", " + State;
    label26->Text = Zip;
  }

private:
  System::Void ButtonShow_Click(System::Object ^ sender,
                                System::EventArgs ^ e) {
    lbl6->Show();
    ButtonShow->Hide();
    buttonNoShow->Show();
  }

private:
  System::Void buttonNoShow_Click(System::Object ^ sender,
                                  System::EventArgs ^ e) {
    lbl6->Hide();
    buttonNoShow->Hide();
    ButtonShow->Show();
  }

private:
  System::Void logout_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
    this->Hide();
    otherform->Show();
  }

private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {

    OleDbConnection ^ conn2 =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn2->Open();
    OleDbCommand ^ cmd2 = conn2->CreateCommand();
    cmd2->CommandType = CommandType::Text;
    cmd2->CommandText =
        "select [ID],[Firstname],[Lastname], [Position], [PayType], [Email], "
        "[PhoneNumber],[HourlyPay] , [Hours], [HireDate] from EmployeeInfo "
        "where  ([ID] = @ID) and ([Position] = 'Employee' or [Position] = "
        "'employee' or [Position] = 'EMPLOYEE')  ";

    // error checking
    if (textBox1->Text == "") {
      MessageBox::Show("Enter An Employee Id.");
      return;
    }
    if (!checkID(textBox1->Text)) {
      MessageBox::Show("This ID does not exist within the Database");
      return;
    }

    cmd2->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
    OleDbDataReader ^ myReader = cmd2->ExecuteReader();

    if (myReader->HasRows) {

      while (myReader->Read()) {

        word1 = myReader["ID"]->ToString();
        NameE = myReader["Firstname"]->ToString();
        LastNameE = myReader["Lastname"]->ToString();
        HireE = myReader["PayType"]->ToString();
        emailE = myReader["Email"]->ToString();
        phoneE = myReader["PhoneNumber"]->ToString();
        payE = myReader["HourlyPay"]->ToString();
        DepartmentE = myReader["Position"]->ToString();
        HireDateE = myReader["HireDate"]->ToString();
        CurrHours = myReader["Hours"]->ToString();
      }

      label30->Text = HireE;

      lbl8->Text = DepartmentE;
      lbl7->Text = LastNameE + "," + NameE;
      lbl9->Text = emailE;
      lbl10->Text = phoneE;
      lbl11->Text = payE;
      lbl12->Text = HireDateE;

      lbl8->Show();
      lbl9->Show();
      lbl10->Show();
      lbl11->Show();
      lbl12->Show();

      label7->Show();
      label8->Show();
      label9->Show();
      label10->Show();
      label11->Show();

      lbl7->Show();

      label30->Show();
      label31->Show();
    }
  }

private:
  System::Void label11_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label10_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void LogOut2_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
    this->Hide();
    otherform->Show();
  }

private:
  System::Void label13_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void buttonReset_Click(System::Object ^ sender,
                                 System::EventArgs ^ e) {
    label7->Hide();
    label8->Hide();
    label9->Hide();
    label10->Hide();
    label11->Hide();

    label30->Hide();
    label31->Hide();

    lbl7->Hide();
    lbl8->Hide();
    lbl9->Hide();
    lbl10->Hide();
    lbl11->Hide();
    lbl12->Hide();
  }

private:
  System::Void tab2Page2_Click(System::Object ^ sender, System::EventArgs ^ e) {
  }

private:
  System::Void label14_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label15_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label20_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {

    Regex ^ R = gcnew Regex("\\d{3}-\\d{3}-\\d{4}");
    if (!(R->IsMatch(textBox5->Text)))
    //	if (textBox4->Text == "" || textBox4->Text->Contains(".com"))
    {
      MessageBox::Show("Enter valid Phone number: 111-111-1111 ");
      return;
    }

    try {
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandType = CommandType::Text;
      cmd->CommandText =
          "UPDATE EmployeeInfo SET [PhoneNumber] = @PhoneNumber WHERE ID = @ID";
      cmd->Parameters->AddWithValue("@PhoneNumber", textBox5->Text);
      cmd->Parameters->AddWithValue("@ID", ID); // Int32::Parse(lbl3->Text));

      textBox5->Hide();
      button2->Hide();

      cmd->ExecuteNonQuery();
      conn->Close();
      MessageBox::Show("Change Succeed!");
      lbl5->Text = textBox5->Text;
    } catch (System::FormatException ^ e) {
      return;
    }
  }

private:
  System::Void button1_Click_1(System::Object ^ sender, System::EventArgs ^ e) {

    Regex ^ R = gcnew Regex("^([\\w\\.\\-]+)@([\\w\\-]+)((\\.(\\w){2,3})+)$");
    if (!(R->IsMatch(textBox4->Text)))
    //	if (textBox4->Text == "" || textBox4->Text->Contains(".com"))
    {
      MessageBox::Show("Enter valid email: name@email.com ");
      return;
    }

    try {
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandType = CommandType::Text;
      cmd->CommandText =
          "UPDATE EmployeeInfo SET [Email] = @Email WHERE ID = @ID";
      cmd->Parameters->AddWithValue("@Email", textBox4->Text);
      cmd->Parameters->AddWithValue("@ID", ID); // Int32::Parse(lbl3->Text));

      textBox4->Hide();
      button1->Hide();

      cmd->ExecuteNonQuery();
      conn->Close();
      MessageBox::Show("Change Succeed!");
      lbl4->Text = textBox4->Text;
    }

    catch (System::FormatException ^ e) {
      return;
    }
  }

private:
  System::Void linkedit1_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
    textBox4->Show();
    button1->Show();
  }

private:
  System::Void linkedit2_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
    textBox5->Show();
    button2->Show();
  }

private:
  System::Void lbl1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void lbl2_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void tabPage1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void lbl7_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void lbl3_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void textBox4_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void linkLabel1_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
    textBox6->Show();
    textBox7->Show();
    textBox8->Show();
    textBox10->Show();
    button3->Show();
  }

private:
  System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {

    if (textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" ||
        textBox10->Text == "") {

      MessageBox::Show("Enter Data in the four boxes");
      return;
    }

    Regex ^ Ru =
        gcnew Regex("^(\\b\\D+\\b)?\\s*(\\b.*?\\d.*?\\b)\\s*(\\b\\D+\\b)?$");
    if (!(Ru->IsMatch(textBox6->Text))) {

      MessageBox::Show("Enter valid Street Number and name");
      return;
    }

    Regex ^ R = gcnew Regex("^[a-zA-Z\\s-]+$");
    if (!(R->IsMatch(textBox10->Text))) {
      MessageBox::Show("Enter valid City");
      return;
    }

    Regex ^ Ra = gcnew Regex(
        "^(?:(A[KLRZ]|C[AOT]|D[CE]|FL|GA|HI|I[ADLN]|K[SY]|LA|M[ADEINOST]|N["
        "CDEHJMVY]|O[HKR]|P[AR]|RI|S[CD]|T[NX]|UT|V[AIT]|W[AIVY]))$");
    if (!(Ra->IsMatch(textBox7->Text))) {
      MessageBox::Show("Enter a 2 letter US State");
      return;
    }

    Regex ^ Re = gcnew Regex("^[0-9]{5}(?:-[0-9]{4})?$");
    if (!(Re->IsMatch(textBox8->Text))) {
      MessageBox::Show("Enter valid zipcode ");
      return;
    }

    try {
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandType = CommandType::Text;
      cmd->CommandText =
          "UPDATE EmployeeInfo SET [Address1] = @Address , [City] = @City , "
          "[State] = @State ,[Zipcode] = @Zipcode WHERE ID = @ID";
      cmd->Parameters->AddWithValue("@Address", textBox6->Text);
      cmd->Parameters->AddWithValue("@City", textBox10->Text);
      cmd->Parameters->AddWithValue("@State", textBox7->Text);
      cmd->Parameters->AddWithValue("@Zipcode", textBox8->Text);
      cmd->Parameters->AddWithValue("@ID", ID); // Int32::Parse(lbl3->Text));

      textBox6->Hide();
      textBox7->Hide();
      textBox10->Hide();
      textBox8->Hide();
      button3->Hide();

      cmd->ExecuteNonQuery();
      conn->Close();
      MessageBox::Show("Change Succeed!");

      label23->Text = textBox6->Text;
      label27->Text = textBox10->Text + ", " + textBox7->Text;
      label26->Text = textBox8->Text;

    }

    catch (System::FormatException ^ e) {
      return;
    }
  }

private:
  System::Void tab1Page2_Click(System::Object ^ sender, System::EventArgs ^ e) {
  }

private:
  System::Void linkLabel2_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {

    if (MessageBox::Show("Please confirm before proceed" + "\n" +
                             "Do you want to Continue ?",
                         "Confirm", MessageBoxButtons::YesNo,
                         MessageBoxIcon::Question) ==
        System::Windows::Forms::DialogResult::Yes)

    {
      textBox9->Show();
      button4->Show();
    }

    else

    {
      return;
    }
  }

private:
  System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {

    //  (?=.*[A-Z]) //should contain at least one upper case
    //(? = .*[a - z])       // should contain at least one lower case
    //	(? = .* ? [0 - 9])      // should contain at least one digit
    //	(? = .* ? [!@#\$ & *~]) // should contain at least one Special character
    //	.{8, }             // Must be at least 8 characters in length

    // Regex^ Re = gcnew
    // Regex("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$");

    // if (!(Re->IsMatch(textBox9->Text)))
    //{
    //	MessageBox::Show("Invalid Password" + "\nAt least one upper case" +
    //"\nAt least one lower case" + "\nAt least one digit" + "\nAt least one
    //Special character" + "\nMust be at least 8 characters in length" );
    //	return;
    // }

    Crypt = textBox9->Text;

    // String^ en = "";
    // String^ s = Crypt;
    // for (int i = 0; i < s->Length; i++) {    //go through each char
    //	char c = s[i];
    //	int shifted = (int)c + 10;			//shift 10 places
    //	en += (char)shifted;					//turn back into
    //char and add to String
    // }
    //
    // Crypt = en;

    try {
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandType = CommandType::Text;
      cmd->CommandText =
          "UPDATE EmployeeInfo SET [Password] = @Password WHERE ID = @ID";
      cmd->Parameters->AddWithValue("@Password", Crypt);
      cmd->Parameters->AddWithValue("@ID", ID); // Int32::Parse(lbl3->Text));

      textBox9->Hide();
      button4->Hide();

      cmd->ExecuteNonQuery();
      conn->Close();
      MessageBox::Show("Change Succeed!");

    }

    catch (System::FormatException ^ e) {
      return;
    }
  }

private:
  System::Void textBox9_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {
    this->textBox9->PasswordChar = '*';
  }

private:
  System::Void button5_Click(System::Object ^ sender, System::EventArgs ^ e) {
    ViewPaystub ^ viewPay = gcnew ViewPaystub(word);
    viewPay->otherPage = this;
    this->Hide();
    viewPay->ShowDialog();
  }

private:
  System::Void timeSheet_startButton_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {

    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();

    // init all hours = 0
    cmd->CommandText =
        "UPDATE EmployeeInfo SET [Hours] = 0, [OvertimeHours] = 0";
    cmd->ExecuteNonQuery();

    // create a list of all the ids in the db
    cmd = conn->CreateCommand();
    cmd->CommandText = "SELECT Firstname,Lastname,ID FROM EmployeeInfo";
    OleDbDataReader ^ reader = cmd->ExecuteReader();
    while (reader->Read()) {
      ListViewItem ^ item = gcnew ListViewItem(reader["ID"]->ToString());

      item->SubItems->Add(reader["Firstname"]->ToString());
      item->SubItems->Add(reader["Lastname"]->ToString());
      empHours_list->Items->Add(item);
    }
    conn->Close();
  }

private:
  System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
    try {
      // update selected emps hours in database
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandText = "UPDATE EmployeeInfo SET [Hours] = @Hours, "
                         "[OvertimeHours] = @OvertimeHours WHERE ID = @ID";
      cmd->Parameters->AddWithValue("@Hours", Int32::Parse(hoursBox->Text));
      cmd->Parameters->AddWithValue("@OvertimeHours",
                                    Int32::Parse(otBox->Text));
      cmd->Parameters->AddWithValue("@ID", idBox->Text);

      cmd->ExecuteNonQuery();

      conn->Close();

      // clear list
      empHours_list->Items->Clear();

      OleDbConnection ^ conn2 =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn2->Open();
      OleDbCommand ^ cmd2 = conn2->CreateCommand();

      // refill a list of all the ids in the db
      cmd2->CommandText =
          "SELECT Firstname,Lastname,ID,Hours,OvertimeHours FROM EmployeeInfo";

      OleDbDataReader ^ reader = cmd2->ExecuteReader();
      while (reader->Read()) {
        ListViewItem ^ item = gcnew ListViewItem(reader["ID"]->ToString());

        item->SubItems->Add(reader["Firstname"]->ToString());
        item->SubItems->Add(reader["Lastname"]->ToString());
        item->SubItems->Add(reader["Hours"]->ToString());
        item->SubItems->Add(reader["OvertimeHours"]->ToString());
        empHours_list->Items->Add(item);
      }
      conn2->Close();

    } catch (System::FormatException ^ e) {
      return;
    }
  }

private:
  System::Void button7_Click(System::Object ^ sender, System::EventArgs ^ e) {
    try {
      // update selected emps hours in database
      OleDbConnection ^ conn =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn->Open();
      OleDbCommand ^ cmd = conn->CreateCommand();
      cmd->CommandText = "UPDATE EmployeeInfo SET [Hours] = 0, [OvertimeHours] "
                         "= 0 WHERE ID = @ID";

      cmd->Parameters->AddWithValue("@ID", idBox->Text);

      cmd->ExecuteNonQuery();

      conn->Close();

      // clear list
      empHours_list->Items->Clear();

      OleDbConnection ^ conn2 =
          gcnew OleDbConnection(ConnectionPath::connectionString);
      conn2->Open();
      OleDbCommand ^ cmd2 = conn2->CreateCommand();

      // refill a list of all the ids in the db
      cmd2->CommandText =
          "SELECT Firstname,Lastname,ID,Hours,OvertimeHours FROM EmployeeInfo";

      OleDbDataReader ^ reader = cmd2->ExecuteReader();
      while (reader->Read()) {
        ListViewItem ^ item = gcnew ListViewItem(reader["ID"]->ToString());

        item->SubItems->Add(reader["Firstname"]->ToString());
        item->SubItems->Add(reader["Lastname"]->ToString());
        item->SubItems->Add(reader["Hours"]->ToString());
        item->SubItems->Add(reader["OvertimeHours"]->ToString());
        empHours_list->Items->Add(item);
      }
      conn2->Close();

    } catch (System::FormatException ^ e) {
      return;
    }
  }
};
} // namespace Payrolls
