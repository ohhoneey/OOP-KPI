#include "MyString.h"
#include "text.h"
#include <iostream>

using namespace std;

int main() {
	char* arr = new char[4]{ 'f', 'g', 'h', '\0' };
	char* arr1 = new char[4]{ 'f', 'g', 'h', '\0' };
	char* arr2 = new char[4]{ 'f', 'l', 'h', '\0' };
	char* arr3 = new char[4]{ 'k', 'g', 'h', '\0' };
	MyString str1(arr);
	MyString str2(arr1);
	MyString str3(arr2);
	MyString str4(arr3);

	Text txt(vector<MyString>{str1, str2, str3});
	//txt.PrintText();
	txt.AddLine(str4);
	//txt.PrintText();
	txt.DeleteLine(3);
	//txt.PrintText();
	txt.ReplaceString(1, str4);
	cout << txt.AllSymbols();
	//txt.PrintText();
	
	txt.Clear();
	txt.PrintText();
	return 0;
}
