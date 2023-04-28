#pragma once
#include <iostream>
#include <random>
#include <vector> 
#include <cmath>
#include <windows.h> 



#define MAX_ARRAY1_SIZE_LAB1 10
#define MAX_ARRAY2_SIZE_LAB1 15
#define MAX_ARRAY3_SIZE_LAB1 20

#define PRECISION_LAB1 3.0
#define MIN_NUMBER_LAB1 -10
#define MAX_NUMBER_LAB1 10

#define MAX_ARRAY_SIZE_LAB2 100
#define PRECISION_LAB2 3.0
#define MIN_NUMBER_LAB2 0
#define MAX_NUMBER_LAB2 30

#define MAX_ARRAY_SIZE_LAB3 100
#define MIN_NUMBER_LAB3 0.0
#define MAX_NUMBER_LAB3 1.0
#define PRECISION_LAB3 3.0

using namespace std;


struct LabsMPSZI
{

	vector<double>dVector;
	vector<double>dVec_Segment;
	vector<double>dVec_Xi;
	vector<int>iVec_CountNumbers;
	vector<double>dVec_pi;
	vector<double>dVec_Pi;
	vector<double>dVec_fPi;
	vector<double>dVec_FPi;
	vector<double>dVec_Ri;
	vector<double>dVec_ME;
	vector<double>dVec_Disp;
	vector<double>dVec_kVar;
	vector<double>dVec_Lab1_Pi;
	vector<double>dVec_Lab1_Mi;
	vector<int>iVecPos;
	vector<double>dVec_FNumber;
	vector<double>dVec_LNumber;

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
	vector<double>dVecSegments;
	int iPos = 0;
	double dPBuff = 0.0;
	int iMaxNumber = 0;
	int iMinNumber = 0;
	double dMi = 0.0, dRi = 0.0, dSummRi = 0.0, dPi = 0.0;
	double dMinNumber = 0.0, dMaxNumber = 0.0;
	double dLambda = 0.0;

	void ClearVectors()
	{
		dVector.clear();
		dVec_Segment.clear();
		dVec_Xi.clear();
		iVec_CountNumbers.clear();
		dVec_pi.clear();
		dVec_Pi.clear();
		dVec_fPi.clear();
		dVec_FPi.clear();
		dVecSegments.clear();
		iPos = 0;
		dPBuff = 0.0;
		iMaxNumber = 0;
		iMinNumber = 0;
		iVecPos.clear();
		dVec_Disp.clear();
		dVec_ME.clear();
		dVec_kVar.clear();
		dSegment1.clear();
		dSegment2.clear();
		dSegment3.clear();
		dSegment4.clear();
		dSegment5.clear();
		dSegment6.clear();
		dSegment7.clear();
		dSegment8.clear();
		dSegment9.clear();
		dSegment10.clear();
		dMi = dRi = dSummRi = dPi = dLambda = dMinNumber = dMaxNumber = 0.0;

		dVec_FNumber.clear();
		dVec_LNumber.clear();
		dVec_Lab1_Mi.clear();
		dVec_Lab1_Pi.clear();
		dVec_Ri.clear();
	}

	vector<double>foo_Lab1_4(vector<double>dV, int iPrec)
	{
		//Генерируем вектор, задаём его первый и последний элемент
		//Считаем Ri=Mi/10 и Pi=Ri/(summ(Rj)
		//Добавляем результаты в вектора характеристик
		//Для удобства печати в сгенерированный масссив выводим все его характеристики
		//Возвращаем вектор

		dV = SortVector(CreateVector(dV, 10, 0.0, 1.0, PRECISION_LAB1));
		dV[0] = 0.0;
		dV[dV.size() - 1] = 1.0;
		CalculateRi(dV);
		CalculatePi();

		dVec_Ri.push_back(RoundNumber(dRi, iPrec));						//Ri=Mi/10
		dVec_Lab1_Mi.push_back(RoundNumber(dMi, iPrec));				//количество выполнений условия Xij <= 0.1 * i
		dVec_Lab1_Pi.push_back(RoundNumber(dPi, iPrec));				//вероятность появления каждого события Ai (Ai:Xij <= Mi), как элементарного исхода во всей группе (Pi=Ri/(summ(Rj))

		dV.insert(dV.begin(), RoundNumber(dRi, iPrec));					//Ri=Mi/10
		dV.insert(dV.begin(), RoundNumber(dPi, iPrec));					//вероятность появления каждого события Ai (Ai:Xij <= Mi), как элементарного исхода во всей группе (Pi=Ri/(summ(Rj))
		dV.insert(dV.begin(), RoundNumber(dMi, iPrec));					//количество выполнений условия Xij <= 0.1 * i
		dV.insert(dV.begin(), RoundNumber(Dispersia(dV), iPrec));		//дисперсия
		dV.insert(dV.begin(), RoundNumber(MathExp(dV), iPrec));			//мат ожидание
		dV.insert(dV.begin(), dV.size()-5);								//Размер массива

		dMi = 0.0;

		return dV;
	}

	void CalculateRi(vector<double>dV)
	{
		double dI = 0.0;
		for (int i = 0; i < dV.size(); i++)
		{
			dI = i + 1.0;
			if (dV[i] <= (0.1 * dI))
			{
				dMi++;
			}
		}
		dRi = dMi / 10.0;
		dSummRi = dSummRi + dRi;
	}

	void CalculatePi()
	{
		dPi = dRi / dSummRi;
	}

	vector<double>GetSegmentFromPos(vector<double>dVSegment, vector<double>dV, double dFirstNumberMainVector, double dLastNumberMainVector, int iStartPosition, double dSegmentMaxValue)
	{
			dVSegment = FillSegment(dV, dVSegment, iStartPosition, dSegmentMaxValue);
			if (iStartPosition + dVSegment.size() != dV.size())
			{
				dVSegment.pop_back();
			}

			dVec_Xi.push_back((double)dVSegment[dVSegment.size() / 2]);
			iVec_CountNumbers.push_back(dVSegment.size());
			dVec_pi.push_back((double)dVSegment.size() / (double)dV.size());
			dVec_Pi.push_back((double)(dPBuff + dVec_pi[dVec_pi.size()-1]));
			dPBuff = dVec_Pi[dVec_Pi.size() - 1];
			dVec_ME.push_back(MathExp(dVSegment));
			dVec_Disp.push_back(Dispersia(dVSegment));
			dVec_kVar.push_back(kVariation(dVSegment));
			dVec_FPi.push_back(GetUniformDistribution(dVSegment[0], dVSegment[dVSegment.size()-1], dVec_Xi[dVec_Xi.size() - 1]));
			dVec_fPi.push_back(GetDifferentialUniformDistribution(dVSegment[0], dVSegment[dVSegment.size() - 1], dVec_Xi[dVec_Xi.size() - 1]));
			dVec_FNumber.push_back(dVSegment[0]);
			dVec_LNumber.push_back(dVSegment[dVSegment.size()-1]);

			return dVSegment;
	}
	char foo_LoQ_05(double dNumber) //число меньше или больше 0.5
	{
		if (dNumber <= 0.5)
		{
			return '+';
		}
		else
		{
			return '-';
		}
	}

	template <typename T> T GetCountElements(T* tArray)
	{
		size_t len = sizeof(tArray) / sizeof(tArray[0]);;

		return len;
	}
	int GenRandNumberInt(int min, int max) //генерация целого числа
	{
		int iRandNumber = 0;
		random_device rd;	// non-deterministic generator
		mt19937 gen(rd());  // to seed mersenne twister.
		// replace the call to rd() with a
		// constant value to get repeatable
		// results.


		uniform_int_distribution<> dist(min, max);	 // distribute results between minNumber and maxNumber inclusive.
		iRandNumber = dist(gen);


		return iRandNumber;
	}
	double GenRandNumberDouble(double min, double max) //генерация дробного числа
	{
		double dRandNumber = 0;
		random_device rd;	// non-deterministic generator
		mt19937 gen(rd());  // to seed mersenne twister.
		// replace the call to rd() with a
		// constant value to get repeatable
		// results.


		uniform_real_distribution<> dist(min, max);	 // distribute results between minNumber and maxNumber inclusive.
		dRandNumber = dist(gen);


		return dRandNumber;
	}

	double RoundNumber(double dNumber, int Precision) //округление числа
	{
		if (Precision == 0)
		{
			return dNumber;
		}
		dNumber = round(dNumber * pow(10.0, Precision)) / pow(10.0, Precision);

		return dNumber;
	}

	void PrintVector(vector<double>dVector, string strSeparator) //напичатать вектор в консоль
	{
		cout << endl << strSeparator;
		for (int i = 0; i < dVector.size(); i++)
		{
			cout << dVector[i] << strSeparator;
		}
	}

	vector<double>SortVector(vector<double>dVector) //сортировка вектора пузырьком
	{
		for (int i = 0; i < dVector.size(); i++)
		{
			for (int j = 0; j < dVector.size() - 1; j++)
			{
				if (dVector[j] > dVector[j + 1])
				{
					swap(dVector[j], dVector[j + 1]);
				}
			}
		}
		return dVector;
	}

	vector<double>CreateVector(vector<double>dVector, int Lenght, double minNumber, double maxNumber, double Precision) //создание вектора
	{
		dVector.clear();

		for (int i = 0; i < Lenght; i++)
		{
		doAgain:
			dVector.push_back(RoundNumber((double)GenRandNumberDouble(minNumber, maxNumber), Precision));
			
		}

		return dVector;
	}

	vector<double>FillSegment(vector<double>dVector, vector<double>dVectorSegment, int iStartPos, double dValue) //заполнить отрезок
	{
		dVectorSegment.clear();
		dValue = RoundNumber(dValue, 8);
		dVector[dVector.size() - 1] = RoundNumber(dVector[dVector.size() - 1], 8);
		if (dValue == dVector[0] || dValue == dVector[dVector.size() - 1])
		{
			for (int i = iStartPos; i < dVector.size(); i++)
			{
				dVectorSegment.push_back(dVector[i]);
			}
			return dVectorSegment;
		}
		else
		{
			for (int i = iStartPos; (dVector[i] < dValue); i++)
			{//dVectorSegment.size() + iStartPos) != dVector.size()
				dVectorSegment.push_back(dVector[i]);

			}
			return dVectorSegment;
		}
		
	}

	double MathExp(vector<double>dV) //Рассчёт мат ожидания
	{
		double dME = 0.0;

		for (int i = 0; i < dV.size(); i++)
		{
			dME = dME + dV[i] * 1.0 / dV.size();
		}
		return dME;
	}
	double MathExp_PowX(vector<double>dV) //Рассчёт мат ожидания от квадратного x
	{
		double dME = 0.0;

		for (int i = 0; i < dV.size(); i++)
		{
			dME = dME + pow(dV[i], 2.0) * 1.0 / dV.size();
		}
		return dME;
	}

	double Dispersia(vector<double>dV) //Рассчёт дисперсии
	{
		double dD = 0.0;

		dD = MathExp_PowX(dV) - pow(MathExp(dV), 2.0);

		return dD;
	}

	double kVariation(vector<double>dV) //Рассчёт коэффициента вариации
	{
		double kV = 0.0;

		kV = sqrt(Dispersia(dV)) / MathExp(dV);

		return kV;
	}

	double GetMiddleValue(vector<double>dV) //выбор среднего значения отрезка
	{
		return dV[dV.size() / 2];
	}

	double GetProbability(vector<double>dV, double dMaxElements)
	{
		return dV.size() / dMaxElements;
	}

	double GetUniformDistribution(double dMinSegmentValue, double dMaxSegmentValue, double dX) //Рассчёт закона распределения
	{
		if (dX < dMinSegmentValue)
		{
			return 0.0;
		}
		if (dX >= dMaxSegmentValue)
		{
			return 1.0;
		}
		else
		{
			return (dX - dMinSegmentValue) / (dMaxSegmentValue - dMinSegmentValue);
		}
	}

	double GetDifferentialUniformDistribution(double dMinSegmentValue, double dMaxSegmentValue, double dX) //Рассчёт диффзакона распределения
	{
		if (dX < dMinSegmentValue)
		{
			return 0.0;
		}
		if (dX >= dMaxSegmentValue)
		{
			return 0.0;
		}
		else
		{
			return (1.0 / (dMaxSegmentValue - dMinSegmentValue));
		}
	}

	double GetExponentialdistribution(double dLambd, double dX) //Рассчёт закона распределения
	{
		if (dLambd == 0.0)
		{
			dLambd = 2.0;
		}
		return (1.0 - exp(-1.0 * dLambd * dX));
	}

	double GetDifferentialExponentialdistribution(double dLambd, double dX) //Рассчёт диффзакона распределения
	{
		if (dLambd == 0.0)
		{
			dLambd = 2.0;
		}
		return (dLambd * exp(-1.0 * dLambd * dX));

	}
};
