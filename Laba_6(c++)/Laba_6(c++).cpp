#include "Expression.h"
#include <iostream>

using namespace std;

int main()
{

	int n = 1;
	Expression **array = new Expression*[n];
	array[0] = new Expression(1, 0, 5, 6);
	array[1] = new Expression(2, 5, 2, 1);
	for (int i = 0; i < sizeof(array); i++) 
	{
		try
		{
			cout << "Solution" << array[i]->GetAnswer() << endl;
		}
		catch (exception &e)
		{
			cout << e.what() << endl;
		}
		cout << "Parameters of the expression" << endl;
		array[i]->Show();
		cout << "***************************************************" << endl;
	}


	system("pause");
	return 0;

}

