#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include <msclr\marshal_cppstd.h>

namespace sekirboshka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		std::vector<std::string>* words;//Нельзя внедрить собственный элемент данных в тип CLR.
		std::vector<std::string>* helps;//Однако можно объявить указатель на собственный тип
		std::string* full_word;
		std::string* user_word;
		int mistakes_count;

	public:
		MyForm()
		{
			InitializeComponent();

			srand(time(NULL));

			words = new std::vector<std::string>;
			helps = new std::vector<std::string>;
			full_word = new std::string;
			user_word = new std::string;

			std::string* tmp = new std::string;

			std::ifstream fin;

			fin.open("Words.txt");
			if (!fin.is_open())
			{
				MessageBox::Show(L"Ошибка чтения файла Words.txt", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			while (!fin.eof())
			{
				getline(fin, *tmp);
				if (*tmp != "")
					words->push_back(*tmp);
			}
			fin.close();

			fin.open("Helps.txt");
			if (!fin.is_open())
			{
				MessageBox::Show(L"Ошибка чтения файла Helps.txt", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			while (!fin.eof())
			{
				getline(fin, *tmp);
				if (*tmp != "")
					helps->push_back(*tmp);
			}
			fin.close();

			delete tmp;
			tmp = nullptr;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}

			delete words;
			words = nullptr;

			delete helps;
			helps = nullptr;

			delete full_word;
			full_word = nullptr;

			delete user_word;
			user_word = nullptr;
		}

	//буквы
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	//кнопки управления
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ buttonNewWord;
	private: System::Windows::Forms::Button^ buttonHelp;
	private: System::Windows::Forms::Button^ buttonClose;
	//текстовая инф-ия
	private: System::Windows::Forms::Label^ labelWord;
	private: System::Windows::Forms::Label^ labelHelp;
	//картинки
	private: System::Windows::Forms::PictureBox^ pictureStart;
	private: System::Windows::Forms::PictureBox^ pictureMistake1;
	private: System::Windows::Forms::PictureBox^ pictureMistake2;
	private: System::Windows::Forms::PictureBox^ pictureMistake3;
	private: System::Windows::Forms::PictureBox^ pictureMistake4;
	private: System::Windows::Forms::PictureBox^ pictureMistake5;
	private: System::Windows::Forms::PictureBox^ pictureMistake6;
	private: System::Windows::Forms::PictureBox^ pictureMistake7;
	private: System::Windows::Forms::PictureBox^ pictureLose;
	private: System::Windows::Forms::PictureBox^ pictureWin;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->buttonNewWord = (gcnew System::Windows::Forms::Button());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->labelWord = (gcnew System::Windows::Forms::Label());
			this->labelHelp = (gcnew System::Windows::Forms::Label());
			this->pictureStart = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureMistake7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureLose = (gcnew System::Windows::Forms::PictureBox());
			this->pictureWin = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(552, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 41);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->Text = L"А";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(607, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 41);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->Text = L"Б";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(662, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 41);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->Text = L"В";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(717, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 41);
			this->button4->TabIndex = 4;
			this->button4->TabStop = false;
			this->button4->Text = L"Г";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(772, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 41);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->Text = L"Д";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(827, 275);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 41);
			this->button6->TabIndex = 6;
			this->button6->TabStop = false;
			this->button6->Text = L"Е";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(882, 275);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 41);
			this->button7->TabIndex = 7;
			this->button7->TabStop = false;
			this->button7->Text = L"Ё";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(937, 275);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 41);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->Text = L"Ж";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Enabled = false;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(992, 275);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 41);
			this->button9->TabIndex = 9;
			this->button9->TabStop = false;
			this->button9->Text = L"З";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Enabled = false;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1047, 275);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 41);
			this->button10->TabIndex = 10;
			this->button10->TabStop = false;
			this->button10->Text = L"И";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Enabled = false;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(552, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 41);
			this->button11->TabIndex = 11;
			this->button11->TabStop = false;
			this->button11->Text = L"Й";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Enabled = false;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(607, 322);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 41);
			this->button12->TabIndex = 12;
			this->button12->TabStop = false;
			this->button12->Text = L"К";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Enabled = false;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(662, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 41);
			this->button13->TabIndex = 13;
			this->button13->TabStop = false;
			this->button13->Text = L"Л";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Enabled = false;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(717, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 41);
			this->button14->TabIndex = 14;
			this->button14->TabStop = false;
			this->button14->Text = L"М";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Enabled = false;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(772, 322);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 41);
			this->button15->TabIndex = 15;
			this->button15->TabStop = false;
			this->button15->Text = L"Н";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Enabled = false;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(827, 322);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 41);
			this->button16->TabIndex = 16;
			this->button16->TabStop = false;
			this->button16->Text = L"О";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Enabled = false;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(882, 321);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 41);
			this->button17->TabIndex = 17;
			this->button17->TabStop = false;
			this->button17->Text = L"П";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Enabled = false;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(937, 322);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 41);
			this->button18->TabIndex = 18;
			this->button18->TabStop = false;
			this->button18->Text = L"Р";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Enabled = false;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(992, 322);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 41);
			this->button19->TabIndex = 19;
			this->button19->TabStop = false;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Enabled = false;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(1047, 322);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 41);
			this->button20->TabIndex = 20;
			this->button20->TabStop = false;
			this->button20->Text = L"Т";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Enabled = false;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(552, 368);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 41);
			this->button21->TabIndex = 21;
			this->button21->TabStop = false;
			this->button21->Text = L"У";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Enabled = false;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(607, 368);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 41);
			this->button22->TabIndex = 22;
			this->button22->TabStop = false;
			this->button22->Text = L"Ф";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Enabled = false;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(662, 369);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 41);
			this->button23->TabIndex = 23;
			this->button23->TabStop = false;
			this->button23->Text = L"Х";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Enabled = false;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(717, 369);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 41);
			this->button24->TabIndex = 24;
			this->button24->TabStop = false;
			this->button24->Text = L"Ц";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Enabled = false;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(772, 369);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(49, 41);
			this->button25->TabIndex = 25;
			this->button25->TabStop = false;
			this->button25->Text = L"Ч";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Enabled = false;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(827, 369);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(49, 41);
			this->button26->TabIndex = 26;
			this->button26->TabStop = false;
			this->button26->Text = L"Ш";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Enabled = false;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(882, 368);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(49, 41);
			this->button27->TabIndex = 27;
			this->button27->TabStop = false;
			this->button27->Text = L"Щ";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Enabled = false;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(937, 369);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(49, 41);
			this->button28->TabIndex = 28;
			this->button28->TabStop = false;
			this->button28->Text = L"Ъ";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Enabled = false;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(992, 368);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(49, 41);
			this->button29->TabIndex = 29;
			this->button29->TabStop = false;
			this->button29->Text = L"Ы";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Enabled = false;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(1047, 369);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(49, 41);
			this->button30->TabIndex = 30;
			this->button30->TabStop = false;
			this->button30->Text = L"Ь";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->Enabled = false;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(552, 415);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(49, 41);
			this->button31->TabIndex = 31;
			this->button31->TabStop = false;
			this->button31->Text = L"Э";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->Enabled = false;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(607, 416);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(49, 41);
			this->button32->TabIndex = 32;
			this->button32->TabStop = false;
			this->button32->Text = L"Ю";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Enabled = false;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(662, 416);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(49, 41);
			this->button33->TabIndex = 33;
			this->button33->TabStop = false;
			this->button33->Text = L"Я";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonStart.BackgroundImage")));
			this->buttonStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStart->Location = System::Drawing::Point(552, 32);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(544, 225);
			this->buttonStart->TabIndex = 40;
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// buttonNewWord
			// 
			this->buttonNewWord->BackColor = System::Drawing::Color::Transparent;
			this->buttonNewWord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonNewWord.BackgroundImage")));
			this->buttonNewWord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonNewWord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNewWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNewWord->Location = System::Drawing::Point(739, 450);
			this->buttonNewWord->Name = L"buttonNewWord";
			this->buttonNewWord->Size = System::Drawing::Size(172, 64);
			this->buttonNewWord->TabIndex = 37;
			this->buttonNewWord->UseVisualStyleBackColor = false;
			this->buttonNewWord->Click += gcnew System::EventHandler(this, &MyForm::buttonNewWord_Click);
			ButtonOff(buttonNewWord);
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Transparent;
			this->buttonHelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonHelp.BackgroundImage")));
			this->buttonHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHelp->Location = System::Drawing::Point(592, 146);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(456, 89);
			this->buttonHelp->TabIndex = 39;
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MyForm::buttonHelp_Click);
			ButtonOff(buttonHelp);
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonClose.BackgroundImage")));
			this->buttonClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->Location = System::Drawing::Point(937, 450);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(166, 64);
			this->buttonClose->TabIndex = 34;
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::buttonClose_Click);
			// 
			// labelWord
			// 
			this->labelWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWord->Location = System::Drawing::Point(600, 36);
			this->labelWord->Name = L"labelWord";
			this->labelWord->Size = System::Drawing::Size(448, 89);
			this->labelWord->TabIndex = 36;
			this->labelWord->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWord->Visible = false;
			// 
			// labelHelp
			// 
			this->labelHelp->BackColor = System::Drawing::Color::Olive;
			this->labelHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHelp->Location = System::Drawing::Point(600, 146);
			this->labelHelp->Name = L"labelHelp";
			this->labelHelp->Size = System::Drawing::Size(448, 89);
			this->labelHelp->TabIndex = 38;
			this->labelHelp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelHelp->Visible = false;
			// 
			// pictureStart
			// 
			this->pictureStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureStart.BackgroundImage")));
			this->pictureStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureStart->Location = System::Drawing::Point(26, 14);
			this->pictureStart->Name = L"pictureStart";
			this->pictureStart->Size = System::Drawing::Size(500, 500);
			this->pictureStart->TabIndex = 0;
			this->pictureStart->TabStop = false;
			// 
			// pictureMistake1
			// 
			this->pictureMistake1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake1.BackgroundImage")));
			this->pictureMistake1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake1->Location = System::Drawing::Point(26, 12);
			this->pictureMistake1->Name = L"pictureMistake1";
			this->pictureMistake1->Size = System::Drawing::Size(500, 500);
			this->pictureMistake1->TabIndex = 41;
			this->pictureMistake1->TabStop = false;
			this->pictureMistake1->Visible = false;
			// 
			// pictureMistake2
			// 
			this->pictureMistake2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake2.BackgroundImage")));
			this->pictureMistake2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake2->Location = System::Drawing::Point(26, 12);
			this->pictureMistake2->Name = L"pictureMistake2";
			this->pictureMistake2->Size = System::Drawing::Size(500, 500);
			this->pictureMistake2->TabIndex = 42;
			this->pictureMistake2->TabStop = false;
			this->pictureMistake2->Visible = false;
			// 
			// pictureMistake3
			// 
			this->pictureMistake3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake3.BackgroundImage")));
			this->pictureMistake3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake3->Location = System::Drawing::Point(26, 12);
			this->pictureMistake3->Name = L"pictureMistake3";
			this->pictureMistake3->Size = System::Drawing::Size(500, 500);
			this->pictureMistake3->TabIndex = 43;
			this->pictureMistake3->TabStop = false;
			this->pictureMistake3->Visible = false;
			// 
			// pictureMistake4
			// 
			this->pictureMistake4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake4.BackgroundImage")));
			this->pictureMistake4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake4->Location = System::Drawing::Point(26, 14);
			this->pictureMistake4->Name = L"pictureMistake4";
			this->pictureMistake4->Size = System::Drawing::Size(500, 500);
			this->pictureMistake4->TabIndex = 44;
			this->pictureMistake4->TabStop = false;
			this->pictureMistake4->Visible = false;
			// 
			// pictureMistake5
			// 
			this->pictureMistake5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake5.BackgroundImage")));
			this->pictureMistake5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake5->Location = System::Drawing::Point(26, 14);
			this->pictureMistake5->Name = L"pictureMistake5";
			this->pictureMistake5->Size = System::Drawing::Size(500, 500);
			this->pictureMistake5->TabIndex = 45;
			this->pictureMistake5->TabStop = false;
			this->pictureMistake5->Visible = false;
			// 
			// pictureMistake6
			// 
			this->pictureMistake6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake6.BackgroundImage")));
			this->pictureMistake6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake6->Location = System::Drawing::Point(26, 12);
			this->pictureMistake6->Name = L"pictureMistake6";
			this->pictureMistake6->Size = System::Drawing::Size(500, 500);
			this->pictureMistake6->TabIndex = 46;
			this->pictureMistake6->TabStop = false;
			this->pictureMistake6->Visible = false;
			// 
			// pictureMistake7
			// 
			this->pictureMistake7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMistake7.BackgroundImage")));
			this->pictureMistake7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureMistake7->Location = System::Drawing::Point(26, 14);
			this->pictureMistake7->Name = L"pictureMistake7";
			this->pictureMistake7->Size = System::Drawing::Size(500, 500);
			this->pictureMistake7->TabIndex = 47;
			this->pictureMistake7->TabStop = false;
			this->pictureMistake7->Visible = false;
			// 
			// pictureLose
			// 
			this->pictureLose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLose.BackgroundImage")));
			this->pictureLose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureLose->Location = System::Drawing::Point(26, 14);
			this->pictureLose->Name = L"pictureLose";
			this->pictureLose->Size = System::Drawing::Size(500, 500);
			this->pictureLose->TabIndex = 48;
			this->pictureLose->TabStop = false;
			this->pictureLose->Visible = false;
			// 
			// pictureWin
			// 
			this->pictureWin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWin.BackgroundImage")));
			this->pictureWin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureWin->Location = System::Drawing::Point(26, 12);
			this->pictureWin->Name = L"pictureWin";
			this->pictureWin->Size = System::Drawing::Size(500, 500);
			this->pictureWin->TabIndex = 49;
			this->pictureWin->TabStop = false;
			this->pictureWin->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1115, 526);
			this->Controls->Add(this->pictureWin);
			this->Controls->Add(this->pictureLose);
			this->Controls->Add(this->pictureMistake7);
			this->Controls->Add(this->pictureMistake6);
			this->Controls->Add(this->pictureMistake5);
			this->Controls->Add(this->pictureMistake4);
			this->Controls->Add(this->pictureMistake3);
			this->Controls->Add(this->pictureMistake2);
			this->Controls->Add(this->pictureMistake1);
			this->Controls->Add(this->pictureStart);
			this->Controls->Add(this->labelHelp);
			this->Controls->Add(this->labelWord);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonHelp);
			this->Controls->Add(this->buttonNewWord);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMistake7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Кнопки, отвечающие за буквы русского алфавита (номер кнопки = номер буквы в алфавите)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button8);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button9);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button10);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button11);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button12);
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button13);
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button14);
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button15);
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button16);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button17);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button18);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button19);
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button20);
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button21);
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button22);
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button23);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button24);
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button25);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button26);
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button27);
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button28);
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button29);
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button30);
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button31);
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button32);
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CheckLetter(button33);
	}

	//Кнопка начала игры
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ButtonOff(buttonStart);
		delete buttonStart;

		ButtonOn(buttonNewWord);
		EnableLetters();
		ButtonOn(buttonHelp);
		labelWord->Visible = true;

		SetRand();

		mistakes_count = 0;
	}

	//Кнопка, отвечающая за сброс игры и начала заново с новым словом
	private: System::Void buttonNewWord_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ButtonOn(buttonHelp);
		labelHelp->Visible = false;

		LettersOn();

		pictureWin->Visible = false;
		switch (mistakes_count)
		{
		case 1:
		{
			pictureMistake1->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 2:
		{
			pictureMistake2->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 3:
		{
			pictureMistake3->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 4:
		{
			pictureMistake4->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 5:
		{
			pictureMistake5->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 6:
		{
			pictureMistake6->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 7:
		{
			pictureMistake7->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		case 8:
		{
			pictureLose->Visible = false;
			pictureStart->Visible = true;
			break;
		}
		}

		SetRand();

		mistakes_count = 0;
	}

	//Кнопка, отвечающая за открытие подсказки
	private: System::Void buttonHelp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ButtonOff(buttonHelp);
		labelHelp->Visible = true;
	}

	//Кнопка, отвечающая за закрытие окна
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	private: void SetRand()
	{
		if (words->size() == 0)
		{
			MessageBox::Show(L"Больше нет слов!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		else
		{
			int random_index = rand() % words->size();
			*full_word = (*words)[random_index];
			*user_word = "";
			labelWord->Text = L"";
			for (int i = 0; i < full_word->size(); i++)
			{
				*user_word += "*";
			}
			labelWord->Text += gcnew String((*user_word).c_str());
			labelHelp->Text = gcnew String((*helps)[random_index].c_str());

			std::vector<std::string>::iterator del = words->begin() + random_index;
			words->erase(del);

			del = helps->begin() + random_index;
			helps->erase(del);
		}
	}
	private: void Mistake()
	{
		switch (mistakes_count)
		{
		case 1:
		{
			pictureStart->Visible = false;
			pictureMistake1->Visible = true;
			break;
		}
		case 2:
		{
			pictureMistake1->Visible = false;
			pictureMistake2->Visible = true;
			break;
		}
		case 3:
		{
			pictureMistake2->Visible = false;
			pictureMistake3->Visible = true;
			break;
		}
		case 4:
		{
			pictureMistake3->Visible = false;
			pictureMistake4->Visible = true;
			break;
		}
		case 5:
		{
			pictureMistake4->Visible = false;
			pictureMistake5->Visible = true;
			break;
		}
		case 6:
		{
			pictureMistake5->Visible = false;
			pictureMistake6->Visible = true;
			break;
		}
		case 7:
		{
			pictureMistake6->Visible = false;
			pictureMistake7->Visible = true;
			break;
		}
		case 8:
		{
			Lose();
			break;
		}
		}
	}
	private: void Lose()
	{
		pictureMistake7->Visible = false;
		pictureLose->Visible = true;
		ButtonOff(buttonHelp);
		DisableLetters();
		labelHelp->Visible = true;
		labelHelp->Text = L"ВЫ ПРОИГРАЛИ :(";
		labelWord->Text = gcnew String((*full_word).c_str());
	}
	private: void Win()
	{
		switch (mistakes_count)
		{
		case 1:
		{
			pictureMistake1->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 2:
		{
			pictureMistake2->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 3:
		{
			pictureMistake3->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 4:
		{
			pictureMistake4->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 5:
		{
			pictureMistake5->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 6:
		{
			pictureMistake6->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 7:
		{
			pictureMistake7->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		case 8:
		{
			pictureLose->Visible = false;
			pictureWin->Visible = true;
			break;
		}
		}
		labelHelp->Text = L"ВЫ УГАДАЛИ СЛОВО!";
	}
	private: void CheckLetter(System::Object^ sender)
	{
		Button^ button = (Button^)sender;
		ButtonOff(button);
		msclr::interop::marshal_context context;
		std::string letter = context.marshal_as<std::string>(button->Text);
		bool find_letter = false;

		for (int i = 0; i < full_word->size(); i++)
		{
			if ((*full_word)[i] == letter[0])
			{
				(*user_word)[i] = letter[0];
				find_letter = true;
			}
		}

		if (find_letter)
		{
			labelWord->Text = gcnew String((*user_word).c_str());
			if (user_word->find('*') == -1)
			{
				Win();
			}
		}
		else
		{
			++mistakes_count;
			Mistake();
		}
	}
	private: void ButtonOn(System::Object^ sender)
	{
		Button^ button = (Button^)sender;
		button->Visible = true;
		button->Enabled = true;
	}
	private: void ButtonOff(System::Object^ sender)
	{
		Button^ button = (Button^)sender;
		button->Visible = false;
		button->Enabled = false;
	}
	private: void LettersOn()
	{
		ButtonOn(button1);
		ButtonOn(button2);
		ButtonOn(button3);
		ButtonOn(button4);
		ButtonOn(button5);
		ButtonOn(button6);
		ButtonOn(button7);
		ButtonOn(button8);
		ButtonOn(button9);
		ButtonOn(button10);
		ButtonOn(button11);
		ButtonOn(button12);
		ButtonOn(button13);
		ButtonOn(button14);
		ButtonOn(button15);
		ButtonOn(button16);
		ButtonOn(button17);
		ButtonOn(button18);
		ButtonOn(button19);
		ButtonOn(button20);
		ButtonOn(button21);
		ButtonOn(button22);
		ButtonOn(button23);
		ButtonOn(button24);
		ButtonOn(button25);
		ButtonOn(button26);
		ButtonOn(button27);
		ButtonOn(button28);
		ButtonOn(button29);
		ButtonOn(button30);
		ButtonOn(button31);
		ButtonOn(button32);
		ButtonOn(button33);
	}
	private: void DisableLetters()
	{
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button11->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		button14->Enabled = false;
		button15->Enabled = false;
		button16->Enabled = false;
		button17->Enabled = false;
		button18->Enabled = false;
		button19->Enabled = false;
		button20->Enabled = false;
		button21->Enabled = false;
		button22->Enabled = false;
		button23->Enabled = false;
		button24->Enabled = false;
		button25->Enabled = false;
		button26->Enabled = false;
		button27->Enabled = false;
		button28->Enabled = false;
		button29->Enabled = false;
		button30->Enabled = false;
		button31->Enabled = false;
		button32->Enabled = false;
		button33->Enabled = false;
	}
	private: void EnableLetters()
	{
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;
		button10->Enabled = true;
		button11->Enabled = true;
		button11->Enabled = true;
		button12->Enabled = true;
		button13->Enabled = true;
		button14->Enabled = true;
		button15->Enabled = true;
		button16->Enabled = true;
		button17->Enabled = true;
		button18->Enabled = true;
		button19->Enabled = true;
		button20->Enabled = true;
		button21->Enabled = true;
		button22->Enabled = true;
		button23->Enabled = true;
		button24->Enabled = true;
		button25->Enabled = true;
		button26->Enabled = true;
		button27->Enabled = true;
		button28->Enabled = true;
		button29->Enabled = true;
		button30->Enabled = true;
		button31->Enabled = true;
		button32->Enabled = true;
		button33->Enabled = true;
	}
};
}