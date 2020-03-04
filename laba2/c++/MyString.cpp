#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString() {
	str = nullptr;
	size = 0;
}

MyString::MyString(char *arr) {
	size = strlen(arr);
	str = new char[size + 1];
	for (int i = 0; i < size; ++i) {
		str[i] = arr[i];
	}
	str[size] = '\0';
}

MyString::~MyString() {
	delete[] str;
}

const char *MyString::getString() {
	return str;
}

MyString::MyString(const MyString &myString) {
	size = strlen(myString.str);
	str = new char[size + 1];
	for (int i = 0; i < size; ++i) {
		str[i] = myString.str[i];
	}
	str[size] = '\0';
}

int MyString::getSize() {
	return size;
}