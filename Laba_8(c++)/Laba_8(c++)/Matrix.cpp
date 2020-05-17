#include "Matrix.h"


void Matrix::Init()
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M[i][j] = rand() % 100;
		}
	}
}

void Matrix::Output()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(4) << M[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Matrix::Summarise()
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += M[i][j];
		}
	}
	cout << sum;
}

void Matrix::Summ()
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += M[i][j];
		}
	}
	cout << sum;
}