#pragma once

namespace Dziennik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Podsumowanie informacji o StudentsInfo
	/// </summary>
	public ref class StudentsInfo : public System::Windows::Forms::Form
	{
	public:
		StudentsInfo(void)
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
		~StudentsInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ txtPostCode;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTelephone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFirstname;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtStudentID;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnMainMenu;
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::DataGridView^ dataGridView2;







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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPostCode = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTelephone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnMainMenu = (gcnew System::Windows::Forms::Button());
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(710, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(245, 58);
			this->label6->TabIndex = 24;
			this->label6->Text = L"PostCode";
			// 
			// txtPostCode
			// 
			this->txtPostCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPostCode->Location = System::Drawing::Point(987, 188);
			this->txtPostCode->Multiline = true;
			this->txtPostCode->Name = L"txtPostCode";
			this->txtPostCode->Size = System::Drawing::Size(389, 67);
			this->txtPostCode->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(710, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 58);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Address";
			// 
			// txtAddress
			// 
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtAddress->Location = System::Drawing::Point(987, 100);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(389, 67);
			this->txtAddress->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(710, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(263, 58);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Telephone";
			// 
			// txtTelephone
			// 
			this->txtTelephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtTelephone->Location = System::Drawing::Point(987, 266);
			this->txtTelephone->Multiline = true;
			this->txtTelephone->Name = L"txtTelephone";
			this->txtTelephone->Size = System::Drawing::Size(389, 67);
			this->txtTelephone->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(29, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 58);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Surname";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSurname->Location = System::Drawing::Point(306, 268);
			this->txtSurname->Multiline = true;
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(383, 67);
			this->txtSurname->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 58);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Firstname";
			// 
			// txtFirstname
			// 
			this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtFirstname->Location = System::Drawing::Point(306, 184);
			this->txtFirstname->Multiline = true;
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(383, 67);
			this->txtFirstname->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(29, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 58);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Student ID";
			// 
			// txtStudentID
			// 
			this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtStudentID->Location = System::Drawing::Point(306, 100);
			this->txtStudentID->Multiline = true;
			this->txtStudentID->Name = L"txtStudentID";
			this->txtStudentID->Size = System::Drawing::Size(383, 67);
			this->txtStudentID->TabIndex = 13;
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSearch->ForeColor = System::Drawing::SystemColors::Menu;
			this->txtSearch->Location = System::Drawing::Point(135, 6);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(554, 88);
			this->txtSearch->TabIndex = 25;
			this->txtSearch->Text = L"Search";
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &StudentsInfo::txtSearch_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdd->Location = System::Drawing::Point(695, 5);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(95, 88);
			this->btnAdd->TabIndex = 26;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StudentsInfo::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnUpdate->Location = System::Drawing::Point(796, 6);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(148, 88);
			this->btnUpdate->TabIndex = 27;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnReset->Location = System::Drawing::Point(948, 5);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(137, 88);
			this->btnReset->TabIndex = 28;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDelete->Location = System::Drawing::Point(1091, 7);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 88);
			this->btnDelete->TabIndex = 29;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnMainMenu
			// 
			this->btnMainMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMainMenu->Location = System::Drawing::Point(1234, 7);
			this->btnMainMenu->Name = L"btnMainMenu";
			this->btnMainMenu->Size = System::Drawing::Size(142, 88);
			this->btnMainMenu->TabIndex = 30;
			this->btnMainMenu->Text = L"Main Menu";
			this->btnMainMenu->UseVisualStyleBackColor = true;
			// 
			// btnGoBack
			// 
			this->btnGoBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnGoBack->Location = System::Drawing::Point(0, 6);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(129, 90);
			this->btnGoBack->TabIndex = 31;
			this->btnGoBack->Text = L"Go Back";
			this->btnGoBack->UseVisualStyleBackColor = true;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &StudentsInfo::btnGoBack_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(10, 343);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1365, 410);
			this->dataGridView2->TabIndex = 32;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentsInfo::dataGridView2_CellClick);
			// 
			// StudentsInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 753);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnGoBack);
			this->Controls->Add(this->btnMainMenu);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPostCode);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTelephone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtFirstname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtStudentID);
			this->Name = L"StudentsInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentsInfo";
			this->Load += gcnew System::EventHandler(this, &StudentsInfo::StudentsInfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
			cmd->CommandText = "SELECT * FROM UczniowieInfo";
			cmd->ExecuteNonQuery();

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			dataGridView2->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void StudentsInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		ConnectionDB();
	}	

	private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			txtStudentID->Text = dataGridView2->SelectedRows[0]->Cells[0]->Value->ToString();	//wybieramy 1 wartoœæ z 1 rzedu i wpisujemy j¹ do 1 pola dostêpnego w formularzu
			txtFirstname->Text = dataGridView2->SelectedRows[0]->Cells[1]->Value->ToString();
			txtSurname->Text = dataGridView2->SelectedRows[0]->Cells[2]->Value->ToString();
			txtAddress->Text = dataGridView2->SelectedRows[0]->Cells[3]->Value->ToString();
			txtPostCode->Text = dataGridView2->SelectedRows[0]->Cells[4]->Value->ToString();
			txtTelephone->Text = dataGridView2->SelectedRows[0]->Cells[5]->Value->ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT * FROM UczniowieInfo WHERE StudentID LIKE '%' + ? + '%' OR Firstname LIKE '%' + ? + '%' OR Surname LIKE '%' + ? + '%'";
			cmd->Parameters->AddWithValue("@StudentID", txtSearch->Text);
			cmd->Parameters->AddWithValue("@Firstname", txtSearch->Text);
			cmd->Parameters->AddWithValue("@Surname", txtSearch->Text);
			cmd->ExecuteNonQuery();

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			int checker = Convert::ToInt32(dt->Rows->Count.ToString());
			dataGridView2->DataSource = dt;
			conn->Close();
			if (checker == 0) {
				MessageBox::Show("No record found", "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ AccessDatabase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			conn->Close();
		}
	}
};
}
