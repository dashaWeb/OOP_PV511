#pragma once
#include <iostream>
using std::string;

class MyException // базовий клас для помилок
{
public:
	MyException(const string& message = "Unknown error", const double& value = 0)
		:message{ message }, value{value}
	{}
	virtual const string& what() const
	{
		return message;
	}
	virtual const double& getValue() const
	{
		return value;
	}
private:
	string message;
	double value;
};

class DivByZeroException
	: public MyException
{
public:
	DivByZeroException(const string& message = "Division by zero")
		:MyException(message)
	{}
};

class TooBigDivisorException
	: public MyException
{
	static const int LIMIT_UP = 1'000'000;
public:
	TooBigDivisorException(const string& message = "To big divisor", const double& value = LIMIT_UP)
		:MyException(message,value)
	{
	}
};

class TooSmallDivisorException
	: public MyException
{
	static const int LIMIT_DOWN = -1'000'000;
public:
	TooSmallDivisorException(const string& message = "To small divisor", const double& value = LIMIT_DOWN)
		:MyException(message, value)
	{
	}
};