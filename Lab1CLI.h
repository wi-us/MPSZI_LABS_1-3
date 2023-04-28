#pragma once
#include <windows.h> 
#include "Functions.h"
#include "Graphik.h"
#include "Table1.h"
#include "Table2.h"
#include <vector>

vector<double>dVector;
vector<double>dVectorBuff;

vector<double>dSegment1;
vector<double>dSegment2;
vector<double>dSegment3;
vector<double>dSegment4;
vector<double>dSegment5;
vector<double>dSegment6;
vector<double>dSegment7;
vector<double>dSegment8;
vector<double>dSegment9;
vector<double>dSegment10;


namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab1CLI
	/// </summary>
	public ref class Lab1CLI : public System::Windows::Forms::Form
	{
	public:
		Lab1CLI(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			//MoreWindows
			//

			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lab1CLI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:














	public:

	public:




	private: System::Windows::Forms::ToolStripMenuItem^ Lab1_ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Lab2_ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Lab3_ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ Lab4_ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ Lab5_ToolStripMenuItem;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button_launch;
	public: System::Windows::Forms::CheckedListBox^ checkedListBox_Tasks;













	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Lab1_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Lab2_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Lab3_ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Lab4_ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Lab5_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button_launch = (gcnew System::Windows::Forms::Button());
			this->checkedListBox_Tasks = (gcnew System::Windows::Forms::CheckedListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->Lab1_ToolStripMenuItem,
					this->Lab2_ToolStripMenuItem, this->Lab3_ToolStripMenuItem1, this->Lab4_ToolStripMenuItem2, this->Lab5_ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(348, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Lab1_ToolStripMenuItem
			// 
			this->Lab1_ToolStripMenuItem->Name = L"Lab1_ToolStripMenuItem";
			this->Lab1_ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->Lab1_ToolStripMenuItem->Text = L"Работа 1";
			this->Lab1_ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab1CLI::Lab1_ToolStripMenuItem_Click_1);
			// 
			// Lab2_ToolStripMenuItem
			// 
			this->Lab2_ToolStripMenuItem->Name = L"Lab2_ToolStripMenuItem";
			this->Lab2_ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->Lab2_ToolStripMenuItem->Text = L"Работа 2";
			this->Lab2_ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab1CLI::Lab2_ToolStripMenuItem_Click_1);
			// 
			// Lab3_ToolStripMenuItem1
			// 
			this->Lab3_ToolStripMenuItem1->Name = L"Lab3_ToolStripMenuItem1";
			this->Lab3_ToolStripMenuItem1->Size = System::Drawing::Size(66, 20);
			this->Lab3_ToolStripMenuItem1->Text = L"Работа 3";
			this->Lab3_ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Lab1CLI::Lab3_ToolStripMenuItem1_Click);
			// 
			// Lab4_ToolStripMenuItem2
			// 
			this->Lab4_ToolStripMenuItem2->Name = L"Lab4_ToolStripMenuItem2";
			this->Lab4_ToolStripMenuItem2->Size = System::Drawing::Size(66, 20);
			this->Lab4_ToolStripMenuItem2->Text = L"Работа 4";
			// 
			// Lab5_ToolStripMenuItem
			// 
			this->Lab5_ToolStripMenuItem->Name = L"Lab5_ToolStripMenuItem";
			this->Lab5_ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->Lab5_ToolStripMenuItem->Text = L"Работа 5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Основной отрезок [a;b]";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Lab1CLI::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(187, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"a = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(187, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(12, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Количество элементов";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(225, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(185, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"N = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(12, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Округление до знака";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(225, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(167, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"prec = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(11, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Настройка отрезка";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(12, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Лямбда [0.25;2.0]";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(225, 205);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point(136, 206);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 17);
			this->label11->TabIndex = 21;
			this->label11->Text = L"dLambda = ";
			// 
			// button_launch
			// 
			this->button_launch->Location = System::Drawing::Point(225, 247);
			this->button_launch->Name = L"button_launch";
			this->button_launch->Size = System::Drawing::Size(100, 27);
			this->button_launch->TabIndex = 22;
			this->button_launch->Text = L"Запуск";
			this->button_launch->UseVisualStyleBackColor = true;
			this->button_launch->Click += gcnew System::EventHandler(this, &Lab1CLI::button_launch_Click);
			// 
			// checkedListBox_Tasks
			// 
			this->checkedListBox_Tasks->BackColor = System::Drawing::SystemColors::Control;
			this->checkedListBox_Tasks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox_Tasks->CheckOnClick = true;
			this->checkedListBox_Tasks->FormattingEnabled = true;
			this->checkedListBox_Tasks->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Выбрать все", L"Задание 1", L"Задание 2",
					L"Задание 3", L"Задание 4", L"Задание 5"
			});
			this->checkedListBox_Tasks->Location = System::Drawing::Point(15, 247);
			this->checkedListBox_Tasks->Name = L"checkedListBox_Tasks";
			this->checkedListBox_Tasks->Size = System::Drawing::Size(120, 90);
			this->checkedListBox_Tasks->TabIndex = 23;
			this->checkedListBox_Tasks->SelectedValueChanged += gcnew System::EventHandler(this, &Lab1CLI::checkedListBox_Tasks_SelectedValueChanged);
			// 
			// Lab1CLI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 347);
			this->Controls->Add(this->checkedListBox_Tasks);
			this->Controls->Add(this->button_launch);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Lab1CLI";
			this->Text = L"Моделирование ЛР";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Table2^ CurrentTable2;

		int iFirstNum = 0;
		int iLastNum = 0;
		bool bIsEnabled_Task1 = false, bIsEnabled_Task2 = false, bIsEnabled_Task3 = false, bIsEnabled_Task4 = false, bIsEnabled_Task5 = false;


		String^ DoSegmentName(vector<double> dV, bool isFirstNumberIncluded, bool isLastNumberIncluded)
		{
			String^ str;
			if (isFirstNumberIncluded)
			{
				str = str + "[";
			}
			else
			{
				str = str + "(";
			}
			str = str + dV[0] + " , " + dV[dV.size() - 1];
			if (isLastNumberIncluded)
			{
				str = str + "]";
			}
			else
			{
				str = str + ")";
			}

			return str;
		}
			
		void PrintSegmentInRow_Table1(Table2^ tbl, vector<double> dV, int RowNumber, String^ strRowName)
		{
			gtCheckRowCount:
			if (tbl->dataGridView1->RowCount <= RowNumber)
			{
				tbl->dataGridView1->RowCount++;
				goto gtCheckRowCount;
			}
			for (int i = 0; i < dV.size(); i++)
			{
				tbl->dataGridView1->Rows[RowNumber-1]->Cells[i]->Value = dV[i];
			}
			tbl->dataGridView1->Rows[RowNumber - 1]->HeaderCell->Value = strRowName;
		}

		void PrintRowInTable(Table2^ tbl,vector<double>dVec, int iBeginPos, int iEndPos, String^ strRowName)
		{
			if (tbl->dataGridView2->ColumnCount < iEndPos)
			{
				tbl->dataGridView2->ColumnCount = iEndPos;
			}

			tbl->dataGridView2->RowCount++;
			tbl->dataGridView2->Rows[tbl->dataGridView2->RowCount - 1]->HeaderCell->Value = strRowName;

			for (int i = iBeginPos; i < iEndPos; i++)
			{
				tbl->dataGridView2->Rows[tbl->dataGridView2->RowCount - 1]->Cells[i]->Value = dVec[i];
			}
		}

		void GiveCheckedTasksValues(Table2^ tbl)
		{
			for (int i = 0; i < 6; i++)
			{
				tbl->checkedListBox_Tasks->SetItemChecked(i, checkedListBox_Tasks->GetItemChecked(i));
			}

		}
		public: void Lab1(double dFirstValue, double dLastValue, int iPrecision, int iArraySize)
		{
			String^ strName;
			LabsMPSZI labs;

			Table1^ table1 = gcnew Table1();
			Table2^ table2 = gcnew Table2();
			Graphik^ graphik = gcnew Graphik();
			table2->iTaskNumber = 1;
			GiveCheckedTasksValues(table2);
			table2->Text = "Моделирование ЛР 1";
			labs.ClearVectors();
			//задание 1
			labs.dSegment1 = labs.SortVector(labs.CreateVector(labs.dSegment1, MAX_ARRAY1_SIZE_LAB1, 0.0, 1.0, iPrecision));
			labs.dSegment1[0] = 0.0;
			labs.dSegment1[labs.dSegment1.size() - 1] = 1.0;
			labs.iVec_CountNumbers.push_back(labs.dSegment1.size());

			labs.dSegment2 = labs.SortVector(labs.CreateVector(labs.dSegment2, MAX_ARRAY2_SIZE_LAB1, 2.0, 5.0, iPrecision));
			labs.dSegment2[0] = 2.0;
			labs.dSegment2[labs.dSegment2.size() - 1] = 5.0;
			labs.iVec_CountNumbers.push_back(labs.dSegment2.size());

			labs.dSegment3 = labs.SortVector(labs.CreateVector(labs.dSegment3, MAX_ARRAY3_SIZE_LAB1, -1.0, 1.0, iPrecision));
			labs.dSegment3[0] = -1.0;
			labs.dSegment3[labs.dSegment3.size() - 1] = 1.0;
			labs.iVec_CountNumbers.push_back(labs.dSegment3.size());

			for (int i = 0; i < MAX_ARRAY1_SIZE_LAB1; i++)
			{
				labs.dVecSegments.push_back(labs.RoundNumber((labs.GetUniformDistribution(0.0, 1.0, (labs.dSegment1[i])) * (dLastValue - dFirstValue) + dFirstValue), iPrecision));
			}
			for (int i = 0; i < MAX_ARRAY2_SIZE_LAB1; i++)
			{
				labs.dVecSegments.push_back(labs.RoundNumber((labs.GetUniformDistribution(2.0, 5.0, (labs.dSegment2[i])) * (dLastValue - dFirstValue) + dFirstValue), iPrecision));
			}
			for (int i = 0; i < MAX_ARRAY3_SIZE_LAB1; i++)
			{
				labs.dVecSegments.push_back(labs.RoundNumber((labs.GetUniformDistribution(-1.0, 1.0, (labs.dSegment3[i])) * (dLastValue - dFirstValue) + dFirstValue), iPrecision));
			}

			labs.dVecSegments = labs.SortVector(labs.dVecSegments);
			//задание 2
			labs.dSegment4 = labs.SortVector(labs.CreateVector(labs.dSegment4, 20, 0.0, 1.0, iPrecision));
			labs.dSegment4[0] = 0.0;
			labs.dSegment4[labs.dSegment4.size() - 1] = 1.0;
			labs.iVec_CountNumbers.push_back(labs.dSegment4.size());
			//задание 3 + 4
			labs.dSegment5 = labs.foo_Lab1_4(labs.dSegment5, iPrecision);//и тд

			table2->lab2_label_M_in->Hide();
			table2->lab2_label_D_in->Hide();
			table2->lab2_label_Y_in->Hide();
			table2->Lab2_label_ME->Hide();
			table2->Lab2_label_Dispersia->Hide();
			table2->Lab2_label_kVariation->Hide();
			table2->chart1->Hide();

			table2->Show();

			table1->dataGridView1->ColumnCount = 0;
			table2->dataGridView1->ColumnCount = 0;

			table2->dataGridView2->ColumnCount = labs.dVecSegments.size()+2;
			table2->dataGridView2->RowCount = 9;
			//
			// Вывод задания в интерфейс
			//

			String^ strTask;
			strTask =
				"Задание:\n" +


			"Задача # 1. Генерация псевдослучайных чисел\n" +
				"Сгенерировать 3 массива псевдослучайных чисел, равномерно" +
				"распределённых на промежутке[a, b], т.е.ССЧ[a, b].В первом массиве на" +
				"интервале[0, 1] количество чисел – 10, во втором на[2, 5] – 15, в третьем на [–1, 1] – 20." +
				"Вывести результаты в виде таблицы(без «прокруток») со всеми" +
				"характеристиками массивов.\n\n" +

				"Задача # 2. Моделирование случайного события\n" +
				"Сгенерировать ССЧ[0; 1] объёмом 20. Смоделировать событие A : xj ≤ 5.0" +
				".Отчет вывести в виде таблицы : именная строка состоит из номеров случайных чисел, первая значимая строка содержит xi, а во второй указано : произошло событие или нет," +
				"отметив этот факт знаком(+или –).\n\n"+

				"Задача # 3. Определение вероятности появления случайного события\n" +
				"Сгенерировать 6 массивов ССЧ[0; 1] по 10 значений случайных чисел в" +
				"каждом.Определить оценки математического ожидания и дисперсии по каждой" +
				"выборке(массиву) и вероятность появления события Ai(Ai : xij  ≤ 0.1× i) в" +
				"каждом из массивов i по формуле Ri = mi / 10, где mi – количество выполнений условия xij ≤ 0.1×i, ∀	∃i ." +
				"Результаты оформить в виде таблицы с именной строкой : номера" +
				"случайных чисел, mx, Dx, Ri, и шести соответствующих значимых строк по" +
				"каждой выборке при этом знаком(*) отметить элемент строки," +
				"способствовавший появлению события Ai.\n\n" +

				"Задача # 4. Моделирование полной группы событий\nВ условиях предыдущей задачи определить вероятность появления" +
				"каждого события Ai, как элементарного исхода во всей группе по формуле : Pi = Ri / (∑▒Rj)." +
				"Результаты оформить в виде таблицы с именной строкой : номера" +
				"случайных чисел, Pi и шести соответствующих значимых строк по каждой" +
				"выборке.Пояснить, что в результате решения данной задачи получена полная" +
				"группа событий, и объяснить – почему.";

			
			table2->Lab2_task->Text = strTask;

			//
			// Задание 1
			//
			for (int i = 1, k = 0; k < labs.dVecSegments.size(); i++, k++)
			{
				table2->dataGridView2->Rows[1]->Cells[i]->Value = labs.dVecSegments[k];
			}
			for (int i = 1, k = 0; k <labs.dSegment1.size(); i++, k++)
			{
				table2->dataGridView2->Rows[2]->Cells[i]->Value = labs.dSegment1[k];
			}
			for (int i = 1, k = 0; k < labs.dSegment2.size(); i++, k++)
			{
				table2->dataGridView2->Rows[3]->Cells[i]->Value = labs.dSegment2[k];
			}
			for (int i = 1, k = 0; k < labs.dSegment3.size(); i++, k++)
			{
				table2->dataGridView2->Rows[4]->Cells[i]->Value = labs.dSegment3[k];
			}
			
			table2->dataGridView2->Rows[1]->Cells[0]->Value = labs.dVecSegments.size();
			table2->dataGridView2->Rows[2]->Cells[0]->Value = labs.dSegment1.size();
			table2->dataGridView2->Rows[3]->Cells[0]->Value = labs.dSegment2.size();
			table2->dataGridView2->Rows[4]->Cells[0]->Value = labs.dSegment3.size();
			//
			// Задание 2
			//

				for (int i = 0; i < labs.dSegment4.size(); i++)
				{
					table2->dataGridView2->Rows[6]->Cells[i+1]->Value = labs.dSegment4[i];
					table2->dataGridView2->Rows[7]->Cells[i+1]->Value = Convert::ToChar(labs.foo_LoQ_05(labs.dSegment4[i]));
				}
			//
			// Задание 3
			//
				table2->dataGridView1->RowCount = 7;
				table2->dataGridView1->ColumnCount = labs.dSegment5.size();

				for (int i = 0; i < 6; i++)
				{

					for (int j = 0; j < labs.dSegment5.size(); j++)
					{
						table2->dataGridView1->Rows[i]->Cells[j]->Value = labs.dSegment5[j];
					}
					labs.dSegment5 = labs.foo_Lab1_4(labs.dSegment5, iPrecision);
				}

				table2->dataGridView1->Rows[6]->Cells[0]->Value = "Summ_Ri = ";
				table2->dataGridView1->Rows[6]->Cells[1]->Value = labs.dSummRi;
			//
			//названия строк
			//

				strName = "Задание 1";
				table2->dataGridView2->Rows[0]->HeaderCell->Value = strName;

				strName = "[" + labs.dVecSegments[0] + " , " + labs.dVecSegments[labs.dVecSegments.size()-1] + "]";
				table2->dataGridView2->Rows[1]->HeaderCell->Value = strName;

				strName = "[" + labs.dSegment1[0] + " , " + labs.dSegment1[labs.dSegment1.size() - 1] + "]";
				table2->dataGridView2->Rows[2]->HeaderCell->Value = strName;

				strName = "[" + labs.dSegment2[0] + " , " + labs.dSegment2[labs.dSegment2.size() - 1] + "]";
				table2->dataGridView2->Rows[3]->HeaderCell->Value = strName;

				strName = "[" + labs.dSegment3[0] + " , " + labs.dSegment3[labs.dSegment3.size() - 1] + "]";
				table2->dataGridView2->Rows[4]->HeaderCell->Value = strName;

				strName = "Задание 2";
				table2->dataGridView2->Rows[5]->HeaderCell->Value = strName;

				strName = "[" + labs.dSegment4[0] + " , " + labs.dSegment4[labs.dSegment4.size() - 1] + "]";
				table2->dataGridView2->Rows[6]->HeaderCell->Value = strName;

				strName = "X<=0.5";
				table2->dataGridView2->Rows[7]->HeaderCell->Value = strName;
				table2->dataGridView2->Rows[6]->Cells[0]->Value = labs.dSegment4.size();

				strName = "[0 , 1]";
				table2->dataGridView1->Rows[0]->HeaderCell->Value = strName;
				table2->dataGridView1->Rows[1]->HeaderCell->Value = strName;
				table2->dataGridView1->Rows[2]->HeaderCell->Value = strName;
				table2->dataGridView1->Rows[3]->HeaderCell->Value = strName;
				table2->dataGridView1->Rows[4]->HeaderCell->Value = strName;
				table2->dataGridView1->Rows[5]->HeaderCell->Value = strName;
			
			//
			//названия столбцов
			//
				table2->dataGridView2->Columns[0]->HeaderCell->Value = "N";
				for (int i = 1; i < labs.dVecSegments.size()+1; i++)
				{
					strName = "X" + (i);
					table2->dataGridView2->Columns[i]->HeaderCell->Value = strName;
				}
				table2->dataGridView1->Columns[0]->HeaderCell->Value = "N";
				table2->dataGridView1->Columns[1]->HeaderCell->Value = "M";
				table2->dataGridView1->Columns[2]->HeaderCell->Value = "D";
				table2->dataGridView1->Columns[3]->HeaderCell->Value = "mi";
				table2->dataGridView1->Columns[4]->HeaderCell->Value = "Pi";
				table2->dataGridView1->Columns[5]->HeaderCell->Value = "Ri";

				for (int i = 6; i < labs.dSegment5.size(); i++)
				{
					strName = "X" + (i - 5);
					table2->dataGridView1->Columns[i]->HeaderCell->Value = strName;
				}

				table2->dataGridView1->TopLeftHeaderCell->Value = "Отрезок / Хар-ки";
				table2->dataGridView2->TopLeftHeaderCell->Value = "Элемент / Отрезок";

			//
			//выравнивание ячеек
			//
				table2->dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
				table2->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
				table2->dataGridView2->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
				table2->dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;

			//
			//отображение выбранных заданий
			//

				if (!bIsEnabled_Task1)
				{
					for (int i = 0; i < 4; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}
				}
				if (!bIsEnabled_Task2)
				{
					for (int i = 5; i < 7; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}
				}
				if (!bIsEnabled_Task3)
				{
					for (int i = 0; i < table2->dataGridView1->ColumnCount; i++)
					{
						table2->dataGridView1->Columns[i]->Visible = false;
					}
					table2->dataGridView1->Columns[4]->Visible = true;
				}
				if (!bIsEnabled_Task4)
				{
					table2->dataGridView1->Columns[4]->Visible = false;
				}


		}
		public: void Lab2(double dFirstValue, double dLastValue, int iPrecision, int iArraySize)
		{
			String^ strName;
			LabsMPSZI labs;


			Table1^ table1 = gcnew Table1();
			Table2^ table2 = gcnew Table2();
			Graphik^ graphik = gcnew Graphik();
			table2->iTaskNumber = 2;
			GiveCheckedTasksValues(table2);

			table2->Text = "Моделирование ЛР 2";

			labs.ClearVectors();
			table1->dataGridView1->ColumnCount = 0;
			table2->dataGridView1->ColumnCount = 0;

			table2->Show();
			//
			//Задание
			//
			table2->Lab2_task->Text = "Задание:\n1. Сгенерировать ССЧ из 100 элементов на промежутке [a , b], значения которых выбраны на промежутке [0 , 30]. Разница между a и b = 1\n2. Разбить отрезок на 10 полуинтервалов [ai , bi), где a1 = a, ai+1 = bi, b10 = b ";
			//
			//Наполнение таблицы отрезками (Задание 1 + 2)
			//

			labs.dVector = labs.SortVector(labs.CreateVector(labs.dVector, iArraySize, dFirstValue, dLastValue, iPrecision));
			labs.dVector[0] = dFirstValue;
			labs.dVector[labs.dVector.size() - 1] = dLastValue;

			table2->dataGridView1->ColumnCount = labs.dVector.size();
			table2->dataGridView1->RowCount = 11;

			PrintSegmentInRow_Table1(table2, labs.dVector, 1, DoSegmentName(labs.dVector, true, true));

			labs.iVecPos.push_back( 0);

			for (int i = 1; i < 11; i++)
			{

				dSegment1 = labs.GetSegmentFromPos(dSegment1, labs.dVector, dFirstValue, dLastValue, labs.iVecPos[i - 1],dFirstValue + (1.0 / 10.0 * ((double)i)));
				labs.iVecPos.push_back(labs.iVecPos[i - 1] + dSegment1.size());

				PrintSegmentInRow_Table1(table2, dSegment1, i + 1, " ");
			}
			



			//
			//Создание таблицы 2.1 (Задание 3)
			//
			table2->dataGridView2->ColumnCount = 10;
			table2->dataGridView2->RowCount = 10;

			table2->dataGridView2->Rows[0]->HeaderCell->Value = "Xср";
			table2->dataGridView2->Rows[1]->HeaderCell->Value = "N";
			table2->dataGridView2->Rows[2]->HeaderCell->Value = "pi";
			table2->dataGridView2->Rows[3]->HeaderCell->Value = "Pi";
			table2->dataGridView2->Rows[4]->HeaderCell->Value = "FPi";
			table2->dataGridView2->Rows[5]->HeaderCell->Value = "fPi";
			table2->dataGridView2->Rows[6]->HeaderCell->Value = "Мат.Ожидание";
			table2->dataGridView2->Rows[7]->HeaderCell->Value = "Дисперсия";
			table2->dataGridView2->Rows[8]->HeaderCell->Value = "к.Вариации";

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[0]->Cells[i]->Value = labs.dVec_Xi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[1]->Cells[i]->Value = labs.iVec_CountNumbers[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[2]->Cells[i]->Value = labs.dVec_pi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[3]->Cells[i]->Value = labs.dVec_Pi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[4]->Cells[i]->Value = labs.RoundNumber(labs.dVec_FPi[i], iPrecision);
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[5]->Cells[i]->Value = labs.RoundNumber(labs.dVec_fPi[i], iPrecision);
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[6]->Cells[i]->Value = labs.RoundNumber(labs.dVec_ME[i], 5);
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[7]->Cells[i]->Value = labs.RoundNumber(labs.dVec_Disp[i], 5);
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[8]->Cells[i]->Value = labs.RoundNumber(labs.dVec_kVar[i], 5);
			}
			//
			//Добавление графиков (Задание 4)
			//
			using namespace System::Windows::Forms::DataVisualization::Charting;

			table2->chart1->Series->Clear();
			table2->chart1->ChartAreas->Clear();
			table2->chart1->Series->Add("f(x)");
			table2->chart1->Series->Add("F(x)");
			table2->chart1->Series["F(x)"]->Color = System::Drawing::Color::Red;
			table2->chart1->Series["f(x)"]->Color = System::Drawing::Color::Blue;
			
			table2->chart1->ChartAreas->Add("ChartArea1");
			table2->chart1->ChartAreas->Add("SecondChartArea");
			table2->chart1->Series["F(x)"]->ChartArea = "SecondChartArea";

			table2->chart1->Series["F(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			table2->chart1->Series["f(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

			table2->chart1->Series["f(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["F(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["f(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["F(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;

			table2->chart1->Series["F(x)"]->BorderWidth = 3;
			table2->chart1->Series["F(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			table2->chart1->Series["F(x)"]->MarkerSize = 8;

			table2->chart1->Series["f(x)"]->BorderWidth = 3;
			table2->chart1->Series["f(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			table2->chart1->Series["f(x)"]->MarkerSize = 8;

			

			table2->chart1->Series["f(x)"]->MarkerStep = 1;
			table2->chart1->Series["F(x)"]->MarkerStep = 1;

			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
			table2->chart1->ChartAreas[0]->AxisY->Maximum = 1;


			table2->chart1->Series["F(x)"]->IsValueShownAsLabel = true;
			table2->chart1->Series["f(x)"]->IsValueShownAsLabel = true;

			table2->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
			//table2->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = 0.1;

			table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Interval = 1;
			//table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Interval = 0.1;

			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Minimum = 0;
			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Maximum = 1;

			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Title = "pi";
			table2->chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Xi";

			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Title = "Pi";
			table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Title = "Xi";


			table2->chart1->Series["F(x)"]->LegendText = "F(x)=(Xi-a)/(b-a)";
			table2->chart1->Series["f(x)"]->LegendText = "f(x)=1/(b-a)";

			//границы в современном стиле
			table2->chart1->BorderSkin->SkinStyle = BorderSkinStyle::Sunken;
			table2->chart1->BorderSkin->PageColor = this->BackColor;
			//линии сетки покажем разными цветами
			table2->chart1->ChartAreas["SecondChartArea"]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDark;
			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlLight;
			table2->chart1->ChartAreas["ChartArea1"]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDark;
			table2->chart1->ChartAreas["ChartArea1"]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlLight;

			vector<double>dVecBuffChart;

			//table2->chart1->Series["f(x)"]->Points->AddXY(dFirstValue-1, labs.GetDifferentialUniformDistribution(dFirstValue, dLastValue, dFirstValue - 1));
			//table2->chart1->Series["F(x)"]->Points->AddXY(dFirstValue - 1, labs.GetUniformDistribution(dFirstValue, dLastValue, dFirstValue - 1));
				for (int i = 0; i < 10; i++)
				{
					table2->chart1->Series["f(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.dVec_pi[i]);
					table2->chart1->Series["F(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.dVec_Pi[i]);
				}
			//table2->chart1->Series["f(x)"]->Points->AddXY(dLastValue + 1, labs.GetDifferentialUniformDistribution(dFirstValue, dLastValue, dLastValue+1));
			//table2->chart1->Series["F(x)"]->Points->AddXY(dLastValue + 1, labs.GetUniformDistribution(dFirstValue, dLastValue, dLastValue + 1));

			/*
			for (int i = 0; i < 10; i++)
				{
					table2->chart1->Series["f(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.GetDifferentialUniformDistribution(labs.dVector[labs.iVecPos[i]], labs.dVector[labs.iVecPos[i+1]-1], labs.dVec_Xi[i]));
					table2->chart1->Series["F(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.GetUniformDistribution(labs.dVector[labs.iVecPos[i]], labs.dVector[labs.iVecPos[i + 1]-1], labs.dVec_Xi[i]));
				}
			*/
			table2->chart1->Series["f(x)"]->IsXValueIndexed = true;
			table2->chart1->Series["F(x)"]->IsXValueIndexed = true;
			//
			//Рассчет оценок мат ожидания, дисперсии и коэффициента вариации (Задание 5)
			//
			table2->lab2_label_M_in->Text = Convert::ToString(labs.MathExp(labs.dVector));
			table2->lab2_label_D_in->Text = Convert::ToString(labs.Dispersia(labs.dVector));
			table2->lab2_label_Y_in->Text = Convert::ToString(labs.kVariation(labs.dVector));
			//
			//названия строк
			//

			strName = "[" + (Convert::ToDouble(labs.dVector[0])) + " , " + (Convert::ToDouble(labs.dVector[labs.dVector.size()-1])) + "]";
			table2->dataGridView1->Rows[0]->HeaderCell->Value = strName;

			for (int i = 0; i < 9; i++)
			{
				strName = "[" + table2->dataGridView1->Rows[i + 1]->Cells[0]->Value + " , " + table2->dataGridView1->Rows[i + 2]->Cells[0]->Value + ")";
				table2->dataGridView1->Rows[i + 1]->HeaderCell->Value = strName;
				table2->dataGridView2->Columns[i]->HeaderCell->Value = strName;
			}
			strName = "[" + table2->dataGridView1->Rows[10]->Cells[0]->Value + " , " + (Convert::ToDouble(labs.dVector[labs.dVector.size() - 1])) + "]";

			table2->dataGridView1->Rows[10]->HeaderCell->Value = strName;
			table2->dataGridView2->Columns[9]->HeaderCell->Value = strName;
			//
			//названия столбцов
			//
			for (int i = 0; i < labs.dVector.size(); i++)
			{
				strName = "X" + (i+1);
				table2->dataGridView1->Columns[i]->HeaderCell->Value = strName;
			}
			table2->dataGridView1->TopLeftHeaderCell->Value = "Отрезок / Элемент";
			table2->dataGridView2->TopLeftHeaderCell->Value = "Хар-ки / Отрезок";

			//
			//выравнивание ячеек
			//
			table2->dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			table2->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			table2->dataGridView2->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			table2->dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			//
			//отображение выбранных заданий
			//
			if (!bIsEnabled_Task1 && !bIsEnabled_Task2)
			{
				table2->dataGridView1->Visible = false;
				table2->label1->Visible = false;
			}
			else
			{
				if (!bIsEnabled_Task1)
				{
					table2->dataGridView1->Rows[0]->Visible = false;
				}
				if (!bIsEnabled_Task2)
				{
					for (int i = 1; i < table2->dataGridView1->RowCount-1; i++)
					{
						table2->dataGridView1->Rows[i]->Visible = false;
					}
				}
			}
			if (!bIsEnabled_Task3 && !bIsEnabled_Task5)
			{
				table2->dataGridView2->Visible = false;
				table2->label1->Visible = false;

				table2->Lab2_label_Dispersia->Visible = false;
				table2->lab2_label_D_in->Visible = false;
				table2->Lab2_label_kVariation->Visible = false;
				table2->lab2_label_Y_in->Visible = false;
				table2->Lab2_label_ME->Visible = false;
				table2->lab2_label_M_in->Visible = false;
			}
			else
			{
				if (!bIsEnabled_Task3)
				{
					for (int i = 0; i < 6; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}
				}
				if (!bIsEnabled_Task5)
				{
					for (int i = 6; i < table2->dataGridView2->RowCount-1; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}

				}
			}
			
			if (!bIsEnabled_Task4)
			{
				table2->chart1->Visible = false;
			}
			
		}
		public: void Lab3(double dFirstValue, double dLastValue, int dPrecision, int iArraySize, double dLambd)
		{
			String^ strName;
			LabsMPSZI labs;
			double iPos = 0;

			Table1^ table1 = gcnew Table1();
			Table2^ table2 = gcnew Table2();
			Graphik^ graphik = gcnew Graphik();
			table2->iTaskNumber = 3;
			GiveCheckedTasksValues(table2);

			table2->Text = "Моделирование ЛР 3";

			table2->Show();

			labs.ClearVectors();
			table1->dataGridView1->ColumnCount = 0;
			table2->dataGridView1->ColumnCount = 0;

			labs.dVector = labs.SortVector(labs.CreateVector(labs.dVector, iArraySize, dFirstValue, dLastValue, dPrecision));
			labs.dVector[0] = dFirstValue;
			labs.dVector[labs.dVector.size() - 1] = dLastValue;

			for (int i = 0; i < labs.dVector.size(); i++)
			{
				labs.dVector[i] = labs.RoundNumber(labs.GetExponentialdistribution(dLambd, labs.dVector[i]), dPrecision);
			}

			
			table2->dataGridView1->ColumnCount = labs.dVector.size();
			table2->dataGridView1->RowCount = 11;

			double dSegMaxVal = ((labs.dVector[labs.dVector.size()-1] - labs.dVector[0]) / 10.0 + labs.dVector[0]);
			PrintSegmentInRow_Table1(table2, labs.dVector, 1, DoSegmentName(labs.dVector, true, true));

			labs.iVecPos.push_back(0);

			for (int i = 1; i < 11; i++)
			{

				labs.dVecSegments = labs.GetSegmentFromPos(labs.dVecSegments, labs.dVector, dFirstValue, dLastValue, labs.iVecPos[i - 1], dSegMaxVal*((double)i));
				labs.iVecPos.push_back(labs.iVecPos[i - 1] + labs.dVecSegments.size());

				labs.dVec_fPi[i - 1] = labs.RoundNumber(labs.GetDifferentialExponentialdistribution(dLambd, labs.dVec_Xi[i - 1]), dPrecision);

				PrintSegmentInRow_Table1(table2, labs.dVecSegments, i + 1, " ");
			}

			//
			//Добавление графиков (Задание 4)
			//
			using namespace System::Windows::Forms::DataVisualization::Charting;

			table2->chart1->Series->Clear();
			table2->chart1->ChartAreas->Clear();
			table2->chart1->Series->Add("f(x)");
			table2->chart1->Series->Add("F(x)");
			table2->chart1->Series["F(x)"]->Color = System::Drawing::Color::Red;
			table2->chart1->Series["f(x)"]->Color = System::Drawing::Color::Blue;

			table2->chart1->ChartAreas->Add("ChartArea1");
			table2->chart1->ChartAreas->Add("SecondChartArea");
			table2->chart1->Series["F(x)"]->ChartArea = "SecondChartArea";

			table2->chart1->Series["F(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			table2->chart1->Series["f(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

			table2->chart1->Series["f(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["F(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["f(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			table2->chart1->Series["F(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;

			table2->chart1->Series["F(x)"]->BorderWidth = 3;
			table2->chart1->Series["F(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			table2->chart1->Series["F(x)"]->MarkerSize = 4;

			table2->chart1->Series["f(x)"]->BorderWidth = 3;
			table2->chart1->Series["f(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			table2->chart1->Series["f(x)"]->MarkerSize = 4;

			table2->chart1->Series["f(x)"]->MarkerStep = 1;
			table2->chart1->Series["F(x)"]->MarkerStep = 1;

			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = dLambd;

			table2->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = 1;

			table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Interval = 1;
			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Interval = 1;

			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Minimum = 0;
			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Maximum = 1;

			table2->chart1->ChartAreas["ChartArea1"]->AxisY->Title = "f(x)"; 
			table2->chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Xi";

			table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Title = "F(x)";
			table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Title = "Xi";

			table2->chart1->Series["F(x)"]->LegendText = "F(x)=1-e^(-L*x)";
			table2->chart1->Series["f(x)"]->LegendText = "f(x)=L*e^(-L*x)";

			vector<double>dVecBuffChart;

			//dVecBuffChart = labs.dVector;

			//dVecBuffChart.push_back(labs.dMinNumber);



			//dVecBuffChart.push_back(labs.dMaxNumber);

			/*
						for (int i = 0; i < 100; i++)
			{
				dVecBuffChart.push_back(labs.RoundNumber((db*(double)i), PRECISION_LAB3));
			}
			*/

		/*
		dVecBuffChart.push_back(0.0);
			double db = labs.RoundNumber(labs.dVec_Xi[labs.dVec_Xi.size() - 1] - labs.dVec_Xi[labs.dVec_Xi.size() - 2], dPrecision);

			for (int i = 0, j = 1; i < labs.dVec_Xi.size(); i++, j++)
			{
				dVecBuffChart.push_back(labs.dVec_Xi[i]);
			}
		*/
			
			/*
			* 
			* for (int i = 0; i < 10; i++)
			{
				table2->chart1->Series["F(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.dVec_Pi[i]);
				table2->chart1->Series["f(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.dVec_pi[i]);
			}
			
			*/
			for (int i = 0; i < 10; i++)
			{
				table2->chart1->Series["F(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.GetExponentialdistribution(dLambd, labs.dVec_Xi[i]));
				table2->chart1->Series["f(x)"]->Points->AddXY(labs.dVec_Xi[i], labs.GetDifferentialExponentialdistribution(dLambd, labs.dVec_Xi[i]));
			}
			
			table2->chart1->Series["f(x)"]->IsXValueIndexed = true;
			table2->chart1->Series["F(x)"]->IsXValueIndexed = true;

			//
			//Создание таблицы 2.1 (Задание 3)
			//
			table2->dataGridView2->ColumnCount = 10;
			table2->dataGridView2->RowCount = 9;

			table2->dataGridView2->Rows[0]->HeaderCell->Value = "Xср";
			table2->dataGridView2->Rows[1]->HeaderCell->Value = "N";
			table2->dataGridView2->Rows[2]->HeaderCell->Value = "pi";
			table2->dataGridView2->Rows[3]->HeaderCell->Value = "Pi";
			table2->dataGridView2->Rows[4]->HeaderCell->Value = "FPi";
			table2->dataGridView2->Rows[5]->HeaderCell->Value = "fPi";
			table2->dataGridView2->Rows[6]->HeaderCell->Value = "Мат.Ожижание";
			table2->dataGridView2->Rows[7]->HeaderCell->Value = "Дисперсия";
			table2->dataGridView2->Rows[8]->HeaderCell->Value = "к.Вариации";

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[0]->Cells[i]->Value = labs.dVec_Xi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[1]->Cells[i]->Value = labs.iVec_CountNumbers[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[2]->Cells[i]->Value = labs.dVec_pi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[3]->Cells[i]->Value = labs.dVec_Pi[i];
			}
			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[4]->Cells[i]->Value = labs.RoundNumber(labs.dVec_FPi[i], dPrecision);
			}

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[5]->Cells[i]->Value = labs.RoundNumber(labs.dVec_fPi[i], dPrecision);
			}

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[6]->Cells[i]->Value = labs.RoundNumber(labs.dVec_ME[i], 5);
			}

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[7]->Cells[i]->Value = labs.RoundNumber(labs.dVec_Disp[i], 5);
			}

			for (int i = 0; i < 10; i++)
			{
				table2->dataGridView2->Rows[8]->Cells[i]->Value = labs.RoundNumber(labs.dVec_kVar[i], 5);
			}

			//
			//Рассчет оценок мат ожидания, дисперсии и коэффициента вариации (Задание 5)
			//
			table2->lab2_label_M_in->Text = Convert::ToString(labs.MathExp(labs.dVector));
			table2->lab2_label_D_in->Text = Convert::ToString(labs.Dispersia(labs.dVector));
			table2->lab2_label_Y_in->Text = Convert::ToString(labs.kVariation(labs.dVector));
			//
			//названия строк
			//

			strName = "[" + (Convert::ToDouble(labs.dVector[0])) + " , " + (Convert::ToDouble(labs.dVector[labs.dVector.size() - 1])) + "] ";
			table2->dataGridView1->Rows[0]->HeaderCell->Value = strName;


			for (int i = 0; i < 9; i++)
			{
				strName = "[" + table2->dataGridView1->Rows[i + 1]->Cells[0]->Value + " , " + table2->dataGridView1->Rows[i+2]->Cells[0]->Value + ") ";
				table2->dataGridView1->Rows[i + 1]->HeaderCell->Value = strName;
				table2->dataGridView2->Columns[i]->HeaderCell->Value = strName;
			}
			strName = "[" + table2->dataGridView1->Rows[10]->Cells[0]->Value + " , " + (Convert::ToDouble(labs.dVector[labs.dVector.size()-1])) + "] ";

			table2->dataGridView1->Rows[10]->HeaderCell->Value = strName;
			table2->dataGridView2->Columns[9]->HeaderCell->Value = strName;
			bIsEnabled_Task1 = false;
			bIsEnabled_Task2 - false;
			//
			//названия столбцов
			//
			for (int i = 0; i < labs.dVector.size(); i++)
			{
				strName = "X" + (i + 1);
				table2->dataGridView1->Columns[i]->HeaderCell->Value = strName;
			}
			table2->dataGridView1->TopLeftHeaderCell->Value = "Отрезок / Элемент";
			table2->dataGridView2->TopLeftHeaderCell->Value = "Хар-ки / Отрезок";
			//
			//выравнивание ячеек
			//
			table2->dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			table2->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			table2->dataGridView2->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			table2->dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;

			table2->Show();
			//
			//отображение выбранных заданий
			//
			if (!bIsEnabled_Task1 && !bIsEnabled_Task2)
			{
				table2->dataGridView1->Visible = false;
				table2->label1->Visible = false;
			}
			else
			{
				if (!bIsEnabled_Task1)
				{
					table2->dataGridView1->Rows[0]->Visible = false;
				}
				if (!bIsEnabled_Task2)
				{
					for (int i = 1; i < table2->dataGridView1->RowCount - 1; i++)
					{
						table2->dataGridView1->Rows[i]->Visible = false;
					}
				}
			}
			if (!bIsEnabled_Task3 && !bIsEnabled_Task5)
			{
				table2->dataGridView2->Visible = false;
				table2->label1->Visible = false;

				table2->Lab2_label_Dispersia->Visible = false;
				table2->lab2_label_D_in->Visible = false;
				table2->Lab2_label_kVariation->Visible = false;
				table2->lab2_label_Y_in->Visible = false;
				table2->Lab2_label_ME->Visible = false;
				table2->lab2_label_M_in->Visible = false;
			}
			else
			{
				if (!bIsEnabled_Task3)
				{
					for (int i = 0; i < 6; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}
				}
				if (!bIsEnabled_Task5)
				{
					for (int i = 6; i < table2->dataGridView2->RowCount - 1; i++)
					{
						table2->dataGridView2->Rows[i]->Visible = false;
					}

				}
			}

			if (!bIsEnabled_Task4)
			{
				table2->chart1->Visible = false;
			}
		}

		void Lab4()
		{
			//очистка векторов
			//инициализации окна
			//Задание 1: y=a*x+b+sigma0
			/*
			* Центрированная случайная величина Y — это разность между данной случайной величиной X и её математическим ожиданием M(X), то есть Y = X − M(X). 
			* Математическое ожидание центрированной случайной величины Y равно нулю, а дисперсия — дисперсии данной случайной величины: M(Y) = 0, D(Y) = D(X). 
			* Функция распределения FY(x) центрированной случайной величины Y связана с функцией распределения F(x) исходной случайной величины.
			*/
			//y=a*x+b+(x-M(x))
			// 
			// Задание 2
			//x-M(x) Э [-1;1], N=10
			//

		}

		double a = 0.0, b = 0.0, prec = 0.0, dLambda = 0.0;
		int N = 0;

		void SetValues()
		{
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			N = Convert::ToInt32(textBox3->Text);
			prec = Convert::ToDouble(textBox4->Text);
			dLambda = Convert::ToDouble(textBox5->Text);
		}

	   bool isLab1Box = false, isLab2Box = false, isLab3Box = false, isLab4Box = false, isLab5Box = false;

	   bool CheckLabValues()
	   {
		   textBox1->Text = textBox1->Text->Replace('.', ',');
		   textBox2->Text = textBox2->Text->Replace('.', ',');
		   textBox3->Text = textBox3->Text->Replace('.', ',');
		   textBox4->Text = textBox4->Text->Replace('.', ',');
		   textBox5->Text = textBox5->Text->Replace('.', ',');

		   String^ StrError;
		   double a_check = Convert::ToDouble(textBox1->Text);
		   double b_check = Convert::ToDouble(textBox2->Text);
		   int N_check = Convert::ToDouble(textBox3->Text);
		   int prec_check = Convert::ToDouble(textBox4->Text);
		   double dLambda_check = Convert::ToDouble(textBox5->Text);

		   if (isLab1Box)
		   {
			  
		   }
		   if (isLab2Box)
		   {
			   if (a_check > b_check)
			   {
				   swap(a_check, b_check);
			   }
			   if (a_check < 0 || a_check > 29)
			   {
				   StrError = StrError + "! Допустимое значение a: 0 <= a < 30\n";
			   }
			   if (b_check < 1 || b_check > 30)
			   {
				   StrError = StrError + "! Допустимое значение b: 0 < b <= 30\n";
			   }
			   if (abs(b_check - a_check) != 1)
			   {
				   StrError = StrError + "! Разница между a и b должна быть 1\n";
			   }
		   }
		   if (isLab3Box)
		   {
			   if (dLambda_check < 0.25 || dLambda_check > 2.0)
			   {
				   StrError = StrError + "! Допустимое значение dLambda: 0.25 <= b <= 2.0\n";
			   }
		   }
		   if (isLab4Box)
		   {

		   }
		   if (isLab5Box)
		   {

		   }

		   if (String::IsNullOrEmpty(StrError))
		   {
			   return true;
		   }
		   else
		   {
			   MessageBox::Show(StrError, L"WRONG VALUE", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   return false;
		   }

	   }
	   
	   void ResetChooseLabBoxes()
	   {
		   isLab1Box = false; 
		   isLab2Box = false; 
		   isLab3Box = false; 
		   isLab4Box = false; 
		   isLab5Box = false;

		   textBox1->ReadOnly = false;
		   textBox2->ReadOnly = false;
		   textBox3->ReadOnly = false;
		   textBox4->ReadOnly = false;
		   textBox5->ReadOnly = false;
	   }

private: System::Void Lab1_ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	ResetChooseLabBoxes();
	isLab1Box = true;

	textBox1->Text = Convert::ToString(MIN_NUMBER_LAB1);
	textBox2->Text = Convert::ToString(MAX_NUMBER_LAB1);
	textBox3->Text = Convert::ToString(45);
	textBox4->Text = Convert::ToString(PRECISION_LAB1);
	textBox5->Text = Convert::ToString(NULL);
	

	textBox3->ReadOnly = true;
	textBox5->ReadOnly = true;
}	

private: System::Void Lab2_ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	ResetChooseLabBoxes();
	isLab2Box = true;

	textBox1->Text = Convert::ToString(MIN_NUMBER_LAB2);
	textBox2->Text = Convert::ToString(MAX_NUMBER_LAB2);
	textBox3->Text = Convert::ToString(MAX_ARRAY_SIZE_LAB2);
	textBox4->Text = Convert::ToString(PRECISION_LAB2);
	textBox5->Text = Convert::ToString(NULL);

	textBox3->ReadOnly = true;
	textBox5->ReadOnly = true;
}
private: System::Void Lab3_ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ResetChooseLabBoxes();
	isLab3Box = true;

	textBox1->Text = Convert::ToString(MIN_NUMBER_LAB3);
	textBox2->Text = Convert::ToString(MAX_NUMBER_LAB3);
	textBox3->Text = Convert::ToString(MAX_ARRAY_SIZE_LAB3);
	textBox4->Text = Convert::ToString(PRECISION_LAB3);
	textBox5->Text = Convert::ToString(2.0);
	
	textBox1->ReadOnly = true;
	textBox2->ReadOnly = true;
	textBox3->ReadOnly = true;


}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void button_launch_Click(System::Object^ sender, System::EventArgs^ e) 
{

	bIsEnabled_Task1 = checkedListBox_Tasks->GetItemChecked(1);
	bIsEnabled_Task2 = checkedListBox_Tasks->GetItemChecked(2);
	bIsEnabled_Task3 = checkedListBox_Tasks->GetItemChecked(3);
	bIsEnabled_Task4 = checkedListBox_Tasks->GetItemChecked(4);
	bIsEnabled_Task5 = checkedListBox_Tasks->GetItemChecked(5);

	if (CheckLabValues())
	{
		SetValues();
		if (isLab1Box)
		{
			Lab1(a, b, prec, N);
		}
		if (isLab2Box)
		{
			Lab2(a, b, prec, N);
		}
		if (isLab3Box)
		{
			Lab3(a, b, prec, N, dLambda);
		}
		if (isLab4Box)
		{
			//lab4
		}
		if (isLab5Box)
		{
			//lab5
		}
	}
}

private: System::Void checkedListBox_Tasks_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkedListBox_Tasks->SelectedItem == checkedListBox_Tasks->Items[0])
	{
		if (checkedListBox_Tasks->GetItemChecked(0) == true)
		{
			for (int i = 0; i < 6; i++)
			{
				checkedListBox_Tasks->SetItemChecked(i, true);
			}
		}
		else
		{
			for (int i = 0; i < 6; i++)
			{
				checkedListBox_Tasks->SetItemChecked(i, false);
			}
		}
		
	}
}

};

}
