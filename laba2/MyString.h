#pragma once
#include <vector>


using namespace std;

class MyString
{
	friend class Text;
public:
	MyString();
	explicit MyString(char *arr);
	MyString(const MyString &myString);
	MyString &operator=(const MyString& myString);
	void deleteSpace();
	void deleteBeginEndSpace();
	int getSize();
	const char* getString();
	~MyString();
private:
	char *str;
	int size;
};