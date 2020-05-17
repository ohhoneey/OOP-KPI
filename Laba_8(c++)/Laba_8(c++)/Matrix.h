#pragma once
#include <iostream>
#include <iomanip>


using namespace std;

class Matrix
{
public:
	Matrix(int n);
	void Init();
	void Output();
	void Summarise();
	virtual void Summ();

protected:
	int n;
	int **M;

};


