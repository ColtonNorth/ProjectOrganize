#pragma once
#include "User.h"



namespace ProjectOrganize {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
		User^ mUser;
	public:
		mainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mUser = user;
			label1->Text = user->name + "'s Organizer";
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ work;
	private: System::Windows::Forms::Button^ hobbies;
	private: System::Windows::Forms::Button^ finances;
	private: System::Windows::Forms::Button^ family;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->work = (gcnew System::Windows::Forms::Button());
			this->hobbies = (gcnew System::Windows::Forms::Button());
			this->finances = (gcnew System::Windows::Forms::Button());
			this->family = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1132, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to your Organizer";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// work
			// 
			this->work->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->work->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->work->Location = System::Drawing::Point(97, 87);
			this->work->MaximumSize = System::Drawing::Size(162, 42);
			this->work->MinimumSize = System::Drawing::Size(162, 42);
			this->work->Name = L"work";
			this->work->Size = System::Drawing::Size(162, 42);
			this->work->TabIndex = 1;
			this->work->Text = L"Work";
			this->work->UseVisualStyleBackColor = true;
			this->work->Click += gcnew System::EventHandler(this, &mainForm::work_Click);
			// 
			// hobbies
			// 
			this->hobbies->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->hobbies->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hobbies->Location = System::Drawing::Point(367, 87);
			this->hobbies->MaximumSize = System::Drawing::Size(162, 42);
			this->hobbies->MinimumSize = System::Drawing::Size(162, 42);
			this->hobbies->Name = L"hobbies";
			this->hobbies->Size = System::Drawing::Size(162, 42);
			this->hobbies->TabIndex = 2;
			this->hobbies->Text = L"Hobbies";
			this->hobbies->UseVisualStyleBackColor = true;
			this->hobbies->Click += gcnew System::EventHandler(this, &mainForm::hobbies_Click);
			// 
			// finances
			// 
			this->finances->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->finances->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finances->Location = System::Drawing::Point(637, 87);
			this->finances->MaximumSize = System::Drawing::Size(162, 42);
			this->finances->MinimumSize = System::Drawing::Size(162, 42);
			this->finances->Name = L"finances";
			this->finances->Size = System::Drawing::Size(162, 42);
			this->finances->TabIndex = 3;
			this->finances->Text = L"Finances";
			this->finances->UseVisualStyleBackColor = true;
			this->finances->Click += gcnew System::EventHandler(this, &mainForm::finances_Click);
			// 
			// family
			// 
			this->family->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->family->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->family->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->family->Location = System::Drawing::Point(906, 87);
			this->family->MaximumSize = System::Drawing::Size(162, 42);
			this->family->MinimumSize = System::Drawing::Size(162, 42);
			this->family->Name = L"family";
			this->family->Size = System::Drawing::Size(162, 42);
			this->family->TabIndex = 4;
			this->family->Text = L"Family";
			this->family->UseVisualStyleBackColor = false;
			this->family->Click += gcnew System::EventHandler(this, &mainForm::family_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(98, 148);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(970, 269);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(3, 1);
			this->monthCalendar1->Location = System::Drawing::Point(232, 429);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 6;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &mainForm::monthCalendar1_DateChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1156, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->CheckOnClick = true;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->saveToolStripMenuItem,
					this->undoToolStripMenuItem, this->deleteToolStripMenuItem, this->quitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::saveToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::quitToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1156, 628);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->family);
			this->Controls->Add(this->finances);
			this->Controls->Add(this->hobbies);
			this->Controls->Add(this->work);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//public: User^ user = mainForm::user;

	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	//When quit is pressed we close the application.
	private: System::Void quitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	//Save the current state of the text box with the associated button.
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ workText = richTextBox1->Text;
		//Update user work info with text in textBox
		try
		{
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myOrganizer;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users (work) VALUES (@work);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@work", workText);

			SqlDataReader^ reader = command.ExecuteReader();
			
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database", "Database Connection Error",
				MessageBoxButtons::OK);
		}
	}
	//When the work button is pressed, we want to fill the text box with work related data
	private: System::Void work_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = mUser->work;
	}
	
	private: System::Void hobbies_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void finances_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void family_Click(System::Object^ sender, System::EventArgs^ e) {

	}

};


}
