#include <iostream>
#include <ctime>
#include "MyArray.h"
using namespace std;


int main()
{
	//MyArray a;
	//MyArray b(5);
	//MyArray c(10, 4);

	//cout << "Print array a :: " << endl;
	//a.print();
	//cout << "Print array b :: " << endl;
	//b.print();
	//cout << "Print array c :: " << endl;
	//c.print();

	//cout << "\n\n Copy array " << endl;
	//MyArray clone = c;
	//cout << "Print array clone :: " << endl;
	//clone.print();

	//a = b;
	//cout << "Print array a :: " << endl;
	//a.print();
	////int sum = (int)c;
	//a[1] = 33;
	//cout << "Test [1] --> " << a[1] << endl;
	//cout << "Print array a :: " << endl;
	//a.print();
	//cout << "Print array b :: " << endl;
	//b.print();

	//cout << "\n\n";
	//clone[0] = 99;
	//cout << "Print array c :: " << endl;
	//c.print();
	//cout << "Print array clone :: " << endl;
	//clone.print();

	srand(time(0));
	MyArray arr(10);
	for (size_t i = 0; i < arr.getSize(); i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	arr.print();

	MyArray slice = arr(2, 6);
	slice.print();

	cout << "Sum arr :: " << (int)arr << endl;
	cout << "Sum slice :: " << (int)slice << endl;
}
