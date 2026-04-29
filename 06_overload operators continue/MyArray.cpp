#include "MyArray.h"
#include <iostream>
MyArray::MyArray()
	:MyArray(1)
{
}

MyArray::MyArray(const size_t& size)
{
	this->size = size;
	this->arr = new int[size] {};
}

MyArray::MyArray(const size_t& size, const int& value)
	:MyArray(size)
{
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = value;
	}
}

MyArray::MyArray(const MyArray& other) // int a{this} = b{other}
	:MyArray(other.size)
{
	// this->arr = other.arr; bad!!!
	/*this->arr = new int[other.size];
	//this->size = other.size;*/

	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

void MyArray::operator=(const MyArray& other) //a{this} = b{other}
{
	if (this->arr != nullptr)
		delete[] this->arr;
	this->size = other.size;
	this->arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
		delete[] this->arr;
}

void MyArray::print() const
{
	std::cout << "\n Array has " << size << " element(s); \n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << this->arr[i] << "\t";
	}
	std::cout << "\n";
}


int MyArray::operator[](size_t index) const 
{
	if (isValidIndex(index))
		return arr[index];

	std::cout << " >>>>> Error index (get) " << index << "\n";
	return INT_MIN;
}

int& MyArray::operator[](size_t index) // set
{
	if (isValidIndex(index))
		return arr[index];
	// error
	static int errValue;
	std::cout << " >>>>> Error index (set) " << index << "\n";
	return errValue;

}
MyArray MyArray::operator()(size_t startIndex, size_t lastIndex) const
{
	if (startIndex >= size)
		return MyArray(0);
	if (lastIndex >= size)
		lastIndex = size - 1;
	if (startIndex > lastIndex)
		std::swap(startIndex, lastIndex);

	MyArray tmp(lastIndex - startIndex + 1);
	for (size_t i = 0; i < tmp.size; i++)
	{
		//tmp.arr[i] = arr[i + startIndex];
		tmp[i] = arr[i + startIndex];
	}
	return tmp;
	
}

MyArray::operator int() const
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

std::istream& operator>>(std::istream& in, MyArray& obj)
{

	for (size_t i = 0; i < 5; i++)
	{
	
	}
}

std::ostream& operator<<(std::ostream& out, const MyArray& obj)
{
	for (size_t i = 0; i < 5; i++)
	{

	}
}
