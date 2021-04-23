#pragma once

const int MAX_CHARS = 1000;
class StringInteger
{
private:
	char num[MAX_CHARS];
public:
	StringInteger();
	void Nhap();	
	void Xuat();
	friend StringInteger operator+(StringInteger so1, StringInteger so2);
};

