#pragma once
#include<thread>
#include "AttendanceForm.h";
#include "StudentsInfo.h"

namespace Dziennik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace std;



	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAttendance;
	protected:






















	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::DataGridView^ dataGridViewMainMenu;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnStudentInfo;













	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAttendance = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewMainMenu = (gcnew System::Windows::Forms::DataGridView());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnStudentInfo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMainMenu))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAttendance
			// 
			this->btnAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAttendance->Location = System::Drawing::Point(1048, 8);
			this->btnAttendance->Name = L"btnAttendance";
			this->btnAttendance->Size = System::Drawing::Size(322, 66);
			this->btnAttendance->TabIndex = 0;
			this->btnAttendance->Text = L"Attendance";
			this->btnAttendance->UseVisualStyleBackColor = true;
			this->btnAttendance->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSearch->ForeColor = System::Drawing::SystemColors::Menu;
			this->txtSearch->Location = System::Drawing::Point(18, 2);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(654, 72);
			this->txtSearch->TabIndex = 13;
			this->txtSearch->Text = L"Search";
			// 
			// dataGridViewMainMenu
			// 
			this->dataGridViewMainMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMainMenu->Location = System::Drawing::Point(12, 92);
			this->dataGridViewMainMenu->Name = L"dataGridViewMainMenu";
			this->dataGridViewMainMenu->RowHeadersWidth = 51;
			this->dataGridViewMainMenu->RowTemplate->Height = 24;
			this->dataGridViewMainMenu->Size = System::Drawing::Size(1358, 649);
			this->dataGridViewMainMenu->TabIndex = 14;
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(684, 8);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(120, 65);
			this->btnExit->TabIndex = 15;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnStudentInfo
			// 
			this->btnStudentInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnStudentInfo->Location = System::Drawing::Point(810, 8);
			this->btnStudentInfo->Name = L"btnStudentInfo";
			this->btnStudentInfo->Size = System::Drawing::Size(232, 65);
			this->btnStudentInfo->TabIndex = 16;
			this->btnStudentInfo->Text = L"Student Info";
			this->btnStudentInfo->UseVisualStyleBackColor = true;
			this->btnStudentInfo->Click += gcnew System::EventHandler(this, &MyForm::btnStudentInfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 753);
			this->Controls->Add(this->btnStudentInfo);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->dataGridViewMainMenu);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnAttendance);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMainMenu))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\portfolio\\Dziennik\\dziennik.accdb");
	int checker;	//nie u¿yte

	void ConnectionDB() {
		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();	
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT * FROM UczniowieInfo";
			cmd->ExecuteNonQuery();

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			dataGridViewMainMenu->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f1 = gcnew MyForm1();
		f1->ShowDialog();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ConnectionDB();
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnStudentInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentsInfo^ si = gcnew StudentsInfo();
		si->ShowDialog();
	}
	};
}
