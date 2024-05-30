#pragma once

namespace Project {

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
	private: System::Windows::Forms::Label^ answer;
	protected:

	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ grade;
	private: System::Windows::Forms::Button^ persent;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ umn;





	private: System::Windows::Forms::Button^ n9;

	private: System::Windows::Forms::Button^ n8;

	private: System::Windows::Forms::Button^ n7;
	private: System::Windows::Forms::Button^ minus;


	private: System::Windows::Forms::Button^ n6;

	private: System::Windows::Forms::Button^ n5;

	private: System::Windows::Forms::Button^ n4;
	private: System::Windows::Forms::Button^ plus;


	private: System::Windows::Forms::Button^ n3;

	private: System::Windows::Forms::Button^ n2;

	private: System::Windows::Forms::Button^ n1;
	private: System::Windows::Forms::Button^ rovno;

	private: System::Windows::Forms::Button^ tchk;



	private: System::Windows::Forms::Button^ n0;
	
	private: float first_number;
	private: char user_action = ' ';
	private: bool cut = false;
	private: System::Windows::Forms::Button^ button1;


	protected:

	protected:



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->answer = (gcnew System::Windows::Forms::Label());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->grade = (gcnew System::Windows::Forms::Button());
			this->persent = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->umn = (gcnew System::Windows::Forms::Button());
			this->n9 = (gcnew System::Windows::Forms::Button());
			this->n8 = (gcnew System::Windows::Forms::Button());
			this->n7 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->n6 = (gcnew System::Windows::Forms::Button());
			this->n5 = (gcnew System::Windows::Forms::Button());
			this->n4 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->n3 = (gcnew System::Windows::Forms::Button());
			this->n2 = (gcnew System::Windows::Forms::Button());
			this->n1 = (gcnew System::Windows::Forms::Button());
			this->rovno = (gcnew System::Windows::Forms::Button());
			this->tchk = (gcnew System::Windows::Forms::Button());
			this->n0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// answer
			// 
			this->answer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->answer->Location = System::Drawing::Point(1, 6);
			this->answer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(300, 58);
			this->answer->TabIndex = 0;
			this->answer->Text = L"0";
			this->answer->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->clear->Location = System::Drawing::Point(22, 83);
			this->clear->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(59, 49);
			this->clear->TabIndex = 1;
			this->clear->Text = L"AC";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// grade
			// 
			this->grade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->grade->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->grade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->grade->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->grade->Location = System::Drawing::Point(87, 83);
			this->grade->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(59, 49);
			this->grade->TabIndex = 2;
			this->grade->Text = L"+/-";
			this->grade->UseVisualStyleBackColor = false;
			this->grade->Click += gcnew System::EventHandler(this, &MyForm::grade_Click);
			// 
			// persent
			// 
			this->persent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->persent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->persent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->persent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->persent->Location = System::Drawing::Point(152, 83);
			this->persent->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->persent->Name = L"persent";
			this->persent->Size = System::Drawing::Size(59, 49);
			this->persent->TabIndex = 3;
			this->persent->Text = L"%";
			this->persent->UseVisualStyleBackColor = false;
			this->persent->Click += gcnew System::EventHandler(this, &MyForm::persent_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->del->Location = System::Drawing::Point(217, 83);
			this->del->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(59, 49);
			this->del->TabIndex = 4;
			this->del->Text = L"/";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// umn
			// 
			this->umn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->umn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->umn->Location = System::Drawing::Point(217, 147);
			this->umn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->umn->Name = L"umn";
			this->umn->Size = System::Drawing::Size(59, 49);
			this->umn->TabIndex = 5;
			this->umn->Text = L"*";
			this->umn->UseVisualStyleBackColor = false;
			this->umn->Click += gcnew System::EventHandler(this, &MyForm::umn_Click);
			// 
			// n9
			// 
			this->n9->BackColor = System::Drawing::Color::Gray;
			this->n9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n9->Location = System::Drawing::Point(152, 147);
			this->n9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n9->Name = L"n9";
			this->n9->Size = System::Drawing::Size(59, 49);
			this->n9->TabIndex = 6;
			this->n9->Text = L"9";
			this->n9->UseVisualStyleBackColor = false;
			this->n9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n8
			// 
			this->n8->BackColor = System::Drawing::Color::Gray;
			this->n8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n8->Location = System::Drawing::Point(87, 147);
			this->n8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n8->Name = L"n8";
			this->n8->Size = System::Drawing::Size(59, 49);
			this->n8->TabIndex = 7;
			this->n8->Text = L"8";
			this->n8->UseVisualStyleBackColor = false;
			this->n8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n7
			// 
			this->n7->BackColor = System::Drawing::Color::Gray;
			this->n7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n7->Location = System::Drawing::Point(22, 147);
			this->n7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n7->Name = L"n7";
			this->n7->Size = System::Drawing::Size(59, 49);
			this->n7->TabIndex = 8;
			this->n7->Text = L"7";
			this->n7->UseVisualStyleBackColor = false;
			this->n7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->minus->Location = System::Drawing::Point(217, 203);
			this->minus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(59, 49);
			this->minus->TabIndex = 9;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// n6
			// 
			this->n6->BackColor = System::Drawing::Color::Gray;
			this->n6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n6->Location = System::Drawing::Point(152, 203);
			this->n6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n6->Name = L"n6";
			this->n6->Size = System::Drawing::Size(59, 49);
			this->n6->TabIndex = 10;
			this->n6->Text = L"6";
			this->n6->UseVisualStyleBackColor = false;
			this->n6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n5
			// 
			this->n5->BackColor = System::Drawing::Color::Gray;
			this->n5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n5->Location = System::Drawing::Point(86, 203);
			this->n5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n5->Name = L"n5";
			this->n5->Size = System::Drawing::Size(59, 49);
			this->n5->TabIndex = 11;
			this->n5->Text = L"5";
			this->n5->UseVisualStyleBackColor = false;
			this->n5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n4
			// 
			this->n4->BackColor = System::Drawing::Color::Gray;
			this->n4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n4->Location = System::Drawing::Point(22, 203);
			this->n4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n4->Name = L"n4";
			this->n4->Size = System::Drawing::Size(59, 49);
			this->n4->TabIndex = 12;
			this->n4->Text = L"4";
			this->n4->UseVisualStyleBackColor = false;
			this->n4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plus->Location = System::Drawing::Point(217, 263);
			this->plus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(59, 49);
			this->plus->TabIndex = 13;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// n3
			// 
			this->n3->BackColor = System::Drawing::Color::Gray;
			this->n3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n3->Location = System::Drawing::Point(151, 263);
			this->n3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n3->Name = L"n3";
			this->n3->Size = System::Drawing::Size(59, 49);
			this->n3->TabIndex = 14;
			this->n3->Text = L"3";
			this->n3->UseVisualStyleBackColor = false;
			this->n3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n2
			// 
			this->n2->BackColor = System::Drawing::Color::Gray;
			this->n2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n2->Location = System::Drawing::Point(87, 263);
			this->n2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(59, 49);
			this->n2->TabIndex = 15;
			this->n2->Text = L"2";
			this->n2->UseVisualStyleBackColor = false;
			this->n2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// n1
			// 
			this->n1->BackColor = System::Drawing::Color::Gray;
			this->n1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n1->Location = System::Drawing::Point(22, 263);
			this->n1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(59, 49);
			this->n1->TabIndex = 16;
			this->n1->Text = L"1";
			this->n1->UseVisualStyleBackColor = false;
			this->n1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// rovno
			// 
			this->rovno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->rovno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rovno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rovno->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rovno->Location = System::Drawing::Point(217, 328);
			this->rovno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rovno->Name = L"rovno";
			this->rovno->Size = System::Drawing::Size(59, 49);
			this->rovno->TabIndex = 17;
			this->rovno->Text = L"=";
			this->rovno->UseVisualStyleBackColor = false;
			this->rovno->Click += gcnew System::EventHandler(this, &MyForm::rovno_Click);
			// 
			// tchk
			// 
			this->tchk->BackColor = System::Drawing::Color::Gray;
			this->tchk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->tchk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tchk->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tchk->Location = System::Drawing::Point(152, 328);
			this->tchk->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tchk->Name = L"tchk";
			this->tchk->Size = System::Drawing::Size(59, 49);
			this->tchk->TabIndex = 18;
			this->tchk->Text = L",";
			this->tchk->UseVisualStyleBackColor = false;
			this->tchk->Click += gcnew System::EventHandler(this, &MyForm::tchk_Click);
			// 
			// n0
			// 
			this->n0->BackColor = System::Drawing::Color::Gray;
			this->n0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->n0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n0->Location = System::Drawing::Point(22, 328);
			this->n0->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->n0->Name = L"n0";
			this->n0->Size = System::Drawing::Size(124, 49);
			this->n0->TabIndex = 19;
			this->n0->Text = L"0";
			this->n0->UseVisualStyleBackColor = false;
			this->n0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 29);
			this->button1->TabIndex = 20;
			this->button1->Text = L"ч";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(298, 386);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->n0);
			this->Controls->Add(this->tchk);
			this->Controls->Add(this->rovno);
			this->Controls->Add(this->n1);
			this->Controls->Add(this->n2);
			this->Controls->Add(this->n3);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->n4);
			this->Controls->Add(this->n5);
			this->Controls->Add(this->n6);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->n7);
			this->Controls->Add(this->n8);
			this->Controls->Add(this->n9);
			this->Controls->Add(this->umn);
			this->Controls->Add(this->del);
			this->Controls->Add(this->persent);
			this->Controls->Add(this->grade);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->answer);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
		private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			this->answer->ForeColor = Color::White;
			Button^ button = safe_cast<Button^>(sender); //считываем кнопки
			if (this->answer->Text == "0" || cut) {
				this->answer->Text = button->Text;
				cut = false;
			}
			else {
				this->answer->Text = this->answer->Text + button->Text; //делаем не однозначные числа
			}
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void umn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void math_action(char action) {
		this->first_number = System::Convert::ToDouble(this->answer->Text); //запоминаем введЄнное
		this->user_action = action;
		this->answer->Text = "0";
	}
	private: System::Void rovno_Click(System::Object^ sender, System::EventArgs^ e) {\
		if (user_action == ' '){
			return;
		}
		float sui = System::Convert::ToDouble(this->answer->Text); //string -> int
		float result;
		switch (this->user_action){
		case '+': result = this->first_number + sui; break;
		case '-': result = this->first_number - sui; break;
		case '*': result = this->first_number * sui; break;
		case '%': result = this->first_number * sui / 100; break;
		case '/':
			if (sui == 0) {
				result = 0;
				this->answer->ForeColor = Color::Red;
				MessageBox::Show(this, "Syntax ERROR", "Ќе делай так", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else{
				result = this->first_number / sui;
				break;
			}
		}
		this->cut = true;
		this->answer->Text = System::Convert::ToString(result);
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->answer->Text = "0";
		this->answer->ForeColor = Color::White;
		this->first_number = 0;
		this->user_action = ' ';
		this->cut = false;
	}
	private: System::Void grade_Click(System::Object^ sender, System::EventArgs^ e) {
		float oleg = System::Convert::ToDouble(this->answer->Text);
		oleg *= -1;
		this->answer->Text = System::Convert::ToString(oleg);
	}
	private: System::Void persent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void tchk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text= this->answer->Text;
		if (!text->Contains(",")) {  //проверка есть ли точка уже
			this->answer->Text = text + ",";
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}