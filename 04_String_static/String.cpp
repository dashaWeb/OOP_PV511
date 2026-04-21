#include "String.h"
#include <iostream>
#include <conio.h>
String::String()
	:String(80)
{
}

String::String(const size_t& size)
	:size{size}
{
	this->str = new char[this->size] {};
	++counter;
}

String::String(const char* str)
	
{
	this->size = strlen(str) + 1;
	copyStr(this->str, str);
	++counter;
}

String::String(const String& other)
	:String(other.str)
{
}

String::~String()
{
	if (this->str != nullptr)
	{
		delete[] this->str;
		this->str = nullptr;
		--counter;
	}
}

void String::operator=(const String& other)
{
	this->size = other.size;
	copyStr(this->str, other.str);
}

void String::input()
{
	int c;
	size_t i = 0;
	while (true)
	{
		if (i == size - 1)
		{

		}

		c = _getch();
		if (c == 13)
			break;
		this->str[i++] = c;
	}
}

void String::print() const
{
}

char* String::concat(const char* str)
{
	return nullptr;
}

char* String::intersect(const char* str)
{
	return nullptr;
}

size_t String::getCounter()
{
	return size_t();
}

int String::compare(const String& str1, const String& str2)
{
	return 0;
}

void String::sort(String* lines)
{
}

void String::copyStr(char*& dest, const char* source)
{
	size_t size = strlen(source);
	if(dest != nullptr)
		delete[] dest;
	dest = new char[size + 1];
	strcpy_s(dest, size, source);
}

size_t String::counter = 0;
