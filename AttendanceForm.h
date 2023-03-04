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
	private: System::Windows::Forms::DataGridView^ dataGridViewAttendance;

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
			this->dataGridViewAttendance = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAttendance))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBack
			// 
			this->btnGoBack->Location = System::Drawing::Point(12, 12);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(77, 40);
			this->btnGoBack->TabIndex = 0;
			this->btnGoBack->Text = L"Go Back";
			this->btnGoBack->UseVisualStyleBackColor = true;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &MyForm1::btnGoBack_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(95, 19);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// dataGridViewAttendance
			// 
			this->dataGridViewAttendance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAttendance->Location = System::Drawing::Point(35, 99);
			this->dataGridViewAttendance->Name = L"dataGridViewAttendance";
			this->dataGridViewAttendance->RowHeadersWidth = 51;
			this->dataGridViewAttendance->RowTemplate->Height = 24;
			this->dataGridViewAttendance->Size = System::Drawing::Size(525, 286);
			this->dataGridViewAttendance->TabIndex = 2;
			/*DataGridViewCheckBoxColumn^ checkBoxColumn = gcnew DataGridViewCheckBoxColumn();
			checkBoxColumn->HeaderText = "Was Present Today?";
			checkBoxColumn->Name = "checkBoxColumn";
			dataGridViewAttendance->Columns->Add(checkBoxColumn);*/

			// 
			// MyForm1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 401);
			this->Controls->Add(this->dataGridViewAttendance);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnGoBack);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Attendance";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAttendance))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\portfolio\\Dziennik\\dziennik.accdb");

	/*void ConnectionDB() {
		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT * FROM Obecnosc";
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
	}*/
	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
