#pragma once
#include <vector>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Table2
	/// </summary>
	public ref class Table2 : public System::Windows::Forms::Form
	{
	public:
		Table2(void)
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
		~Table2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	public: System::Windows::Forms::DataGridView^ dataGridView2;

	public:
	public: System::Windows::Forms::GroupBox^ Lab2_task;
	public: System::Windows::Forms::Label^ Lab2_label_Dispersia;

	public: System::Windows::Forms::Label^ Lab2_label_ME;
	public: System::Windows::Forms::Label^ Lab2_label_kVariation;
	public: System::Windows::Forms::Label^ lab2_label_D_in;
	public: System::Windows::Forms::Label^ lab2_label_M_in;
	public: System::Windows::Forms::Label^ lab2_label_Y_in;
	public: System::Windows::Forms::Label^ label1;
	public:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::CheckedListBox^ checkedListBox_Tasks;
	public:

	public:	int iTaskNumber = 0;

	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Lab2_task = (gcnew System::Windows::Forms::GroupBox());
			this->Lab2_label_Dispersia = (gcnew System::Windows::Forms::Label());
			this->Lab2_label_ME = (gcnew System::Windows::Forms::Label());
			this->Lab2_label_kVariation = (gcnew System::Windows::Forms::Label());
			this->lab2_label_D_in = (gcnew System::Windows::Forms::Label());
			this->lab2_label_M_in = (gcnew System::Windows::Forms::Label());
			this->lab2_label_Y_in = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox_Tasks = (gcnew System::Windows::Forms::CheckedListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 573);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1155, 103);
			this->dataGridView1->TabIndex = 0;
			// 
			// chart1
			// 
			this->chart1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Cross;
			this->chart1->BorderlineWidth = 60;
			chartArea3->Name = L"ChartArea1";
			chartArea4->Name = L"ChartArea2";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->ChartAreas->Add(chartArea4);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(11, 12);
			this->chart1->Name = L"chart1";
			this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->chart1->Size = System::Drawing::Size(655, 342);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 427);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1153, 126);
			this->dataGridView2->TabIndex = 2;
			// 
			// Lab2_task
			// 
			this->Lab2_task->Location = System::Drawing::Point(672, 12);
			this->Lab2_task->Name = L"Lab2_task";
			this->Lab2_task->Size = System::Drawing::Size(493, 384);
			this->Lab2_task->TabIndex = 4;
			this->Lab2_task->TabStop = false;
			this->Lab2_task->Text = L"Задание:";
			// 
			// Lab2_label_Dispersia
			// 
			this->Lab2_label_Dispersia->AutoSize = true;
			this->Lab2_label_Dispersia->Location = System::Drawing::Point(10, 370);
			this->Lab2_label_Dispersia->Name = L"Lab2_label_Dispersia";
			this->Lab2_label_Dispersia->Size = System::Drawing::Size(84, 13);
			this->Lab2_label_Dispersia->TabIndex = 5;
			this->Lab2_label_Dispersia->Text = L"Дисперсия (D):";
			// 
			// Lab2_label_ME
			// 
			this->Lab2_label_ME->AutoSize = true;
			this->Lab2_label_ME->Location = System::Drawing::Point(10, 383);
			this->Lab2_label_ME->Name = L"Lab2_label_ME";
			this->Lab2_label_ME->Size = System::Drawing::Size(106, 13);
			this->Lab2_label_ME->TabIndex = 6;
			this->Lab2_label_ME->Text = L"Мат. Ожидание (M):";
			// 
			// Lab2_label_kVariation
			// 
			this->Lab2_label_kVariation->AutoSize = true;
			this->Lab2_label_kVariation->Location = System::Drawing::Point(10, 396);
			this->Lab2_label_kVariation->Name = L"Lab2_label_kVariation";
			this->Lab2_label_kVariation->Size = System::Drawing::Size(107, 13);
			this->Lab2_label_kVariation->TabIndex = 7;
			this->Lab2_label_kVariation->Text = L"Коэф. вариации (Y):";
			// 
			// lab2_label_D_in
			// 
			this->lab2_label_D_in->AutoSize = true;
			this->lab2_label_D_in->Location = System::Drawing::Point(129, 370);
			this->lab2_label_D_in->Name = L"lab2_label_D_in";
			this->lab2_label_D_in->Size = System::Drawing::Size(83, 13);
			this->lab2_label_D_in->TabIndex = 8;
			this->lab2_label_D_in->Text = L"lab2_label_D_in";
			// 
			// lab2_label_M_in
			// 
			this->lab2_label_M_in->AutoSize = true;
			this->lab2_label_M_in->Location = System::Drawing::Point(129, 383);
			this->lab2_label_M_in->Name = L"lab2_label_M_in";
			this->lab2_label_M_in->Size = System::Drawing::Size(84, 13);
			this->lab2_label_M_in->TabIndex = 9;
			this->lab2_label_M_in->Text = L"lab2_label_M_in";
			// 
			// lab2_label_Y_in
			// 
			this->lab2_label_Y_in->AutoSize = true;
			this->lab2_label_Y_in->Location = System::Drawing::Point(129, 396);
			this->lab2_label_Y_in->Name = L"lab2_label_Y_in";
			this->lab2_label_Y_in->Size = System::Drawing::Size(82, 13);
			this->lab2_label_Y_in->TabIndex = 10;
			this->lab2_label_Y_in->Text = L"lab2_label_Y_in";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(958, 557);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Таблица 2. \"Представление массивов\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(958, 411);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Таблица 1. \"Характеристики массивов\"";
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
			this->checkedListBox_Tasks->Location = System::Drawing::Point(1171, 427);
			this->checkedListBox_Tasks->Name = L"checkedListBox_Tasks";
			this->checkedListBox_Tasks->Size = System::Drawing::Size(120, 90);
			this->checkedListBox_Tasks->TabIndex = 24;
			this->checkedListBox_Tasks->SelectedValueChanged += gcnew System::EventHandler(this, &Table2::checkedListBox_Tasks_SelectedValueChanged);
			// 
			// Table2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1289, 687);
			this->Controls->Add(this->checkedListBox_Tasks);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lab2_label_Y_in);
			this->Controls->Add(this->lab2_label_M_in);
			this->Controls->Add(this->lab2_label_D_in);
			this->Controls->Add(this->Lab2_label_kVariation);
			this->Controls->Add(this->Lab2_label_ME);
			this->Controls->Add(this->Lab2_label_Dispersia);
			this->Controls->Add(this->Lab2_task);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Table2";
			this->Text = L"МПСЗИ - Лабораторная работа 1";
			this->Load += gcnew System::EventHandler(this, &Table2::Table2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();



		}
#pragma endregion
	
		bool isLab1Box = false, isLab2Box = false, isLab3Box = false, isLab4Box = false, isLab5Box = false;
		bool bIsEnabled_Task1 = false, bIsEnabled_Task2 = false, bIsEnabled_Task3 = false, bIsEnabled_Task4 = false, bIsEnabled_Task5 = false;

		int a = 10, b = 2;
private: System::Void Lab2_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//labsCLI->Lab2_ToolStripMenuItem;
}
private: System::Void Table2_Load(System::Object^ sender, System::EventArgs^ e) 
{

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
	bIsEnabled_Task1 = checkedListBox_Tasks->GetItemChecked(1);
	bIsEnabled_Task2 = checkedListBox_Tasks->GetItemChecked(2);
	bIsEnabled_Task3 = checkedListBox_Tasks->GetItemChecked(3);
	bIsEnabled_Task4 = checkedListBox_Tasks->GetItemChecked(4);
	bIsEnabled_Task5 = checkedListBox_Tasks->GetItemChecked(5);
	TasksVisible();
}

	   void TasksVisible()
	   {
		   if (iTaskNumber == 1)
		   {
			   if (!bIsEnabled_Task1)
			   {
				   for (int i = 0; i < 5; i++)
				   {
					   dataGridView2->Rows[i]->Visible = false;
				   }
			   }
			   else
			   {
				   for (int i = 0; i < 5; i++)
				   {
					   dataGridView2->Rows[i]->Visible = true;
				   }
			   }
			   if (!bIsEnabled_Task2)
			   {
				   for (int i = 5; i < 8; i++)
				   {
					   dataGridView2->Rows[i]->Visible = false;
				   }
			   }
			   else
			   {
				   for (int i = 5; i < 8; i++)
				   {
					   dataGridView2->Rows[i]->Visible = true;
				   }
			   }
			   if (!bIsEnabled_Task3)
			   {
				   for (int i = 0; i < dataGridView1->ColumnCount; i++)
				   {
					   dataGridView1->Columns[i]->Visible = false;
				   }
				   for (int i = 0; i < 6; i++)
				   {
					   dataGridView1->Rows[i]->Visible = false;
				   }
			   }
			   else
			   {
				   for (int i = 0; i < dataGridView1->ColumnCount; i++)
				   {
					   dataGridView1->Columns[i]->Visible = true;
				   }
				   for (int i = 0; i < 6; i++)
				   {
					   dataGridView1->Rows[i]->Visible = true;
				   }
			   }
			   if (!bIsEnabled_Task4)
			   {
				   dataGridView1->Columns[4]->Visible = false;
			   }
			   else
			   {
				   dataGridView1->Columns[4]->Visible = true;

				   if (!bIsEnabled_Task3 && bIsEnabled_Task4)
				   {
					   dataGridView1->Columns[4]->Visible = true;
					   for (int i = 0; i < 6; i++)
					   {
						   dataGridView1->Rows[i]->Visible = true;
					   }
				   }
			   }
			   if (!bIsEnabled_Task1 && !bIsEnabled_Task2)
			   {
				   dataGridView2->Visible = false;
				   label2->Visible = false;
			   }
			   else
			   {
				   dataGridView2->Visible = true;
				   label2->Visible = true;
			   }

			   if (!bIsEnabled_Task3 && !bIsEnabled_Task4)
			   {
				   dataGridView1->Visible = false;
				   label1->Visible = false;
			   }
			   else
			   {
				   dataGridView1->Visible = true;
				   label1->Visible = true;
			   }
			}
		   if (iTaskNumber == 2)
		   {

			   if (!bIsEnabled_Task1 && !bIsEnabled_Task2)
			   {
				   dataGridView1->Visible = false;
				   label1->Visible = false;
			   }
			   else
			   {
				   dataGridView1->Visible = true;
				   label1->Visible = true;
				   if (!bIsEnabled_Task1)
				   {
					  dataGridView1->Rows[0]->Visible = false;
				   }
				   else
				   {
					   dataGridView1->Rows[0]->Visible = true;
				   }
				   if (!bIsEnabled_Task2)
				   {
					   for (int i = 1; i < dataGridView1->RowCount-1; i++)
					   {
						   dataGridView1->Rows[i]->Visible = false;
					   }
				   }
				   else
				   {
					   for (int i = 1; i < dataGridView1->RowCount - 1; i++)
					   {
						   dataGridView1->Rows[i]->Visible = true;
					   }
				   }
			   }
			   if (!bIsEnabled_Task3 && !bIsEnabled_Task5)
			   {
				  dataGridView2->Visible = false;
				   label2->Visible = false;

				   Lab2_label_Dispersia->Visible = false;
				   lab2_label_D_in->Visible = false;
				   Lab2_label_kVariation->Visible = false;
				  lab2_label_Y_in->Visible = false;
				   Lab2_label_ME->Visible = false;
				   lab2_label_M_in->Visible = false;
			   }
			   else
			   {
				   dataGridView2->Visible = true;
				   label2->Visible = true;

				   if (!bIsEnabled_Task3)
				   {
					   for (int i = 0; i < 6; i++)
					   {
						   dataGridView2->Rows[i]->Visible = false;
					   }

				   }
				   else
				   {
					   for (int i = 0; i < 6; i++)
					   {
						   dataGridView2->Rows[i]->Visible = true;
					   }
					   Lab2_label_Dispersia->Visible = true;
					   lab2_label_D_in->Visible = true;
					   Lab2_label_kVariation->Visible = true;
					   lab2_label_Y_in->Visible = true;
					   Lab2_label_ME->Visible = true;
					   lab2_label_M_in->Visible = true;
				   }
				   if (!bIsEnabled_Task5)
				   {
					   for (int i = 6; i < dataGridView2->RowCount-1; i++)
					   {
						   this->dataGridView2->Rows[i]->Visible = false;
					   }

				   }
				   else
				   {
					   for (int i = 6; i < dataGridView2->RowCount-1; i++)
					   {
						   this->dataGridView2->Rows[i]->Visible = true;
					   }
				   }
			   }

			   if (!bIsEnabled_Task4)
			   {
				   this->chart1->Visible = false;
			   }
			   else
			   {
				   this->chart1->Visible = true;
			   }
		   }
		   if (iTaskNumber == 3)
		   {

			   if (!bIsEnabled_Task1 && !bIsEnabled_Task2)
			   {
				   dataGridView1->Visible = false;
				   label1->Visible = false;
			   }
			   else
			   {
				   dataGridView1->Visible = true;
				   label1->Visible = true;
				   if (!bIsEnabled_Task1)
				   {
					   dataGridView1->Rows[0]->Visible = false;
				   }
				   else
				   {
					   dataGridView1->Rows[0]->Visible = true;
				   }
				   if (!bIsEnabled_Task2)
				   {
					   for (int i = 1; i < dataGridView1->RowCount - 1; i++)
					   {
						   dataGridView1->Rows[i]->Visible = false;
					   }
				   }
				   else
				   {
					   for (int i = 1; i < dataGridView1->RowCount - 1; i++)
					   {
						   dataGridView1->Rows[i]->Visible = true;
					   }
				   }
			   }
			   if (!bIsEnabled_Task3 && !bIsEnabled_Task5)
			   {
				   dataGridView2->Visible = false;
				   label2->Visible = false;

				   Lab2_label_Dispersia->Visible = false;
				   lab2_label_D_in->Visible = false;
				   Lab2_label_kVariation->Visible = false;
				   lab2_label_Y_in->Visible = false;
				   Lab2_label_ME->Visible = false;
				   lab2_label_M_in->Visible = false;
			   }
			   else
			   {
				   dataGridView2->Visible = true;
				   label2->Visible = true;

				   if (!bIsEnabled_Task3)
				   {
					   for (int i = 0; i < 6; i++)
					   {
						   dataGridView2->Rows[i]->Visible = false;
					   }

				   }
				   else
				   {
					   for (int i = 0; i < 6; i++)
					   {
						   dataGridView2->Rows[i]->Visible = true;
					   }
					   Lab2_label_Dispersia->Visible = true;
					   lab2_label_D_in->Visible = true;
					   Lab2_label_kVariation->Visible = true;
					   lab2_label_Y_in->Visible = true;
					   Lab2_label_ME->Visible = true;
					   lab2_label_M_in->Visible = true;
				   }
				   if (!bIsEnabled_Task5)
				   {
					   for (int i = 6; i < dataGridView2->RowCount - 1; i++)
					   {
						   this->dataGridView2->Rows[i]->Visible = false;
					   }

				   }
				   else
				   {
					   for (int i = 6; i < dataGridView2->RowCount - 1; i++)
					   {
						   this->dataGridView2->Rows[i]->Visible = true;
					   }
				   }
			   }

			   if (!bIsEnabled_Task4)
			   {
				   this->chart1->Visible = false;
			   }
			   else
			   {
				   this->chart1->Visible = true;
			   }
		   }
	   }
};
}
