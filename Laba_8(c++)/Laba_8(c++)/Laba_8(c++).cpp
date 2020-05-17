#include <iostream>
#include <iomanip>


using namespace std;


void init(int **M, int n) //генерація матриці
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M[i][j] = rand() % 10 - 3;
		}

	}

}

void output(int **M, int n) //вивід матриці
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

void summarise(int **M, int n)//сума елементів матриці
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += M[i][j];
		}
	}
	cout << sum << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Кабанец Виктория, ИС - 92" << endl;
	void(*operation)(int **, int ); //вказівник на функцію
	int n = 4; //розмір матриці
	int **M = new int *[n]; //виділення пам'яті під вказівники

	for (int i = 0; i < n; i++)
		M[i] = new int[n]; //виділення пам'яті під рядки
	
	operation = init; //присвоєння функції
	operation(M, n); //виклик функції
	operation = output; //присвоєння функції
	operation(M, n); //виклик функції
	operation = summarise; //присвоєння функції
	operation(M, n); //виклик функції




	system("pause");
	return 0;


}



