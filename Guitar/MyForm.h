#pragma once
#include <string.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <map>

int cond[8], str, ncount, key, lb[25];
int scale[3][9];

namespace Guitar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::ColorDialog^  colorDialog2;
	private: System::Windows::Forms::Button^  button5;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(0, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1474, 631);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(1219, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(261, 646);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Major", L"Major Bebop", L"Major Pentatonic",
					L"Minor Harmonic", L"Minor Hungarian", L"Minor Melodic", L"Minor Natural (Aeolian)", L"Minor Neopolitan", L"Minor Pentatonic",
					L"Arabic", L"Blues", L"Diminished", L"Dominant Bebop", L"Dorian", L"Enigmatic", L"Japanise Insen", L"Locrian", L"Lydian", L"Mixolydian",
					L"Neopolitan", L"Phrygian"
			});
			this->comboBox1->Location = System::Drawing::Point(1279, 60);
			this->comboBox1->MaxDropDownItems = 22;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(165, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->TabStop = false;
			this->comboBox1->Text = L"Major";
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::comboBox1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Location = System::Drawing::Point(1264, 115);
			this->textBox1->MaxLength = 18;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"EADGBE";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(0, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1218, 208);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox3_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Location = System::Drawing::Point(1249, 60);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(23, 21);
			this->textBox2->TabIndex = 5;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"E";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(1279, 588);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 40);
			this->button1->TabIndex = 6;
			this->button1->TabStop = false;
			this->button1->Text = L"Render";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1488, 31);
			this->panel1->TabIndex = 7;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(1419, -4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 34);
			this->button3->TabIndex = 1;
			this->button3->Text = L"_";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(1453, -4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 34);
			this->button2->TabIndex = 0;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1426, 60);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(18, 21);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox5->Location = System::Drawing::Point(1279, 60);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(165, 1);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox6->Location = System::Drawing::Point(1279, 80);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(165, 1);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox7->Location = System::Drawing::Point(1279, 61);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1, 19);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// colorDialog1
			// 
			this->colorDialog1->AnyColor = true;
			this->colorDialog1->Color = System::Drawing::Color::Gainsboro;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Location = System::Drawing::Point(1281, 517);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 41);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Change color";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(1278, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Mode:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(1235, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Tonic:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(1278, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Tuning:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(14, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(60, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 25);
			this->label5->TabIndex = 17;
			this->label5->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(109, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(158, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(206, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Location = System::Drawing::Point(255, 240);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 25);
			this->label9->TabIndex = 21;
			this->label9->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(303, 240);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 25);
			this->label10->TabIndex = 22;
			this->label10->Text = L"6";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(350, 240);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 25);
			this->label11->TabIndex = 23;
			this->label11->Text = L"7";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(399, 240);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 25);
			this->label12->TabIndex = 24;
			this->label12->Text = L"8";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Location = System::Drawing::Point(447, 240);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"9";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label14->Location = System::Drawing::Point(487, 240);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(36, 25);
			this->label14->TabIndex = 26;
			this->label14->Text = L"10";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label15->Location = System::Drawing::Point(535, 240);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 25);
			this->label15->TabIndex = 27;
			this->label15->Text = L"11";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label16->Location = System::Drawing::Point(583, 240);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 25);
			this->label16->TabIndex = 28;
			this->label16->Text = L"12";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Location = System::Drawing::Point(631, 240);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 25);
			this->label17->TabIndex = 29;
			this->label17->Text = L"13";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label18->Location = System::Drawing::Point(679, 240);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 25);
			this->label18->TabIndex = 30;
			this->label18->Text = L"14";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label19->Location = System::Drawing::Point(727, 240);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 25);
			this->label19->TabIndex = 31;
			this->label19->Text = L"15";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label20->Location = System::Drawing::Point(775, 240);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 25);
			this->label20->TabIndex = 32;
			this->label20->Text = L"16";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label21->Location = System::Drawing::Point(824, 240);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 25);
			this->label21->TabIndex = 33;
			this->label21->Text = L"17";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label22->Location = System::Drawing::Point(872, 240);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(36, 25);
			this->label22->TabIndex = 34;
			this->label22->Text = L"18";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label23->Location = System::Drawing::Point(920, 240);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(36, 25);
			this->label23->TabIndex = 35;
			this->label23->Text = L"19";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label24->Location = System::Drawing::Point(968, 240);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(36, 25);
			this->label24->TabIndex = 36;
			this->label24->Text = L"20";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label25->Location = System::Drawing::Point(1016, 240);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(36, 25);
			this->label25->TabIndex = 37;
			this->label25->Text = L"21";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label26->Location = System::Drawing::Point(1064, 240);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(36, 25);
			this->label26->TabIndex = 38;
			this->label26->Text = L"22";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label27->Location = System::Drawing::Point(1112, 240);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(36, 25);
			this->label27->TabIndex = 39;
			this->label27->Text = L"23";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label28->Location = System::Drawing::Point(1164, 240);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(36, 25);
			this->label28->TabIndex = 40;
			this->label28->Text = L"24";
			// 
			// colorDialog2
			// 
			this->colorDialog2->AnyColor = true;
			this->colorDialog2->Color = System::Drawing::Color::Aqua;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Location = System::Drawing::Point(1282, 445);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 41);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Change tonic color";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1472, 628);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
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
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(1488, 666);
			this->MinimumSize = System::Drawing::Size(1488, 666);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: int x, y;
	bool bclick = false;

	void render(int a[3][9], int c[8], int n, int s, int key, System::Windows::Forms::PaintEventArgs^  e)
	{
		SolidBrush^ MyBrush = gcnew SolidBrush(colorDialog1->Color);
		SolidBrush^ MyBrush1 = gcnew SolidBrush(colorDialog2->Color);
		for (int j = 0; j < s; j++)
		{
			for (int i = 0; i < 25; i++)
			{
				for (int k = 0; k < n; k++)
				{
					if (c[k] == a[2][j])
					{
						if (a[2][j] == key)
						{
							e->Graphics->FillEllipse(MyBrush1, a[0][j], a[1][j], 18, 18);
							k = n;
						}
						else
						{
							e->Graphics->FillEllipse(MyBrush, a[0][j], a[1][j], 18, 18);
							k = n;
						}
					}
				}
				a[2][j]++;
				a[0][j] += 49;
				if (a[2][j] > 12)
					a[2][j] -= 12;
				for (int k = 0; k < n; k++)
				{
					if (c[k] == a[2][j])
					{
						if (a[2][j] == key)
						{
							e->Graphics->FillEllipse(MyBrush1, a[0][j], a[1][j], 18, 18);
							k = n;
						}
						else
						{
							e->Graphics->FillEllipse(MyBrush, a[0][j], a[1][j], 18, 18);
							k = n;
						}
					}
				}
				a[2][j]++;
				a[0][j] += 48;
				if (a[2][j] > 12)
					a[2][j] -= 12;
				for (int k = 0; k < n; k++)
				{
					if (c[k] == a[2][j])
					{
						if (a[2][j] == key)
						{
							e->Graphics->FillEllipse(MyBrush1, a[0][j], a[1][j], 18, 18);
							k = n;
						}
						else
						{
							e->Graphics->FillEllipse(MyBrush, a[0][j], a[1][j], 18, 18);
							k = n;
						}
					}
				}
				a[2][j]++;
				a[0][j] += 49;
				if (a[2][j] > 12)
					a[2][j] -= 12;
				for (int k = 0; k < n; k++)
				{
					if (c[k] == a[2][j])
					{
						if (a[2][j] == key)
						{
							e->Graphics->FillEllipse(MyBrush1, a[0][j], a[1][j], 18, 18);
							k = n;
						}
						else
						{
							e->Graphics->FillEllipse(MyBrush, a[0][j], a[1][j], 18, 18);
							k = n;
						}
					}
				}
				a[2][j]++;
				a[0][j] += 49;
				if (a[2][j] > 12)
					a[2][j] -= 12;
			}
		}
	}

	void labels(int a[], int b)
	{
		int i = 0;
		this->label4->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label5->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label6->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label7->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label8->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label9->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label10->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label11->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label12->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label13->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label14->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label15->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label16->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label17->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label18->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label19->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label20->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label21->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label22->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label23->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label24->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label25->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label26->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label27->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6)); i++;
		this->label28->Location = System::Drawing::Point(a[i], 240 - 14 * (b - 6));
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox3->Refresh();

		int N = 0, j = 0;

		std::map <char, int> note = { {'A', 10}, {'B', 12}, {'C', 1}, {'D', 3}, {'E', 5}, {'F', 6}, {'G', 8} };

		msclr::interop::marshal_context context;
		std::string tune = context.marshal_as<std::string>(textBox1->Text);
		str = tune.length() - count(tune.begin(), tune.end(), '#');

		if (str > 2 && str < 10)
		{
			std::string combo = context.marshal_as<std::string>(comboBox1->Text);
			std::string keystr = context.marshal_as<std::string>(textBox2->Text);

			key = note[keystr[0]];
			if (keystr[1] == '#' && keystr[0] != 'B' && keystr[0] != 'E')
				key++;

			for (int i = 0; i < combo.length(); i++)
				N += int(combo[i]);

			array<String^>^ picture = {
		   "Pictures\\3string.bmp",
		   "Pictures\\4string.bmp",
		   "Pictures\\5string.bmp",
		   "Pictures\\6string.bmp",
		   "Pictures\\7string.bmp",
		   "Pictures\\8string.bmp",
		   "Pictures\\9string.bmp",
			};
			pictureBox3->Image = Image::FromFile(picture[str - 3]);
			/*for (int i = 0; i < str; i++)
			{
				scale[2][i] = note[tune[j]];
				if (tune[j] == '#' && tune[j--] != 'B' && tune[j--] != 'E')
				{
					scale[2][i]++;
					j++;
				}
				j++;
			}*/
			for (int i = 0; i < str; i++)
			{
				scale[2][i] = note[tune[j]];
				if (j < tune.length())
				{

					if (tune[j + 1] == '#' && tune[j] != 'B' && tune[j] != 'E')
					{
						scale[2][i]++;
						j++;
					}
					j++;
				}
			}
			switch (N)
			{
			case 505:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break; //Major
			case 1025:
				ncount = 8;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 9;
				cond[7] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Major Bebop
			case 1582:
				ncount = 5;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 7;
				cond[4] = key + 9;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Major Pentatonic
			case 1366:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Harmonic
			case 1474:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 6;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Hungarian
			case 1250:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Melodic
			case 2086:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Natural (Aeolian)
			case 1598:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Neopolitan
			case 1594:
				ncount = 5;
				cond[0] = key;
				cond[1] = key + 3;
				cond[2] = key + 5;
				cond[3] = key + 7;
				cond[4] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Minor Pentatonic
			case 578:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 4;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Arabic
			case 507:
				ncount = 6;
				cond[0] = key;
				cond[1] = key + 3;
				cond[2] = key + 5;
				cond[3] = key + 6;
				cond[4] = key + 7;
				cond[5] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Blues
			case 1022:
				ncount = 8;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 6;
				cond[5] = key + 8;
				cond[6] = key + 9;
				cond[7] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Diminished
			case 1346:
				ncount = 8;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 10;
				cond[7] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Dominant Bebop
			case 605:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Dorian
			case 913:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 4;
				cond[3] = key + 6;
				cond[4] = key + 8;
				cond[5] = key + 10;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Enigmatic
			case 1352:
				ncount = 5;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 5;
				cond[3] = key + 7;
				cond[4] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Japanise Insen
			case 712:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 6;
				cond[5] = key + 8;
				cond[6] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Locrian
			case 609:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 6;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Lydian
			case 1054:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 2;
				cond[2] = key + 4;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Mixolydian
			case 1049:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 9;
				cond[6] = key + 11;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Neopolitan
			case 834:
				ncount = 7;
				cond[0] = key;
				cond[1] = key + 1;
				cond[2] = key + 3;
				cond[3] = key + 5;
				cond[4] = key + 7;
				cond[5] = key + 8;
				cond[6] = key + 10;
				for (int i = 0; i < ncount; i++)
					if (cond[i] > 12)
						cond[i] -= 12;
				break;//Phrygian
			}
			bclick = true;
		}
	}
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->FormBorderStyle = Guitar::FormBorderStyle::None;
		pictureBox3->Image = Image::FromFile("Pictures\\6string.bmp");
		int i = 49, j = 1, m = 2;
		lb[j - 1] = 15;
		this->label4->Location = System::Drawing::Point(15, 240); lb[j] = 14 + i * j;
		this->label5->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label6->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label7->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label8->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label9->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label10->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label11->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j;
		this->label12->Location = System::Drawing::Point(14 + i * j, 240); j++; lb[j] = 14 + i * j - m;
		this->label13->Location = System::Drawing::Point(14 + i * j - m, 240); j++; lb[j] = 14 + i * j - 10;
		i = 48;
		this->label14->Location = System::Drawing::Point(14 + i * j - 10, 240); j++; lb[j] = 14 + i * j + m;
		this->label15->Location = System::Drawing::Point(14 + i * j + m, 240); j++; lb[j] = 14 + i * j + m;
		this->label16->Location = System::Drawing::Point(14 + i * j + m, 240); j++; lb[j] = 14 + i * j + m;
		this->label17->Location = System::Drawing::Point(14 + i * j + m, 240); j++; lb[j] = 14 + i * j + m;
		this->label18->Location = System::Drawing::Point(14 + i * j + m, 240); j++; lb[j] = 14 + i * j + m;
		this->label19->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m++; lb[j] = 14 + i * j + m;
		this->label20->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m += 2; lb[j] = 14 + i * j + m;
		this->label21->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m++; lb[j] = 14 + i * j + m;
		this->label22->Location = System::Drawing::Point(14 + i * j + m, 240); j++; lb[j] = 14 + i * j + m;
		this->label23->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m += 2; lb[j] = 14 + i * j + m;
		this->label24->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m++; lb[j] = 14 + i * j + m;
		this->label25->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m++; lb[j] = 14 + i * j + m;
		this->label26->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m++; lb[j] = 14 + i * j + m;
		this->label27->Location = System::Drawing::Point(14 + i * j + m, 240); j++; m += 2; lb[j] = 14 + i * j + m;
		this->label28->Location = System::Drawing::Point(14 + i * j + m, 240);
		labels(lb, 6);
	}
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: bool dragging;
	private: Point offset;
	private: System::Void Shell_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	};
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
private: System::Void pictureBox3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	if (bclick == true)
	{
		int j = 20, i = 0;
		for (int i = 0; i < str; i++)
			scale[0][i] = 14;
		labels(lb, str);
		switch (str)
		{
		case 3:
			scale[1][0] = 117;
			scale[1][1] = 94;
			scale[1][2] = 70;
			render(scale, cond, ncount, str, key, e);
			break;
		case 4:
			scale[1][0] = 130;
			scale[1][1] = 107;
			scale[1][2] = 83;
			scale[1][3] = 58;
			render(scale, cond, ncount, str, key, e);
			break;
		case 5:
			scale[1][0] = 143;
			scale[1][1] = 120;
			scale[1][2] = 95;
			scale[1][3] = 70;
			scale[1][4] = 47;
			render(scale, cond, ncount, str, key, e);
			break;
		case 6:
			scale[1][0] = 153;
			scale[1][1] = 130;
			scale[1][2] = 105;
			scale[1][3] = 81;
			scale[1][4] = 58;
			scale[1][5] = 34;
			render(scale, cond, ncount, str, key, e);
			break;
		case 7:
			scale[1][0] = 165;
			scale[1][1] = 141;
			scale[1][2] = 118;
			scale[1][3] = 93;
			scale[1][4] = 69;
			scale[1][5] = 46;
			scale[1][6] = 23;
			render(scale, cond, ncount, str, key, e);
			break;
		case 8:
			scale[1][0] = 175;
			scale[1][1] = 151;
			scale[1][2] = 128;
			scale[1][3] = 103;
			scale[1][4] = 79;
			scale[1][5] = 56;
			scale[1][6] = 33;
			scale[1][7] = 12;
			render(scale, cond, ncount, str, key, e);
			break;
		case 9:
			scale[1][0] = 187;
			scale[1][1] = 164;
			scale[1][2] = 140;
			scale[1][3] = 116;
			scale[1][4] = 92;
			scale[1][5] = 69;
			scale[1][6] = 45;
			scale[1][7] = 23;
			scale[1][8] = 1;
			render(scale, cond, ncount, str, key, e);
			break;
		}
	}
	bclick = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	colorDialog1->ShowDialog();
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string t = context.marshal_as<std::string>(textBox1->Text);
	int a = t.length() - count(t.begin(), t.end(), '#');
	if (!(e->KeyChar >= 65 && e->KeyChar <= 71 || e->KeyChar == '#' || e->KeyChar == 8))
	{
			e->Handled = true;
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	button1_Click(sender, e); button1_Click(sender, e);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	colorDialog2->ShowDialog();
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string t = context.marshal_as<std::string>(textBox1->Text);
	int a = t.length() - count(t.begin(), t.end(), '#');
	if (!(e->KeyChar >= 65 && e->KeyChar <= 71 || e->KeyChar == '#' || e->KeyChar == 8))
	{
		e->Handled = true;
	}
}
private: System::Void comboBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->Handled = true;
}
};
}