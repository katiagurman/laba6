#pragma once

#include <cstdlib>
#include <ctime>

const int n = 10;
int array[n];
const int rows = 3, columns = 3;
int twoDimensionalArray[rows][columns];

namespace laba6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(4, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 462);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->richTextBox2);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(724, 433);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(422, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Знайти найбільший елемент";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(246, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Сортувати масив";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Згенерувати масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(465, 207);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 3;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(246, 86);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(140, 157);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(38, 86);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(140, 157);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(633, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Знайти найбільший елемент одновимірного масиву. Виконати сортування елементів мас"
				L"иву за\r\nзростанням, використовуючи метод обміну.";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->richTextBox4);
			this->tabPage2->Controls->Add(this->richTextBox3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(724, 433);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(347, 274);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 25);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Поміняти місцями";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 332);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 27);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Знайти найменший елемент";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(68, 277);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Згенерувати масив";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(345, 84);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(168, 166);
			this->richTextBox4->TabIndex = 2;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(68, 83);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(169, 167);
			this->richTextBox3->TabIndex = 1;
			this->richTextBox3->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(564, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Знайти найменший елемент двовимірного масиву і поміняти його місцями з останнім.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 466);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Seed the random number generator
	std::srand(std::time(nullptr));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 201 - 100;
	}

	for (int i = 0; i < n; ++i) {
		richTextBox1->AppendText(array[i].ToString() + ", ");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int step = 0; step < n; ++step) {

		// loop to compare array elements
		for (int i = 0; i < n - step; ++i) {

			// compare two adjacent elements
			// change > to < to sort in descending order
			if (array[i] > array[i + 1]) {

				// swapping elements if elements
				// are not in the intended order
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		richTextBox2->AppendText(array[i].ToString() + ", ");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int max = array[0];
	for (int i = 0; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	textBox1->AppendText(max.ToString());
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Seed the random number generator
	std::srand(std::time(nullptr));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			twoDimensionalArray[i][j] = rand() % 201 - 100;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			richTextBox3->AppendText(twoDimensionalArray[i][j].ToString() + ",");
		}
		richTextBox3->AppendText("\n");
	}
}
int min = twoDimensionalArray[0][0];
int minRow = 0, minColumn = 0;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (min > twoDimensionalArray[i][j]) {
				min = twoDimensionalArray[i][j];
				minRow = i;
				minColumn = j;
			}
		}
	}
	textBox2->AppendText(min.ToString());
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	twoDimensionalArray[minRow][minColumn] = twoDimensionalArray[2][2];
	twoDimensionalArray[2][2] = min;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			richTextBox4->AppendText(twoDimensionalArray[i][j].ToString() + ",");
		}
		richTextBox4->AppendText("\n");
	}
}
};
}
