#pragma once

#include "AdminMenu.h"
#include "ConnectionPath.h"

namespace Payrolls {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Text::RegularExpressions;

public
ref class EmployeeMainMenu : public System::Windows::Forms::Form {
private:
  void fillData(System::String ^ empID);
  void init(System::String ^ empID);

public:
  EmployeeMainMenu(System::Windows::Forms::Form ^ loginMenu,
                   System::String ^ empID) {
    InitializeComponent();
    orignalMenu = loginMenu;
    init(empID);
    ID = empID;
  }

protected:
  ~EmployeeMainMenu() {
    if (components) {
      delete components;
    }
  }
  // used on logout to bring user back to login menu
private:
  System::Windows::Forms::Form ^ orignalMenu;

private:
  System::Windows::Forms::Panel ^ editPersonal_panel;

private:
  System::Windows::Forms::Panel ^ ViewPaystubs_panel;

private:
  System::Windows::Forms::Panel ^ ViewTimesheet_panel;

private:
  String ^ word1;

private:
  String ^ NameE;

private:
  String ^ LastNameE;

private:
  String ^ HireE;

private:
  String ^ emailE;

private:
  String ^ phoneE;

private:
  String ^ DepartmentE;

private:
  String ^ word;

private:
  System::Windows::Forms::Label ^ Emp_currBenefit_glance;

private:
  System::Windows::Forms::Button ^ persInfoSubmit_button;

private:
  System::Windows::Forms::TextBox ^ phoneNumber_textBox;

private:
  System::Windows::Forms::TextBox ^ prefEmail_textbox;

private:
  System::Windows::Forms::Label ^ preferedPhoneNumber_label;

private:
  System::Windows::Forms::Label ^ preferedEmail_label;

private:
  System::Windows::Forms::Label ^ Emp_ID;

private:
  System::Windows::Forms::Label ^ id_label;

private:
  System::Windows::Forms::Label ^ Emp_department;

private:
  System::Windows::Forms::Label ^ department_label;

private:
  System::Windows::Forms::Label ^ Emp_sex;

private:
  System::Windows::Forms::Label ^ sex_label;

private:
  System::Windows::Forms::Label ^ Emp_dob;

private:
  System::Windows::Forms::Label ^ dateOfBirth_label;

private:
  System::Windows::Forms::Label ^ Emp_lastName;

private:
  System::Windows::Forms::Label ^ Emp_firstName;

private:
  System::Windows::Forms::Label ^ lastName_label;

private:
  System::Windows::Forms::Label ^ firstName_label;

private:
  System::Windows::Forms::PictureBox ^ pictureBox3;

private:
  System::Windows::Forms::TextBox ^ textBox4;

private:
  System::Windows::Forms::TextBox ^ textBox3;

private:
  System::Windows::Forms::TextBox ^ textBox2;

private:
  System::Windows::Forms::Label ^ label7;

private:
  System::Windows::Forms::TextBox ^ textBox1;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Panel ^ viewPaystub_panel;

private:
  System::Windows::Forms::PictureBox ^ pictureBox1;

private:
  System::Windows::Forms::Label ^ payStub_title_label;

private:
  System::Windows::Forms::Panel ^ infoGlance_panel;

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::Label ^ label10;

private:
  System::Windows::Forms::Label ^ benefitName_label3;

private:
  System::Windows::Forms::Label ^ benefitName_label2;

private:
  System::Windows::Forms::Label ^ benefitName_label1;

private:
  System::Windows::Forms::PictureBox ^ pictureBox4;

private:
  System::Windows::Forms::Label ^ Emp_id_glance;

private:
  System::Windows::Forms::Label ^ Emp_firstName_glance;

private:
  System::Windows::Forms::Label ^ Emp_lastName_glance;

private:
  System::Windows::Forms::Label ^ Emp_dept_glance;

private:
  System::Windows::Forms::Label ^ firstName_glance_label;

private:
  System::Windows::Forms::Label ^ mainMenuLeft_title;

private:
  System::Windows::Forms::Label ^ lastName_glance_label;

private:
  System::Windows::Forms::Label ^ id_glance_label;

private:
  System::Windows::Forms::Label ^ dept_glance_label;

private:
  System::Windows::Forms::Label ^ currBenefit_label;

private:
  System::Windows::Forms::Panel ^ viewBenefits_panel;

private:
  System::Windows::Forms::PictureBox ^ pictureBox5;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::Label ^ visionCost_label;

private:
  System::Windows::Forms::Label ^ empVisionPackage_label;

private:
  System::Windows::Forms::Label ^ label8;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::Windows::Forms::Label ^ dentalCost_label;

private:
  System::Windows::Forms::Label ^ empDentalPackage_label;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::Label ^ healthTitle_label;

private:
  System::Windows::Forms::Label ^ benefitCost_label;

private:
  System::Windows::Forms::Label ^ healthCost_label;

private:
  System::Windows::Forms::Label ^ empHealthPackage_label;

private:
  System::Windows::Forms::Label ^ benefitPackage_label;

private:
  System::Windows::Forms::Label ^ benefitName_label;

private:
  System::Windows::Forms::Label ^ visionTitle_label;

private:
  System::Windows::Forms::Label ^ dentalTitle_label;

private:
  System::Windows::Forms::PictureBox ^ pictureBox2;

private:
  System::Windows::Forms::Label ^ label17;

private:
  String ^ ID;

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
  System::Windows::Forms::Panel ^ panel1;

private:
  System::Windows::Forms::PictureBox ^ pictureBox8;

private:
  System::Windows::Forms::PictureBox ^ pictureBox9;

private:
  System::Windows::Forms::ToolStripButton ^ editPersonalInfo_button;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator1;

private:
  System::Windows::Forms::ToolStripButton ^ InfoAtGlance_button;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator4;

private:
  System::Windows::Forms::ToolStripButton ^ viewBenefits_button;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator2;

private:
  System::Windows::Forms::ToolStripButton ^ toolStripButton1;

private:
  System::Windows::Forms::ToolStripSeparator ^ toolStripSeparator5;

private:
  System::Windows::Forms::ToolStripButton ^ logout_button;

private:
  System::Windows::Forms::ToolStrip ^ toolStrip1;

private:
  System::Windows::Forms::Panel ^ panel2;

private:
  System::Windows::Forms::Panel ^ panel3;

private:
  System::Windows::Forms::Button ^ button3;

private:
  System::Windows::Forms::TextBox ^ textBox5;

private:
  System::Windows::Forms::Button ^ button4;

private:
  System::Windows::Forms::Label ^ label30;

private:
  System::Windows::Forms::Label ^ label31;

private:
  System::Windows::Forms::Label ^ lbl10;

private:
  System::Windows::Forms::Label ^ lbl9;

private:
  System::Windows::Forms::Label ^ lbl8;

private:
  System::Windows::Forms::Label ^ label11;

private:
  System::Windows::Forms::Label ^ label12;

private:
  System::Windows::Forms::Label ^ label13;

private:
  System::Windows::Forms::Label ^ lbl7;

private:
  System::Windows::Forms::Button ^ button1;

private:
  System::ComponentModel::Container ^ components;
  // this code it auto generated by visual studio

  // #pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent() {
    System::ComponentModel::ComponentResourceManager ^ resources =
        (gcnew System::ComponentModel::ComponentResourceManager(
            EmployeeMainMenu::typeid));
    this->persInfoSubmit_button = (gcnew System::Windows::Forms::Button());
    this->phoneNumber_textBox = (gcnew System::Windows::Forms::TextBox());
    this->prefEmail_textbox = (gcnew System::Windows::Forms::TextBox());
    this->preferedPhoneNumber_label = (gcnew System::Windows::Forms::Label());
    this->preferedEmail_label = (gcnew System::Windows::Forms::Label());
    this->Emp_ID = (gcnew System::Windows::Forms::Label());
    this->id_label = (gcnew System::Windows::Forms::Label());
    this->Emp_department = (gcnew System::Windows::Forms::Label());
    this->department_label = (gcnew System::Windows::Forms::Label());
    this->Emp_sex = (gcnew System::Windows::Forms::Label());
    this->sex_label = (gcnew System::Windows::Forms::Label());
    this->Emp_dob = (gcnew System::Windows::Forms::Label());
    this->dateOfBirth_label = (gcnew System::Windows::Forms::Label());
    this->Emp_lastName = (gcnew System::Windows::Forms::Label());
    this->Emp_firstName = (gcnew System::Windows::Forms::Label());
    this->lastName_label = (gcnew System::Windows::Forms::Label());
    this->firstName_label = (gcnew System::Windows::Forms::Label());
    this->editPersonal_panel = (gcnew System::Windows::Forms::Panel());
    this->textBox4 = (gcnew System::Windows::Forms::TextBox());
    this->textBox3 = (gcnew System::Windows::Forms::TextBox());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
    this->Emp_currBenefit_glance = (gcnew System::Windows::Forms::Label());
    this->viewPaystub_panel = (gcnew System::Windows::Forms::Panel());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->payStub_title_label = (gcnew System::Windows::Forms::Label());
    this->infoGlance_panel = (gcnew System::Windows::Forms::Panel());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->benefitName_label3 = (gcnew System::Windows::Forms::Label());
    this->benefitName_label2 = (gcnew System::Windows::Forms::Label());
    this->benefitName_label1 = (gcnew System::Windows::Forms::Label());
    this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
    this->Emp_id_glance = (gcnew System::Windows::Forms::Label());
    this->Emp_firstName_glance = (gcnew System::Windows::Forms::Label());
    this->Emp_lastName_glance = (gcnew System::Windows::Forms::Label());
    this->Emp_dept_glance = (gcnew System::Windows::Forms::Label());
    this->firstName_glance_label = (gcnew System::Windows::Forms::Label());
    this->mainMenuLeft_title = (gcnew System::Windows::Forms::Label());
    this->lastName_glance_label = (gcnew System::Windows::Forms::Label());
    this->id_glance_label = (gcnew System::Windows::Forms::Label());
    this->dept_glance_label = (gcnew System::Windows::Forms::Label());
    this->currBenefit_label = (gcnew System::Windows::Forms::Label());
    this->viewBenefits_panel = (gcnew System::Windows::Forms::Panel());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->visionCost_label = (gcnew System::Windows::Forms::Label());
    this->empVisionPackage_label = (gcnew System::Windows::Forms::Label());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->dentalCost_label = (gcnew System::Windows::Forms::Label());
    this->empDentalPackage_label = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->healthTitle_label = (gcnew System::Windows::Forms::Label());
    this->benefitCost_label = (gcnew System::Windows::Forms::Label());
    this->healthCost_label = (gcnew System::Windows::Forms::Label());
    this->empHealthPackage_label = (gcnew System::Windows::Forms::Label());
    this->benefitPackage_label = (gcnew System::Windows::Forms::Label());
    this->benefitName_label = (gcnew System::Windows::Forms::Label());
    this->visionTitle_label = (gcnew System::Windows::Forms::Label());
    this->dentalTitle_label = (gcnew System::Windows::Forms::Label());
    this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
    this->label17 = (gcnew System::Windows::Forms::Label());
    this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
    this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
    this->editPersonalInfo_button =
        (gcnew System::Windows::Forms::ToolStripButton());
    this->toolStripSeparator1 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->InfoAtGlance_button =
        (gcnew System::Windows::Forms::ToolStripButton());
    this->toolStripSeparator4 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->viewBenefits_button =
        (gcnew System::Windows::Forms::ToolStripButton());
    this->toolStripSeparator2 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
    this->toolStripSeparator5 =
        (gcnew System::Windows::Forms::ToolStripSeparator());
    this->logout_button = (gcnew System::Windows::Forms::ToolStripButton());
    this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->panel3 = (gcnew System::Windows::Forms::Panel());
    this->label30 = (gcnew System::Windows::Forms::Label());
    this->label31 = (gcnew System::Windows::Forms::Label());
    this->lbl10 = (gcnew System::Windows::Forms::Label());
    this->lbl9 = (gcnew System::Windows::Forms::Label());
    this->lbl8 = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label12 = (gcnew System::Windows::Forms::Label());
    this->label13 = (gcnew System::Windows::Forms::Label());
    this->lbl7 = (gcnew System::Windows::Forms::Label());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->textBox5 = (gcnew System::Windows::Forms::TextBox());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->editPersonal_panel->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox3))
        ->BeginInit();
    this->viewPaystub_panel->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->BeginInit();
    this->infoGlance_panel->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox4))
        ->BeginInit();
    this->viewBenefits_panel->SuspendLayout();
    this->panel1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox8))
        ->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox9))
        ->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox5))
        ->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox2))
        ->BeginInit();
    this->toolStrip1->SuspendLayout();
    this->panel3->SuspendLayout();
    this->SuspendLayout();
    //
    // persInfoSubmit_button
    //
    this->persInfoSubmit_button->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
    this->persInfoSubmit_button->Location = System::Drawing::Point(708, 440);
    this->persInfoSubmit_button->Name = L"persInfoSubmit_button";
    this->persInfoSubmit_button->Size = System::Drawing::Size(174, 51);
    this->persInfoSubmit_button->TabIndex = 28;
    this->persInfoSubmit_button->Text = L"Submit Changes";
    this->persInfoSubmit_button->UseVisualStyleBackColor = true;
    this->persInfoSubmit_button->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::persInfoSubmit_button_Click_1);
    //
    // phoneNumber_textBox
    //
    this->phoneNumber_textBox->Location = System::Drawing::Point(781, 216);
    this->phoneNumber_textBox->Name = L"phoneNumber_textBox";
    this->phoneNumber_textBox->Size = System::Drawing::Size(202, 20);
    this->phoneNumber_textBox->TabIndex = 26;
    //
    // prefEmail_textbox
    //
    this->prefEmail_textbox->Location = System::Drawing::Point(701, 149);
    this->prefEmail_textbox->Name = L"prefEmail_textbox";
    this->prefEmail_textbox->Size = System::Drawing::Size(282, 20);
    this->prefEmail_textbox->TabIndex = 27;
    //
    // preferedPhoneNumber_label
    //
    this->preferedPhoneNumber_label->AutoSize = true;
    this->preferedPhoneNumber_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->preferedPhoneNumber_label->Location =
        System::Drawing::Point(553, 212);
    this->preferedPhoneNumber_label->Name = L"preferedPhoneNumber_label";
    this->preferedPhoneNumber_label->Size = System::Drawing::Size(222, 24);
    this->preferedPhoneNumber_label->TabIndex = 24;
    this->preferedPhoneNumber_label->Text = L"Prefered Phone Number:";
    //
    // preferedEmail_label
    //
    this->preferedEmail_label->AutoSize = true;
    this->preferedEmail_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->preferedEmail_label->Location = System::Drawing::Point(553, 149);
    this->preferedEmail_label->Name = L"preferedEmail_label";
    this->preferedEmail_label->Size = System::Drawing::Size(139, 24);
    this->preferedEmail_label->TabIndex = 25;
    this->preferedEmail_label->Text = L"Prefered Email:";
    //
    // Emp_ID
    //
    this->Emp_ID->AutoSize = true;
    this->Emp_ID->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_ID->Location = System::Drawing::Point(288, 138);
    this->Emp_ID->Name = L"Emp_ID";
    this->Emp_ID->Size = System::Drawing::Size(27, 24);
    this->Emp_ID->TabIndex = 4;
    this->Emp_ID->Text = L"ID";
    //
    // id_label
    //
    this->id_label->AutoSize = true;
    this->id_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->id_label->Location = System::Drawing::Point(120, 138);
    this->id_label->Name = L"id_label";
    this->id_label->Size = System::Drawing::Size(32, 24);
    this->id_label->TabIndex = 21;
    this->id_label->Text = L"ID:";
    //
    // Emp_department
    //
    this->Emp_department->AutoSize = true;
    this->Emp_department->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_department->Location = System::Drawing::Point(288, 413);
    this->Emp_department->Name = L"Emp_department";
    this->Emp_department->Size = System::Drawing::Size(107, 24);
    this->Emp_department->TabIndex = 12;
    this->Emp_department->Text = L"Department";
    //
    // department_label
    //
    this->department_label->AutoSize = true;
    this->department_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->department_label->Location = System::Drawing::Point(120, 413);
    this->department_label->Name = L"department_label";
    this->department_label->Size = System::Drawing::Size(81, 24);
    this->department_label->TabIndex = 11;
    this->department_label->Text = L"Position:";
    //
    // Emp_sex
    //
    this->Emp_sex->AutoSize = true;
    this->Emp_sex->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_sex->Location = System::Drawing::Point(287, 321);
    this->Emp_sex->Name = L"Emp_sex";
    this->Emp_sex->Size = System::Drawing::Size(74, 24);
    this->Emp_sex->TabIndex = 10;
    this->Emp_sex->Text = L"Gender";
    //
    // sex_label
    //
    this->sex_label->AutoSize = true;
    this->sex_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->sex_label->Location = System::Drawing::Point(119, 321);
    this->sex_label->Name = L"sex_label";
    this->sex_label->Size = System::Drawing::Size(79, 24);
    this->sex_label->TabIndex = 9;
    this->sex_label->Text = L"Gender:";
    //
    // Emp_dob
    //
    this->Emp_dob->AutoSize = true;
    this->Emp_dob->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_dob->Location = System::Drawing::Point(287, 277);
    this->Emp_dob->Name = L"Emp_dob";
    this->Emp_dob->Size = System::Drawing::Size(88, 24);
    this->Emp_dob->TabIndex = 8;
    this->Emp_dob->Text = L"Hire Date";
    //
    // dateOfBirth_label
    //
    this->dateOfBirth_label->AutoSize = true;
    this->dateOfBirth_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->dateOfBirth_label->Location = System::Drawing::Point(119, 277);
    this->dateOfBirth_label->Name = L"dateOfBirth_label";
    this->dateOfBirth_label->Size = System::Drawing::Size(93, 24);
    this->dateOfBirth_label->TabIndex = 7;
    this->dateOfBirth_label->Text = L"Hire Date:";
    //
    // Emp_lastName
    //
    this->Emp_lastName->AutoSize = true;
    this->Emp_lastName->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_lastName->Location = System::Drawing::Point(287, 227);
    this->Emp_lastName->Name = L"Emp_lastName";
    this->Emp_lastName->Size = System::Drawing::Size(99, 24);
    this->Emp_lastName->TabIndex = 6;
    this->Emp_lastName->Text = L"Last Name";
    //
    // Emp_firstName
    //
    this->Emp_firstName->AutoSize = true;
    this->Emp_firstName->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->Emp_firstName->Location = System::Drawing::Point(287, 178);
    this->Emp_firstName->Name = L"Emp_firstName";
    this->Emp_firstName->Size = System::Drawing::Size(45, 24);
    this->Emp_firstName->TabIndex = 5;
    this->Emp_firstName->Text = L"First";
    //
    // lastName_label
    //
    this->lastName_label->AutoSize = true;
    this->lastName_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->lastName_label->Location = System::Drawing::Point(119, 227);
    this->lastName_label->Name = L"lastName_label";
    this->lastName_label->Size = System::Drawing::Size(104, 24);
    this->lastName_label->TabIndex = 22;
    this->lastName_label->Text = L"Last Name:";
    //
    // firstName_label
    //
    this->firstName_label->AutoSize = true;
    this->firstName_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->firstName_label->Location = System::Drawing::Point(119, 178);
    this->firstName_label->Name = L"firstName_label";
    this->firstName_label->Size = System::Drawing::Size(106, 24);
    this->firstName_label->TabIndex = 23;
    this->firstName_label->Text = L"First Name:";
    //
    // editPersonal_panel
    //
    this->editPersonal_panel->Controls->Add(this->textBox4);
    this->editPersonal_panel->Controls->Add(this->textBox3);
    this->editPersonal_panel->Controls->Add(this->textBox2);
    this->editPersonal_panel->Controls->Add(this->label7);
    this->editPersonal_panel->Controls->Add(this->textBox1);
    this->editPersonal_panel->Controls->Add(this->label6);
    this->editPersonal_panel->Controls->Add(this->label2);
    this->editPersonal_panel->Controls->Add(this->label3);
    this->editPersonal_panel->Controls->Add(this->pictureBox3);
    this->editPersonal_panel->Controls->Add(this->preferedPhoneNumber_label);
    this->editPersonal_panel->Controls->Add(this->preferedEmail_label);
    this->editPersonal_panel->Controls->Add(this->Emp_ID);
    this->editPersonal_panel->Controls->Add(this->id_label);
    this->editPersonal_panel->Controls->Add(this->Emp_department);
    this->editPersonal_panel->Controls->Add(this->department_label);
    this->editPersonal_panel->Controls->Add(this->Emp_sex);
    this->editPersonal_panel->Controls->Add(this->sex_label);
    this->editPersonal_panel->Controls->Add(this->Emp_dob);
    this->editPersonal_panel->Controls->Add(this->dateOfBirth_label);
    this->editPersonal_panel->Controls->Add(this->Emp_lastName);
    this->editPersonal_panel->Controls->Add(this->Emp_firstName);
    this->editPersonal_panel->Controls->Add(this->lastName_label);
    this->editPersonal_panel->Controls->Add(this->firstName_label);
    this->editPersonal_panel->Controls->Add(this->prefEmail_textbox);
    this->editPersonal_panel->Controls->Add(this->phoneNumber_textBox);
    this->editPersonal_panel->Controls->Add(this->persInfoSubmit_button);
    this->editPersonal_panel->Location = System::Drawing::Point(3, 28);
    this->editPersonal_panel->Name = L"editPersonal_panel";
    this->editPersonal_panel->Size = System::Drawing::Size(1112, 660);
    this->editPersonal_panel->TabIndex = 3;
    //
    // textBox4
    //
    this->textBox4->Location = System::Drawing::Point(888, 375);
    this->textBox4->Name = L"textBox4";
    this->textBox4->Size = System::Drawing::Size(95, 20);
    this->textBox4->TabIndex = 37;
    this->textBox4->Text = L"Zip Code";
    //
    // textBox3
    //
    this->textBox3->Location = System::Drawing::Point(920, 340);
    this->textBox3->Name = L"textBox3";
    this->textBox3->Size = System::Drawing::Size(63, 20);
    this->textBox3->TabIndex = 36;
    this->textBox3->Text = L"State";
    //
    // textBox2
    //
    this->textBox2->Location = System::Drawing::Point(805, 306);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(178, 20);
    this->textBox2->TabIndex = 35;
    this->textBox2->Text = L"City";
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label7->Location = System::Drawing::Point(553, 267);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(188, 24);
    this->label7->TabIndex = 33;
    this->label7->Text = L"Current mail address:";
    //
    // textBox1
    //
    this->textBox1->Location = System::Drawing::Point(761, 271);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(222, 20);
    this->textBox1->TabIndex = 34;
    this->textBox1->Text = L"Street Adress";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label6->Location = System::Drawing::Point(336, 40);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(377, 37);
    this->label6->TabIndex = 32;
    this->label6->Text = L"Edit Personal Information";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->label2->Location = System::Drawing::Point(288, 370);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(45, 24);
    this->label2->TabIndex = 31;
    this->label2->Text = L"type";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
    this->label3->Location = System::Drawing::Point(120, 370);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(128, 24);
    this->label3->TabIndex = 30;
    this->label3->Text = L"Payment type:";
    //
    // pictureBox3
    //
    this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox3.Image")));
    this->pictureBox3->Location = System::Drawing::Point(1069, 607);
    this->pictureBox3->Name = L"pictureBox3";
    this->pictureBox3->Size = System::Drawing::Size(46, 45);
    this->pictureBox3->TabIndex = 29;
    this->pictureBox3->TabStop = false;
    //
    // Emp_currBenefit_glance
    //
    this->Emp_currBenefit_glance->AutoSize = true;
    this->Emp_currBenefit_glance->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Emp_currBenefit_glance->Location = System::Drawing::Point(452, 499);
    this->Emp_currBenefit_glance->Name = L"Emp_currBenefit_glance";
    this->Emp_currBenefit_glance->Size = System::Drawing::Size(0, 25);
    this->Emp_currBenefit_glance->TabIndex = 4;
    //
    // viewPaystub_panel
    //
    this->viewPaystub_panel->BackColor = System::Drawing::Color::White;
    this->viewPaystub_panel->Controls->Add(this->pictureBox1);
    this->viewPaystub_panel->Controls->Add(this->payStub_title_label);
    this->viewPaystub_panel->Location = System::Drawing::Point(0, 28);
    this->viewPaystub_panel->Name = L"viewPaystub_panel";
    this->viewPaystub_panel->Size = System::Drawing::Size(1112, 657);
    this->viewPaystub_panel->TabIndex = 12;
    //
    // pictureBox1
    //
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(1070, 607);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(46, 45);
    this->pictureBox1->TabIndex = 7;
    this->pictureBox1->TabStop = false;
    //
    // payStub_title_label
    //
    this->payStub_title_label->AutoSize = true;
    this->payStub_title_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->payStub_title_label->Location = System::Drawing::Point(377, 31);
    this->payStub_title_label->Name = L"payStub_title_label";
    this->payStub_title_label->Size = System::Drawing::Size(318, 37);
    this->payStub_title_label->TabIndex = 0;
    this->payStub_title_label->Text = L"Most Recent Paystub";
    //
    // infoGlance_panel
    //
    this->infoGlance_panel->Controls->Add(this->button1);
    this->infoGlance_panel->Controls->Add(this->label9);
    this->infoGlance_panel->Controls->Add(this->label10);
    this->infoGlance_panel->Controls->Add(this->benefitName_label3);
    this->infoGlance_panel->Controls->Add(this->benefitName_label2);
    this->infoGlance_panel->Controls->Add(this->benefitName_label1);
    this->infoGlance_panel->Controls->Add(this->pictureBox4);
    this->infoGlance_panel->Controls->Add(this->Emp_id_glance);
    this->infoGlance_panel->Controls->Add(this->Emp_firstName_glance);
    this->infoGlance_panel->Controls->Add(this->Emp_lastName_glance);
    this->infoGlance_panel->Controls->Add(this->Emp_dept_glance);
    this->infoGlance_panel->Controls->Add(this->firstName_glance_label);
    this->infoGlance_panel->Controls->Add(this->mainMenuLeft_title);
    this->infoGlance_panel->Controls->Add(this->lastName_glance_label);
    this->infoGlance_panel->Controls->Add(this->id_glance_label);
    this->infoGlance_panel->Controls->Add(this->dept_glance_label);
    this->infoGlance_panel->Controls->Add(this->currBenefit_label);
    this->infoGlance_panel->Location = System::Drawing::Point(0, 28);
    this->infoGlance_panel->Name = L"infoGlance_panel";
    this->infoGlance_panel->Size = System::Drawing::Size(1112, 657);
    this->infoGlance_panel->TabIndex = 13;
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(784, 212);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(145, 51);
    this->button1->TabIndex = 101;
    this->button1->Text = L"View Paystub";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &EmployeeMainMenu::button1_Click_1);
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label9->Location = System::Drawing::Point(361, 356);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(53, 25);
    this->label9->TabIndex = 100;
    this->label9->Text = L"type";
    //
    // label10
    //
    this->label10->AutoSize = true;
    this->label10->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label10->Location = System::Drawing::Point(202, 356);
    this->label10->Name = L"label10";
    this->label10->Size = System::Drawing::Size(156, 25);
    this->label10->TabIndex = 99;
    this->label10->Text = L"Payment Type:";
    //
    // benefitName_label3
    //
    this->benefitName_label3->AutoSize = true;
    this->benefitName_label3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitName_label3->Location = System::Drawing::Point(512, 590);
    this->benefitName_label3->Name = L"benefitName_label3";
    this->benefitName_label3->Size = System::Drawing::Size(24, 25);
    this->benefitName_label3->TabIndex = 98;
    this->benefitName_label3->Text = L"3";
    //
    // benefitName_label2
    //
    this->benefitName_label2->AutoSize = true;
    this->benefitName_label2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitName_label2->Location = System::Drawing::Point(512, 540);
    this->benefitName_label2->Name = L"benefitName_label2";
    this->benefitName_label2->Size = System::Drawing::Size(24, 25);
    this->benefitName_label2->TabIndex = 97;
    this->benefitName_label2->Text = L"2";
    //
    // benefitName_label1
    //
    this->benefitName_label1->AutoSize = true;
    this->benefitName_label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitName_label1->Location = System::Drawing::Point(512, 488);
    this->benefitName_label1->Name = L"benefitName_label1";
    this->benefitName_label1->Size = System::Drawing::Size(24, 25);
    this->benefitName_label1->TabIndex = 96;
    this->benefitName_label1->Text = L"1";
    //
    // pictureBox4
    //
    this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox4.Image")));
    this->pictureBox4->Location = System::Drawing::Point(1070, 607);
    this->pictureBox4->Name = L"pictureBox4";
    this->pictureBox4->Size = System::Drawing::Size(46, 45);
    this->pictureBox4->TabIndex = 95;
    this->pictureBox4->TabStop = false;
    //
    // Emp_id_glance
    //
    this->Emp_id_glance->AutoSize = true;
    this->Emp_id_glance->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Emp_id_glance->Location = System::Drawing::Point(361, 159);
    this->Emp_id_glance->Name = L"Emp_id_glance";
    this->Emp_id_glance->Size = System::Drawing::Size(32, 25);
    this->Emp_id_glance->TabIndex = 7;
    this->Emp_id_glance->Text = L"ID";
    //
    // Emp_firstName_glance
    //
    this->Emp_firstName_glance->AutoSize = true;
    this->Emp_firstName_glance->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Emp_firstName_glance->Location = System::Drawing::Point(361, 228);
    this->Emp_firstName_glance->Name = L"Emp_firstName_glance";
    this->Emp_firstName_glance->Size = System::Drawing::Size(68, 25);
    this->Emp_firstName_glance->TabIndex = 6;
    this->Emp_firstName_glance->Text = L"Name";
    //
    // Emp_lastName_glance
    //
    this->Emp_lastName_glance->AutoSize = true;
    this->Emp_lastName_glance->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Emp_lastName_glance->Location = System::Drawing::Point(361, 296);
    this->Emp_lastName_glance->Name = L"Emp_lastName_glance";
    this->Emp_lastName_glance->Size = System::Drawing::Size(115, 25);
    this->Emp_lastName_glance->TabIndex = 9;
    this->Emp_lastName_glance->Text = L"Last Name";
    //
    // Emp_dept_glance
    //
    this->Emp_dept_glance->AutoSize = true;
    this->Emp_dept_glance->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->Emp_dept_glance->Location = System::Drawing::Point(361, 414);
    this->Emp_dept_glance->Name = L"Emp_dept_glance";
    this->Emp_dept_glance->Size = System::Drawing::Size(123, 25);
    this->Emp_dept_glance->TabIndex = 5;
    this->Emp_dept_glance->Text = L"Department";
    //
    // firstName_glance_label
    //
    this->firstName_glance_label->AutoSize = true;
    this->firstName_glance_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->firstName_glance_label->Location = System::Drawing::Point(202, 228);
    this->firstName_glance_label->Name = L"firstName_glance_label";
    this->firstName_glance_label->Size = System::Drawing::Size(122, 25);
    this->firstName_glance_label->TabIndex = 1;
    this->firstName_glance_label->Text = L"First Name:";
    //
    // mainMenuLeft_title
    //
    this->mainMenuLeft_title->AutoSize = true;
    this->mainMenuLeft_title->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->mainMenuLeft_title->Location = System::Drawing::Point(295, 80);
    this->mainMenuLeft_title->Name = L"mainMenuLeft_title";
    this->mainMenuLeft_title->Size = System::Drawing::Size(437, 37);
    this->mainMenuLeft_title->TabIndex = 0;
    this->mainMenuLeft_title->Text = L"Your Information At A Glance";
    //
    // lastName_glance_label
    //
    this->lastName_glance_label->AutoSize = true;
    this->lastName_glance_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lastName_glance_label->Location = System::Drawing::Point(202, 296);
    this->lastName_glance_label->Name = L"lastName_glance_label";
    this->lastName_glance_label->Size = System::Drawing::Size(121, 25);
    this->lastName_glance_label->TabIndex = 8;
    this->lastName_glance_label->Text = L"Last Name:";
    //
    // id_glance_label
    //
    this->id_glance_label->AutoSize = true;
    this->id_glance_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->id_glance_label->Location = System::Drawing::Point(202, 159);
    this->id_glance_label->Name = L"id_glance_label";
    this->id_glance_label->Size = System::Drawing::Size(38, 25);
    this->id_glance_label->TabIndex = 1;
    this->id_glance_label->Text = L"ID:";
    //
    // dept_glance_label
    //
    this->dept_glance_label->AutoSize = true;
    this->dept_glance_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->dept_glance_label->Location = System::Drawing::Point(202, 414);
    this->dept_glance_label->Name = L"dept_glance_label";
    this->dept_glance_label->Size = System::Drawing::Size(95, 25);
    this->dept_glance_label->TabIndex = 1;
    this->dept_glance_label->Text = L"Position:";
    //
    // currBenefit_label
    //
    this->currBenefit_label->AutoSize = true;
    this->currBenefit_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->currBenefit_label->Location = System::Drawing::Point(202, 488);
    this->currBenefit_label->Name = L"currBenefit_label";
    this->currBenefit_label->Size = System::Drawing::Size(267, 25);
    this->currBenefit_label->TabIndex = 1;
    this->currBenefit_label->Text = L"Current Benefit(s) Chosen:";
    //
    // viewBenefits_panel
    //
    this->viewBenefits_panel->Controls->Add(this->panel1);
    this->viewBenefits_panel->Controls->Add(this->pictureBox5);
    this->viewBenefits_panel->Controls->Add(this->label5);
    this->viewBenefits_panel->Controls->Add(this->visionCost_label);
    this->viewBenefits_panel->Controls->Add(this->empVisionPackage_label);
    this->viewBenefits_panel->Controls->Add(this->label8);
    this->viewBenefits_panel->Controls->Add(this->label1);
    this->viewBenefits_panel->Controls->Add(this->dentalCost_label);
    this->viewBenefits_panel->Controls->Add(this->empDentalPackage_label);
    this->viewBenefits_panel->Controls->Add(this->label4);
    this->viewBenefits_panel->Controls->Add(this->healthTitle_label);
    this->viewBenefits_panel->Controls->Add(this->benefitCost_label);
    this->viewBenefits_panel->Controls->Add(this->healthCost_label);
    this->viewBenefits_panel->Controls->Add(this->empHealthPackage_label);
    this->viewBenefits_panel->Controls->Add(this->benefitPackage_label);
    this->viewBenefits_panel->Controls->Add(this->benefitName_label);
    this->viewBenefits_panel->Controls->Add(this->visionTitle_label);
    this->viewBenefits_panel->Controls->Add(this->dentalTitle_label);
    this->viewBenefits_panel->Controls->Add(this->pictureBox2);
    this->viewBenefits_panel->Controls->Add(this->label17);
    this->viewBenefits_panel->Location = System::Drawing::Point(0, 28);
    this->viewBenefits_panel->Name = L"viewBenefits_panel";
    this->viewBenefits_panel->Size = System::Drawing::Size(1115, 657);
    this->viewBenefits_panel->TabIndex = 103;
    this->viewBenefits_panel->Paint +=
        gcnew System::Windows::Forms::PaintEventHandler(
            this, &EmployeeMainMenu::viewBenefits_panel_Paint);
    //
    // panel1
    //
    this->panel1->Controls->Add(this->pictureBox8);
    this->panel1->Controls->Add(this->pictureBox9);
    this->panel1->Location = System::Drawing::Point(0, 0);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(1115, 652);
    this->panel1->TabIndex = 105;
    //
    // pictureBox8
    //
    this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox8.Image")));
    this->pictureBox8->Location = System::Drawing::Point(1072, 607);
    this->pictureBox8->Name = L"pictureBox8";
    this->pictureBox8->Size = System::Drawing::Size(46, 45);
    this->pictureBox8->TabIndex = 96;
    this->pictureBox8->TabStop = false;
    //
    // pictureBox9
    //
    this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox9.Image")));
    this->pictureBox9->Location = System::Drawing::Point(1073, 718);
    this->pictureBox9->Name = L"pictureBox9";
    this->pictureBox9->Size = System::Drawing::Size(46, 45);
    this->pictureBox9->TabIndex = 7;
    this->pictureBox9->TabStop = false;
    //
    // pictureBox5
    //
    this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox5.Image")));
    this->pictureBox5->Location = System::Drawing::Point(1072, 607);
    this->pictureBox5->Name = L"pictureBox5";
    this->pictureBox5->Size = System::Drawing::Size(46, 45);
    this->pictureBox5->TabIndex = 96;
    this->pictureBox5->TabStop = false;
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label5->Location = System::Drawing::Point(803, 398);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(62, 25);
    this->label5->TabIndex = 22;
    this->label5->Text = L"Cost:";
    //
    // visionCost_label
    //
    this->visionCost_label->AutoSize = true;
    this->visionCost_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
    this->visionCost_label->Location = System::Drawing::Point(871, 404);
    this->visionCost_label->Name = L"visionCost_label";
    this->visionCost_label->Size = System::Drawing::Size(0, 20);
    this->visionCost_label->TabIndex = 23;
    //
    // empVisionPackage_label
    //
    this->empVisionPackage_label->AutoSize = true;
    this->empVisionPackage_label->Font =
        (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
    this->empVisionPackage_label->Location = System::Drawing::Point(905, 324);
    this->empVisionPackage_label->Name = L"empVisionPackage_label";
    this->empVisionPackage_label->Size = System::Drawing::Size(0, 20);
    this->empVisionPackage_label->TabIndex = 24;
    //
    // label8
    //
    this->label8->AutoSize = true;
    this->label8->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label8->Location = System::Drawing::Point(803, 319);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(102, 25);
    this->label8->TabIndex = 25;
    this->label8->Text = L"Package:";
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(66, 398);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(62, 25);
    this->label1->TabIndex = 18;
    this->label1->Text = L"Cost:";
    //
    // dentalCost_label
    //
    this->dentalCost_label->AutoSize = true;
    this->dentalCost_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->dentalCost_label->Location = System::Drawing::Point(128, 404);
    this->dentalCost_label->Name = L"dentalCost_label";
    this->dentalCost_label->Size = System::Drawing::Size(0, 20);
    this->dentalCost_label->TabIndex = 19;
    //
    // empDentalPackage_label
    //
    this->empDentalPackage_label->AutoSize = true;
    this->empDentalPackage_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->empDentalPackage_label->Location = System::Drawing::Point(174, 324);
    this->empDentalPackage_label->Name = L"empDentalPackage_label";
    this->empDentalPackage_label->Size = System::Drawing::Size(0, 20);
    this->empDentalPackage_label->TabIndex = 20;
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label4->Location = System::Drawing::Point(66, 319);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(102, 25);
    this->label4->TabIndex = 21;
    this->label4->Text = L"Package:";
    //
    // healthTitle_label
    //
    this->healthTitle_label->AutoSize = true;
    this->healthTitle_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->healthTitle_label->Location = System::Drawing::Point(422, 202);
    this->healthTitle_label->Name = L"healthTitle_label";
    this->healthTitle_label->Size = System::Drawing::Size(193, 29);
    this->healthTitle_label->TabIndex = 17;
    this->healthTitle_label->Text = L"Health Coverage";
    //
    // benefitCost_label
    //
    this->benefitCost_label->AutoSize = true;
    this->benefitCost_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitCost_label->Location = System::Drawing::Point(422, 398);
    this->benefitCost_label->Name = L"benefitCost_label";
    this->benefitCost_label->Size = System::Drawing::Size(62, 25);
    this->benefitCost_label->TabIndex = 11;
    this->benefitCost_label->Text = L"Cost:";
    //
    // healthCost_label
    //
    this->healthCost_label->AutoSize = true;
    this->healthCost_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->healthCost_label->Location = System::Drawing::Point(490, 400);
    this->healthCost_label->Name = L"healthCost_label";
    this->healthCost_label->Size = System::Drawing::Size(0, 20);
    this->healthCost_label->TabIndex = 12;
    //
    // empHealthPackage_label
    //
    this->empHealthPackage_label->AutoSize = true;
    this->empHealthPackage_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->empHealthPackage_label->Location = System::Drawing::Point(530, 324);
    this->empHealthPackage_label->Name = L"empHealthPackage_label";
    this->empHealthPackage_label->Size = System::Drawing::Size(0, 20);
    this->empHealthPackage_label->TabIndex = 13;
    //
    // benefitPackage_label
    //
    this->benefitPackage_label->AutoSize = true;
    this->benefitPackage_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitPackage_label->Location = System::Drawing::Point(422, 319);
    this->benefitPackage_label->Name = L"benefitPackage_label";
    this->benefitPackage_label->Size = System::Drawing::Size(102, 25);
    this->benefitPackage_label->TabIndex = 14;
    this->benefitPackage_label->Text = L"Package:";
    //
    // benefitName_label
    //
    this->benefitName_label->AutoSize = true;
    this->benefitName_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->benefitName_label->Location = System::Drawing::Point(549, 55);
    this->benefitName_label->Name = L"benefitName_label";
    this->benefitName_label->Size = System::Drawing::Size(291, 25);
    this->benefitName_label->TabIndex = 16;
    this->benefitName_label->Text = L"Anthem BlueCross/HealthNet";
    //
    // visionTitle_label
    //
    this->visionTitle_label->AutoSize = true;
    this->visionTitle_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->visionTitle_label->Location = System::Drawing::Point(803, 202);
    this->visionTitle_label->Name = L"visionTitle_label";
    this->visionTitle_label->Size = System::Drawing::Size(190, 29);
    this->visionTitle_label->TabIndex = 10;
    this->visionTitle_label->Text = L"Vision Coverage";
    //
    // dentalTitle_label
    //
    this->dentalTitle_label->AutoSize = true;
    this->dentalTitle_label->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->dentalTitle_label->Location = System::Drawing::Point(66, 202);
    this->dentalTitle_label->Name = L"dentalTitle_label";
    this->dentalTitle_label->Size = System::Drawing::Size(193, 29);
    this->dentalTitle_label->TabIndex = 9;
    this->dentalTitle_label->Text = L"Dental Coverage";
    //
    // pictureBox2
    //
    this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"pictureBox2.Image")));
    this->pictureBox2->Location = System::Drawing::Point(1073, 718);
    this->pictureBox2->Name = L"pictureBox2";
    this->pictureBox2->Size = System::Drawing::Size(46, 45);
    this->pictureBox2->TabIndex = 7;
    this->pictureBox2->TabStop = false;
    //
    // label17
    //
    this->label17->AutoSize = true;
    this->label17->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label17->Location = System::Drawing::Point(230, 48);
    this->label17->Name = L"label17";
    this->label17->Size = System::Drawing::Size(313, 33);
    this->label17->TabIndex = 0;
    this->label17->Text = L"Benefit(s) Provided By:";
    //
    // columnHeader1
    //
    this->columnHeader1->DisplayIndex = 0;
    this->columnHeader1->Text = L"ID";
    //
    // columnHeader2
    //
    this->columnHeader2->DisplayIndex = 1;
    this->columnHeader2->Text = L"First Name";
    this->columnHeader2->Width = 191;
    //
    // columnHeader3
    //
    this->columnHeader3->DisplayIndex = 2;
    this->columnHeader3->Text = L"Last Name";
    this->columnHeader3->Width = 138;
    //
    // columnHeader5
    //
    this->columnHeader5->DisplayIndex = 3;
    this->columnHeader5->Text = L"Entered Hours";
    this->columnHeader5->Width = 82;
    //
    // columnHeader6
    //
    this->columnHeader6->DisplayIndex = 4;
    this->columnHeader6->Text = L"Overtime Hours";
    this->columnHeader6->Width = 87;
    //
    // editPersonalInfo_button
    //
    this->editPersonalInfo_button->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->editPersonalInfo_button->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->editPersonalInfo_button->Name = L"editPersonalInfo_button";
    this->editPersonalInfo_button->Size = System::Drawing::Size(145, 22);
    this->editPersonalInfo_button->Text = L"Edit Personal Information";
    this->editPersonalInfo_button->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::editPersonalInfo_button_Click);
    //
    // toolStripSeparator1
    //
    this->toolStripSeparator1->Name = L"toolStripSeparator1";
    this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
    //
    // InfoAtGlance_button
    //
    this->InfoAtGlance_button->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->InfoAtGlance_button->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->InfoAtGlance_button->Name = L"InfoAtGlance_button";
    this->InfoAtGlance_button->Size = System::Drawing::Size(139, 22);
    this->InfoAtGlance_button->Text = L"Information At A Glance";
    this->InfoAtGlance_button->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::InfoAtGlance_button_Click);
    //
    // toolStripSeparator4
    //
    this->toolStripSeparator4->Name = L"toolStripSeparator4";
    this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
    //
    // viewBenefits_button
    //
    this->viewBenefits_button->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->viewBenefits_button->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->viewBenefits_button->Name = L"viewBenefits_button";
    this->viewBenefits_button->Size = System::Drawing::Size(81, 22);
    this->viewBenefits_button->Text = L"View Benefits";
    this->viewBenefits_button->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::viewBenefits_button_Click);
    //
    // toolStripSeparator2
    //
    this->toolStripSeparator2->Name = L"toolStripSeparator2";
    this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
    //
    // toolStripButton1
    //
    this->toolStripButton1->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image ^>(
        resources->GetObject(L"toolStripButton1.Image")));
    this->toolStripButton1->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->toolStripButton1->Name = L"toolStripButton1";
    this->toolStripButton1->Size = System::Drawing::Size(96, 22);
    this->toolStripButton1->Text = L"View Employees";
    this->toolStripButton1->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::toolStripButton1_Click);
    //
    // toolStripSeparator5
    //
    this->toolStripSeparator5->Name = L"toolStripSeparator5";
    this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
    //
    // logout_button
    //
    this->logout_button->DisplayStyle =
        System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->logout_button->ImageTransparentColor =
        System::Drawing::Color::Magenta;
    this->logout_button->Name = L"logout_button";
    this->logout_button->Size = System::Drawing::Size(49, 22);
    this->logout_button->Text = L"Logout";
    this->logout_button->Click += gcnew System::EventHandler(
        this, &EmployeeMainMenu::logout_button_Click);
    //
    // toolStrip1
    //
    this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
    this->toolStrip1->Items->AddRange(
        gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(9){
            this->editPersonalInfo_button, this->toolStripSeparator1,
            this->InfoAtGlance_button, this->toolStripSeparator4,
            this->viewBenefits_button, this->toolStripSeparator2,
            this->toolStripButton1, this->toolStripSeparator5,
            this->logout_button});
    this->toolStrip1->Location = System::Drawing::Point(0, 0);
    this->toolStrip1->Name = L"toolStrip1";
    this->toolStrip1->Padding = System::Windows::Forms::Padding(0, 0, 2, 0);
    this->toolStrip1->Size = System::Drawing::Size(1115, 25);
    this->toolStrip1->TabIndex = 0;
    this->toolStrip1->Text = L"toolStrip1";
    //
    // panel2
    //
    this->panel2->Location = System::Drawing::Point(0, 28);
    this->panel2->Name = L"panel2";
    this->panel2->Size = System::Drawing::Size(1116, 654);
    this->panel2->TabIndex = 104;
    //
    // panel3
    //
    this->panel3->Controls->Add(this->label30);
    this->panel3->Controls->Add(this->label31);
    this->panel3->Controls->Add(this->lbl10);
    this->panel3->Controls->Add(this->lbl9);
    this->panel3->Controls->Add(this->lbl8);
    this->panel3->Controls->Add(this->label11);
    this->panel3->Controls->Add(this->label12);
    this->panel3->Controls->Add(this->label13);
    this->panel3->Controls->Add(this->lbl7);
    this->panel3->Controls->Add(this->button3);
    this->panel3->Controls->Add(this->textBox5);
    this->panel3->Controls->Add(this->button4);
    this->panel3->Location = System::Drawing::Point(1, 28);
    this->panel3->Name = L"panel3";
    this->panel3->Size = System::Drawing::Size(1115, 651);
    this->panel3->TabIndex = 105;
    //
    // label30
    //
    this->label30->AutoSize = true;
    this->label30->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label30->Location = System::Drawing::Point(478, 286);
    this->label30->Name = L"label30";
    this->label30->Size = System::Drawing::Size(43, 20);
    this->label30->TabIndex = 136;
    this->label30->Text = L"Type";
    //
    // label31
    //
    this->label31->AutoSize = true;
    this->label31->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label31->Location = System::Drawing::Point(319, 286);
    this->label31->Name = L"label31";
    this->label31->Size = System::Drawing::Size(47, 20);
    this->label31->TabIndex = 135;
    this->label31->Text = L"Type:";
    //
    // lbl10
    //
    this->lbl10->AutoSize = true;
    this->lbl10->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl10->Location = System::Drawing::Point(482, 367);
    this->lbl10->Name = L"lbl10";
    this->lbl10->Size = System::Drawing::Size(55, 20);
    this->lbl10->TabIndex = 134;
    this->lbl10->Text = L"Phone";
    //
    // lbl9
    //
    this->lbl9->AutoSize = true;
    this->lbl9->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl9->Location = System::Drawing::Point(482, 323);
    this->lbl9->Name = L"lbl9";
    this->lbl9->Size = System::Drawing::Size(46, 20);
    this->lbl9->TabIndex = 133;
    this->lbl9->Text = L"email";
    //
    // lbl8
    //
    this->lbl8->AutoSize = true;
    this->lbl8->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl8->Location = System::Drawing::Point(478, 246);
    this->lbl8->Name = L"lbl8";
    this->lbl8->Size = System::Drawing::Size(94, 20);
    this->lbl8->TabIndex = 132;
    this->lbl8->Text = L"Department";
    //
    // label11
    //
    this->label11->AutoSize = true;
    this->label11->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label11->Location = System::Drawing::Point(323, 367);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(59, 20);
    this->label11->TabIndex = 131;
    this->label11->Text = L"Phone:";
    //
    // label12
    //
    this->label12->AutoSize = true;
    this->label12->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label12->Location = System::Drawing::Point(323, 323);
    this->label12->Name = L"label12";
    this->label12->Size = System::Drawing::Size(50, 20);
    this->label12->TabIndex = 130;
    this->label12->Text = L"email:";
    //
    // label13
    //
    this->label13->AutoSize = true;
    this->label13->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label13->Location = System::Drawing::Point(319, 246);
    this->label13->Name = L"label13";
    this->label13->Size = System::Drawing::Size(69, 20);
    this->label13->TabIndex = 129;
    this->label13->Text = L"Position:";
    //
    // lbl7
    //
    this->lbl7->AutoSize = true;
    this->lbl7->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->lbl7->Location = System::Drawing::Point(276, 203);
    this->lbl7->Name = L"lbl7";
    this->lbl7->Size = System::Drawing::Size(152, 24);
    this->lbl7->TabIndex = 128;
    this->lbl7->Text = L"Employee Name";
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(758, 133);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(75, 23);
    this->button3->TabIndex = 127;
    this->button3->Text = L"Reset";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &EmployeeMainMenu::button3_Click);
    //
    // textBox5
    //
    this->textBox5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->textBox5->Location = System::Drawing::Point(443, 126);
    this->textBox5->Name = L"textBox5";
    this->textBox5->Size = System::Drawing::Size(250, 26);
    this->textBox5->TabIndex = 122;
    //
    // button4
    //
    this->button4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->button4->Location = System::Drawing::Point(201, 123);
    this->button4->Name = L"button4";
    this->button4->Size = System::Drawing::Size(187, 33);
    this->button4->TabIndex = 123;
    this->button4->Text = L"Search Employee";
    this->button4->UseVisualStyleBackColor = true;
    this->button4->Click +=
        gcnew System::EventHandler(this, &EmployeeMainMenu::button4_Click);
    //
    // EmployeeMainMenu
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::White;
    this->ClientSize = System::Drawing::Size(1115, 679);
    this->Controls->Add(this->panel3);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->viewBenefits_panel);
    this->Controls->Add(this->infoGlance_panel);
    this->Controls->Add(this->viewPaystub_panel);
    this->Controls->Add(this->toolStrip1);
    this->Controls->Add(this->Emp_currBenefit_glance);
    this->Controls->Add(this->editPersonal_panel);
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->ImeMode = System::Windows::Forms::ImeMode::On;
    this->Name = L"EmployeeMainMenu";
    this->Load += gcnew System::EventHandler(
        this, &EmployeeMainMenu::EmployeeMainMenu_Load);
    this->editPersonal_panel->ResumeLayout(false);
    this->editPersonal_panel->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox3))
        ->EndInit();
    this->viewPaystub_panel->ResumeLayout(false);
    this->viewPaystub_panel->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox1))
        ->EndInit();
    this->infoGlance_panel->ResumeLayout(false);
    this->infoGlance_panel->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox4))
        ->EndInit();
    this->viewBenefits_panel->ResumeLayout(false);
    this->viewBenefits_panel->PerformLayout();
    this->panel1->ResumeLayout(false);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox8))
        ->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox9))
        ->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox5))
        ->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(
         this->pictureBox2))
        ->EndInit();
    this->toolStrip1->ResumeLayout(false);
    this->toolStrip1->PerformLayout();
    this->panel3->ResumeLayout(false);
    this->panel3->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();
  }
#pragma endregion

private:
  System::Void viewBenefits_button_Click(System::Object ^ sender,
                                         System::EventArgs ^ e) {
    // this->infoGlance_panel->Hide();
    //	this->editPersonal_panel->Hide();
    //		this->viewPaystub_panel->Hide();
    // this->viewBenefits_panel->Hide();
    this->infoGlance_panel->Hide();
    this->viewBenefits_panel->Show();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Hide();
    this->panel3->Hide();
    this->editPersonal_panel->Hide();
  }

private:
  System::Void viewPaystub_botton_Click(System::Object ^ sender,
                                        System::EventArgs ^ e) {

    /*
    this->infoGlance_panel->Hide();
    this->viewBenefits_panel->Hide();
    this->editPersonal_panel->Hide();
    this->viewPaystub_panel->Show();
    */
  }

private:
  System::Void viewTimesheet_button_Click(System::Object ^ sender,
                                          System::EventArgs ^ e) {
    this->infoGlance_panel->Hide();
    this->viewBenefits_panel->Hide();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Show();
    this->panel3->Hide();
    this->editPersonal_panel->Hide();
  }

private:
  System::Void logout_button_Click(System::Object ^ sender,
                                   System::EventArgs ^ e) {

    this->Hide();

    orignalMenu->Show();
  }

private:
  System::Void editPersonalInfo_button_Click(System::Object ^ sender,
                                             System::EventArgs ^ e) {
    this->infoGlance_panel->Hide();
    this->viewBenefits_panel->Hide();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Hide();
    this->panel3->Hide();
    this->editPersonal_panel->Show();
  }

private:
  System::Void InfoAtGlance_button_Click(System::Object ^ sender,
                                         System::EventArgs ^ e) {
    this->viewBenefits_panel->Hide();
    this->editPersonal_panel->Hide();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Hide();
    this->panel3->Hide();
    this->infoGlance_panel->Show();
  }

private:
  System::Void persInfoSubmit_button_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {}

private:
  System::Void persInfoSubmit_button_Click_1(System::Object ^ sender,
                                             System::EventArgs ^ e) {
    // update database with changes

    Regex ^ R10 = gcnew Regex("\\d{3}-\\d{3}-\\d{4}");
    if (!(R10->IsMatch(phoneNumber_textBox->Text)))
    //	if (textBox4->Text == "" || textBox4->Text->Contains(".com"))
    {
      MessageBox::Show("Enter valid Phone number: 111-111-1111 ");
      return;
    }

    Regex ^ R11 = gcnew Regex("^([\\w\\.\\-]+)@([\\w\\-]+)((\\.(\\w){2,3})+)$");
    if (!(R11->IsMatch(prefEmail_textbox->Text))) {
      MessageBox::Show("Enter valid email: name@email.com ");
      return;
    }

    Regex ^ R6 =
        gcnew Regex("^(\\b\\D+\\b)?\\s*(\\b.*?\\d.*?\\b)\\s*(\\b\\D+\\b)?$");
    if (!(R6->IsMatch(textBox1->Text))) {

      MessageBox::Show("Enter valid Street Number and name");
      return;
    }

    Regex ^ R7 = gcnew Regex("^[a-zA-Z\\s-]+$");
    if (!(R7->IsMatch(textBox2->Text))) {
      MessageBox::Show("Enter valid City");
      return;
    }

    Regex ^ R8 = gcnew Regex(
        "^(?:(A[KLRZ]|C[AOT]|D[CE]|FL|GA|HI|I[ADLN]|K[SY]|LA|M[ADEINOST]|N["
        "CDEHJMVY]|O[HKR]|P[AR]|RI|S[CD]|T[NX]|UT|V[AIT]|W[AIVY]))$");
    if (!(R8->IsMatch(textBox3->Text))) {
      MessageBox::Show("Enter a 2 letter US State");
      return;
    }

    Regex ^ R9 = gcnew Regex("^[0-9]{5}(?:-[0-9]{4})?$");
    if (!(R9->IsMatch(textBox4->Text))) {
      MessageBox::Show("Enter valid zipcode ");
      return;
    }

    OleDbConnection ^ conn =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn->Open();
    OleDbCommand ^ cmd = conn->CreateCommand();
    cmd->CommandType = CommandType::Text;
    cmd->CommandText =
        "UPDATE EmployeeInfo SET [Email] = @Email, [PhoneNumber] = "
        "@PhoneNumber , [Address1] = @Address , [City] = @City, [State] = "
        "@State , [Zipcode] = @Zipcode WHERE ID = @ID ";
    cmd->Parameters->AddWithValue("@Email", prefEmail_textbox->Text);
    cmd->Parameters->AddWithValue("@PhoneNumber", phoneNumber_textBox->Text);
    cmd->Parameters->AddWithValue("@Address", textBox1->Text);
    cmd->Parameters->AddWithValue("@City", textBox2->Text);
    cmd->Parameters->AddWithValue("@State", textBox3->Text);
    cmd->Parameters->AddWithValue("@Zipcode", textBox4->Text);
    cmd->Parameters->AddWithValue("@ID", Int32::Parse(ID));

    cmd->ExecuteNonQuery();
    conn->Close();
    MessageBox::Show("Update Succeed");
  }

private:
  System::Void viewBenefits_panel_Paint(System::Object ^ sender,
                                        System::Windows::Forms::PaintEventArgs ^
                                            e) {}

private:
  System::Void label13_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void LogOut2_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {}

private:
  System::Void buttonNo_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void buttonYes_Click(System::Object ^ sender, System::EventArgs ^ e) {
  }

private:
  System::Void linkResign_LinkClicked(
      System::Object ^ sender,
      System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {}

private:
  System::Void label11_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void label10_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void buttonReset_Click(System::Object ^ sender,
                                 System::EventArgs ^ e) {}

private:
  System::Void textBox1_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {}

private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void toolStripButton1_Click(System::Object ^ sender,
                                      System::EventArgs ^ e) {

    lbl7->Hide();
    lbl8->Hide();
    lbl9->Hide();
    lbl10->Hide();
    label30->Hide();

    label31->Hide();
    label13->Hide();
    label12->Hide();
    label11->Hide();

    this->infoGlance_panel->Hide();
    this->viewBenefits_panel->Hide();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Hide();
    this->panel3->Show();
    this->editPersonal_panel->Hide();
  }

private:
  System::Void toolStripSeparator6_Click(System::Object ^ sender,
                                         System::EventArgs ^ e) {}

private:
  System::Void buttonSearch_Click(System::Object ^ sender,
                                  System::EventArgs ^ e) {}

private:
  System::Void tab1Page2_Click(System::Object ^ sender, System::EventArgs ^ e) {

  }

private:
  System::Void EmployeeMainMenu_Load(System::Object ^ sender,
                                     System::EventArgs ^ e) {
    this->infoGlance_panel->Show();
    this->viewBenefits_panel->Hide();
    this->viewPaystub_panel->Hide();
    this->panel1->Hide();
    this->panel2->Hide();
    this->panel3->Hide();
    this->editPersonal_panel->Hide();
  }

private:
  System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
    OleDbConnection ^ conn2 =
        gcnew OleDbConnection(ConnectionPath::connectionString);
    conn2->Open();
    OleDbCommand ^ cmd2 = conn2->CreateCommand();
    cmd2->CommandType = CommandType::Text;
    cmd2->CommandText =
        "select [ID],[Firstname],[Lastname], [Position], [PayType], [Email], "
        "[PhoneNumber] from EmployeeInfo where  ([ID] = @ID) and ([Position] = "
        "'Employee' or [Position] = 'employee' or [Position] = 'EMPLOYEE')  ";

    // error checking
    if (textBox5->Text == "") {
      MessageBox::Show("Enter An Employee Id.");
      return;
    }
    if (!checkID(textBox5->Text)) {
      MessageBox::Show("This ID does not exist within the Database");
      return;
    }

    cmd2->Parameters->AddWithValue("@ID", Int32::Parse(textBox5->Text));
    OleDbDataReader ^ myReader = cmd2->ExecuteReader();

    if (myReader->HasRows) {

      while (myReader->Read()) {

        word1 = myReader["ID"]->ToString();
        NameE = myReader["Firstname"]->ToString();
        LastNameE = myReader["Lastname"]->ToString();
        HireE = myReader["PayType"]->ToString();
        emailE = myReader["Email"]->ToString();
        phoneE = myReader["PhoneNumber"]->ToString();
        DepartmentE = myReader["Position"]->ToString();
      }

      label30->Text = HireE;

      lbl8->Text = DepartmentE;
      lbl7->Text = LastNameE + "," + NameE;
      lbl9->Text = emailE;
      lbl10->Text = phoneE;

      lbl7->Show();
      lbl8->Show();
      lbl9->Show();
      lbl10->Show();
      label30->Show();

      label31->Show();
      label13->Show();
      label12->Show();
      label11->Show();
    }
  }

private:
  System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
    lbl7->Hide();
    lbl8->Hide();
    lbl9->Hide();
    lbl10->Hide();
    label30->Hide();

    label31->Hide();
    label13->Hide();
    label12->Hide();
    label11->Hide();
  }

private:
  System::Void button1_Click_1(System::Object ^ sender, System::EventArgs ^ e) {

    ViewPaystub ^ viewPay = gcnew ViewPaystub(ID);
    viewPay->otherPage = this;
    this->Hide();
    viewPay->ShowDialog();
  }
};
} // namespace Payrolls