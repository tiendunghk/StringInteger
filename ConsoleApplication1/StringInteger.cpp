#include "StringInteger.h"
#include <iostream>


StringInteger::StringInteger() {
	for (int i = 0; i < MAX_CHARS; i++)
		num[i] = '0';
	num[MAX_CHARS - 1] = '\0';
}

void StringInteger::Nhap() {
	int length;
	char ch[MAX_CHARS];
	std::cout << "Nhap vao so: ";
	std::cin >> ch;
	length = strlen(ch);

	for (int i = 0; i < length; i++) {
		num[MAX_CHARS - length + i] = ch[i];
	}
}

void StringInteger::Xuat() {
	int firstIndex = 0;
	for (int i = 0; i < MAX_CHARS; i++)
	{
		if (num[i] != '0') {
			firstIndex = i;
			break;
		}
	}
	for (int j = firstIndex; j < MAX_CHARS; j++)
		std::cout << num[j];
}

StringInteger operator+(StringInteger so1, StringInteger so2)
{
	int nho = 0;
	StringInteger outPut;
	for (int i = MAX_CHARS - 1; i >= 0; i--) {
		int c = (so1.num[i] - 48) + (so2.num[i] - 48) + nho;

		if (c > 9)
		{
			nho = 1;
			outPut.num[i] = c - 10 + 48;
		}
		else {
			nho = 0;
			outPut.num[i] = c + 48;
		}
	}
	return outPut;
}
