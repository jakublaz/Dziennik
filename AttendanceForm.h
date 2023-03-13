#pragma once
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
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFirstname;
	private: System::Windows::Forms::Button^ btnPresent;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtStudentID;







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
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
			this->btnPresent = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBack
			// 
			this->btnGoBack->Location = System::Drawing::Point(41, 10);
			this->btnGoBack->Margin = System::Windows::Forms::Padding(2);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(58, 32);
			this->btnGoBack->TabIndex = 0;
			this->btnGoBack->Text = L"Go Back";
			this->btnGoBack->UseVisualStyleBackColor = true;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &MyForm1::btnGoBack_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(134, 24);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(842, 20);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->Value = System::DateTime(2023, 3, 13, 0, 0, 0, 0);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(566, 48);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(459, 553);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(24, 207);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 46);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Surname";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSurname->Location = System::Drawing::Point(232, 207);
			this->txtSurname->Margin = System::Windows::Forms::Padding(2);
			this->txtSurname->Multiline = true;
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(288, 55);
			this->txtSurname->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(24, 139);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 46);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Firstname";
			// 
			// txtFirstname
			// 
			this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtFirstname->Location = System::Drawing::Point(232, 139);
			this->txtFirstname->Margin = System::Windows::Forms::Padding(2);
			this->txtFirstname->Multiline = true;
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(288, 55);
			this->txtFirstname->TabIndex = 19;
			// 
			// btnPresent
			// 
			this->btnPresent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPresent->Location = System::Drawing::Point(32, 309);
			this->btnPresent->Name = L"btnPresent";
			this->btnPresent->Size = System::Drawing::Size(488, 84);
			this->btnPresent->TabIndex = 23;
			this->btnPresent->Text = L"Present";
			this->btnPresent->UseVisualStyleBackColor = true;
			this->btnPresent->Click += gcnew System::EventHandler(this, &MyForm1::btnPresent_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(24, 71);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(207, 46);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Student ID";
			// 
			// txtStudentID
			// 
			this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtStudentID->Location = System::Drawing::Point(232, 71);
			this->txtStudentID->Margin = System::Windows::Forms::Padding(2);
			this->txtStudentID->Multiline = true;
			this->txtStudentID->Name = L"txtStudentID";
			this->txtStudentID->Size = System::Drawing::Size(288, 55);
			this->txtStudentID->TabIndex = 25;
			// 
			// MyForm1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 612);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtStudentID);
			this->Controls->Add(this->btnPresent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtFirstname);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnGoBack);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Attendance";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\portfolio\\Dziennik\\dziennik.accdb");

	void ConnectionDB() {
		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT StudentID,Firstname,Surname FROM UczniowieInfo";
			cmd->ExecuteNonQuery();

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			dataGridView1->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		ConnectionDB();
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			txtStudentID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			txtFirstname->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			txtSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
	private: System::Void btnPresent_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			DateTime datea = DateTime::Today;
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "INSERT INTO Obecnosc(StudentID, Was) VALUES (?, ?)";
			cmd->Parameters->AddWithValue("@StudentID", txtStudentID->Text);
			//cmd->Parameters->AddWithValue("@Date", datea.ToString("MM-dd-yyyy"));
			cmd->Parameters->AddWithValue("@Was",dateTimePicker1->Value);
			cmd->ExecuteNonQuery();

			conn->Close();
			MessageBox::Show("Record is Successfully Added", "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
			ConnectionDB();
		}
		catch (Exception^ ex) {
			conn->Close();
			MessageBox::Show(ex->Message, "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
