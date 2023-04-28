#pragma once
#include "C:\Users\wiusm\source\repos\yeye\Functions.h"
#include "Graphik.h"
#include "Table1.h"
#include "Table2.h"
#include <vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Project5;


struct test
{

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

	int iFirstNum = 0;
	int iLastNum = 0;

	void Lab2()
	{



		String^ strName = '[' + iFirstNum + " , " + iLastNum + ']';
		LabsMPSZI labs;
		labs.Lab2();
		//
		//Задание
		//
		table2->Lab2_task->Text = "Задание:\n1. Сгенерировать ССЧ из 100 элементов на промежутке [a , b], значения которых выбраны на промежутке [0 , 30]. Разница между a и b = 1\n2. Разбить отрезок на 10 полуинтервалов [ai , bi), где a1 = a, ai+1 = bi, b10 = b ";
		//
		//Наполнение таблицы отрезками (Задание 1 + 2)
		//
		table2->dataGridView1->ColumnCount = labs.dVector.size();
		table2->dataGridView1->RowCount = 11;
		for (int j = 0; j < labs.dVector.size(); j++)
		{
			table2->dataGridView1->Rows[0]->Cells[j]->Value = Convert::ToDouble(labs.dVector[j]);
		}

		int iPos = 0;
		for (int i = 1; i < 11; i++)
		{

			dSegment1 = labs.FillSegment(labs.dVector, dSegment1, iPos, (double)labs.iMinNumber + (1.0 / 10.0 * ((double)i)));
			iPos = iPos + dSegment1.size();

			for (int j = 0; j < dSegment1.size(); j++)
			{
				table2->dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToDouble(dSegment1[j]);
			}

		}
		//
		//Создание таблицы 2.1 (Задание 3)
		//
		table2->dataGridView2->ColumnCount = 10;
		table2->dataGridView2->RowCount = 5;

		table2->dataGridView2->Rows[0]->HeaderCell->Value = "Xср";
		table2->dataGridView2->Rows[1]->HeaderCell->Value = "N";
		table2->dataGridView2->Rows[2]->HeaderCell->Value = "pi";
		table2->dataGridView2->Rows[3]->HeaderCell->Value = "Pi";
		table2->dataGridView2->Rows[4]->HeaderCell->Value = "FPi";

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
			table2->dataGridView2->Rows[4]->Cells[i]->Value = labs.RoundNumber(labs.dVec_FPi[i], PRECISION_LAB2);
		}
		//
		//Добавление графиков (Задание 4)
		//
		using namespace System::Windows::Forms::DataVisualization::Charting;

		table2->chart1->Series->Clear();
		table2->chart1->Series->Add("f(x)");
		table2->chart1->Series->Add("F(x)");
		table2->chart1->Series["F(x)"]->Color = System::Drawing::Color::Red;
		table2->chart1->Series["f(x)"]->Color = System::Drawing::Color::Blue;

		table2->chart1->ChartAreas->Add("SecondChartArea");
		table2->chart1->Series["F(x)"]->ChartArea = "SecondChartArea";

		table2->chart1->Series["F(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		table2->chart1->Series["f(x)"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;

		table2->chart1->Series["f(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
		table2->chart1->Series["F(x)"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
		table2->chart1->Series["f(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
		table2->chart1->Series["F(x)"]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;

		vector<double>dVecBuffChart;

		table2->chart1->Series["F(x)"]->BorderWidth = 3;
		table2->chart1->Series["F(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
		table2->chart1->Series["F(x)"]->MarkerSize = 8;

		table2->chart1->Series["f(x)"]->BorderWidth = 3;
		table2->chart1->Series["f(x)"]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
		table2->chart1->Series["f(x)"]->MarkerSize = 8;

		table2->chart1->ChartAreas[0]->AxisY->Minimum = 0;
		table2->chart1->ChartAreas[0]->AxisY->Maximum = 1;

		//table2->chart1->ChartAreas[0]->AxisX->Minimum = MIN_NUMBER_LAB2 - 1;
		//table2->chart1->ChartAreas[0]->AxisX->Maximum = MAX_NUMBER_LAB2 + 1;

		//table2->chart1->ChartAreas[0]->AxisX->Interval = pow(10.0,-1*PRECISION_LAB2);
		//table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Interval = pow(10.0, -1 * PRECISION_LAB2);

		table2->chart1->ChartAreas[0]->AxisX->Interval = 1;
		table2->chart1->ChartAreas[0]->AxisY->Interval = 1;
		table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Interval = 1;
		table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Interval = 1;

		table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Minimum = 0;
		table2->chart1->ChartAreas["SecondChartArea"]->AxisY->Maximum = 1;

		//table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Minimum = MIN_NUMBER_LAB2 - 1;
		//table2->chart1->ChartAreas["SecondChartArea"]->AxisX->Maximum = MAX_NUMBER_LAB2 + 1;


		//dVecBuffChart.push_back(labs.iMinNumber - 1);
		dVecBuffChart.push_back(MIN_NUMBER_LAB2);

		dVecBuffChart.push_back(labs.iMinNumber);
		for (double i = 0; i < labs.dVec_Xi.size(); i++)
		{
			dVecBuffChart.push_back(labs.dVec_Xi[i]);
		}
		dVecBuffChart.push_back(labs.iMaxNumber);
		dVecBuffChart.push_back(labs.iMaxNumber + 1);
		dVecBuffChart.push_back(MAX_NUMBER_LAB2);



		for (int i = 0; i < dVecBuffChart.size(); i++)
		{
			table2->chart1->Series["F(x)"]->Points->AddXY(dVecBuffChart[i], labs.GetUniformDistribution(labs.iMinNumber, labs.iMaxNumber, dVecBuffChart[i]));
			table2->chart1->Series["f(x)"]->Points->AddXY(dVecBuffChart[i], labs.GetDifferentialUniformDistribution(labs.iMinNumber, labs.iMaxNumber, dVecBuffChart[i]));
		}
		table2->chart1->Series["f(x)"]->IsXValueIndexed = true;
		table2->chart1->Series["F(x)"]->IsXValueIndexed = true;

		//table2->chart1->Series["f(x)"]->IsValueShownAsLabel = true;
		//table2->chart1->Series["F(x)"]->IsValueShownAsLabel = true;

		//table2->chart1->Series["F(x)"]->Points->AddXY(labs.iMaxNumber, -1);
		//table2->chart1->Series["F(x)"]->Points->AddXY(labs.iMaxNumber, -1);

		//table2->chart1->Series["F(x)"]->YAxisLabel = "d";
		//table2->chart1->Series["F(x)"]->AxisLabel = "d";
		//
		//Рассчет оценок мат ожидания, дисперсии и коэффициента вариации (Задание 5)
		//
		table2->lab2_label_M_in->Text = Convert::ToString(labs.MathExp(labs.dVector));
		table2->lab2_label_D_in->Text = Convert::ToString(labs.Dispersia(labs.dVector));
		table2->lab2_label_Y_in->Text = Convert::ToString(labs.kVariation(labs.dVector));
		//
		//названия строк
		//
		strName = "[" + (Convert::ToDouble(labs.iMinNumber)) + " , " + (Convert::ToDouble(labs.iMaxNumber)) + "]";
		table2->dataGridView1->Rows[0]->HeaderCell->Value = strName;

		for (int i = 0; i < 9; i++)
		{
			strName = "[" + (Convert::ToDouble(labs.iMinNumber) + (1.0 / 10.0 * (Convert::ToDouble(i)))) + " , " + (Convert::ToDouble(labs.iMinNumber) + (1.0 / 10.0 * (Convert::ToDouble(i) + 1.0))) + ")";
			table2->dataGridView1->Rows[i + 1]->HeaderCell->Value = strName;
		}
		strName = "[" + (Convert::ToDouble(labs.iMinNumber) + (1.0 / 10.0 * 9.0)) + " , " + (Convert::ToDouble(labs.iMinNumber) + (1.0 / 10.0 * 10.0)) + "]";
		table2->dataGridView1->Rows[10]->HeaderCell->Value = strName;
		//
		//названия столбцов
		//
		for (int i = 0; i < labs.dVector.size(); i++)
		{
			strName = "X" + (i + 1);
			table2->dataGridView1->Columns[i]->HeaderCell->Value = strName;
		}
		table2->dataGridView1->TopLeftHeaderCell->Value = "Отрезок / Элемент";
		//
		//выравнивание ячеек
		//
		//table2->dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		//table2->dataGridView1->AutoResizeColumnHeadersHeight();
		//table2->dataGridView1->AutoResizeColumns(DataGridViewRowHeadersWidthSizeMode::EnableResizing, true);
		//table2->dataGridView1->AutoSizeMode = DataGridViewAutoSizeColumnMode::None;
		table2->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;


	}
};
