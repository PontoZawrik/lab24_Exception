#pragma once

namespace lab24Exception {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 22);
			this->textBox1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(13, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 275);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задание 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(379, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Список ошибок:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(378, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(192, 148);
			this->listBox1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(145, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(63, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Шаг:";
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBox4_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(76, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"До:";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBox3_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 208);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"От:";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBox2_MouseClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(365, 180);
			this->dataGridView1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(20, 358);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(256, 171);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Сброс";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 541);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	public:
		void GetData(String^ param) {
			this->textBox1->Text = "";
			this->textBox1->Text = param;
		}


	private: System::Void calc_func(double a, double b, double h) {
		table->Rows->Clear();

		double t = 0;
		DataRow^ row;
		for (double x = a; x <= b; x += h) {
			try {
				t = Math::Sqrt(Math::Pow(x, 3) - 1) / Math::Sqrt(Math::Pow(x, 2) - 1);
				if (Double::IsNaN(t)) {
					throw gcnew String("NaN (Not a Number)");
				}
				if (Double::IsInfinity(t)) {
					throw gcnew String("Infinity");
				}
			}
			catch (String^ e) {
				t = 0;
				listBox1->Items->Add(e);
			}
			catch (...) {
				t = 0;
				listBox1->Items->Add("Непредвиденная ошибка.");
			}
			finally {
				row = table->NewRow();
				row["x"] = x;
				row["y(x)"] = t;
				table->Rows->Add(row);
			}
		}
	}

	private: DataTable^ table;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		table = gcnew DataTable();
		table->Columns->Add("x", double::typeid);
		table->Columns->Add("y(x)", double::typeid);

		button3_Click(sender, System::EventArgs::Empty);

		dataGridView1->DataSource = table;
	}

	private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox2->Text = "";
	}
	private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox3->Text = "";
	}
	private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox4->Text = "";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double a = Double::Parse(textBox2->Text);
			double b = Double::Parse(textBox3->Text);
			double h = Double::Parse(textBox4->Text);
			calc_func(a, b, h);
		}
		catch (System::ArgumentNullException^ e) {
			listBox1->Items->Add("Пустая ссылка.");
		}
		catch (System::FormatException^ e) {
			listBox1->Items->Add("Введите вещественное число.");
		}
		catch (System::OverflowException^ e) {
			listBox1->Items->Add("Введите число подходящего размера.");
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		this->textBox2->Text = "0";
		this->textBox3->Text = "5";
		this->textBox4->Text = "0,1";

		button2_Click(sender, System::EventArgs::Empty);
	}
};
}
