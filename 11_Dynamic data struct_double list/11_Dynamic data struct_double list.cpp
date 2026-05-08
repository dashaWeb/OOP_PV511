#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List<int> list;
	for (size_t i = 0; i < 3; i++)
	{
		list.addHead(rand() % 10 + 1);
		list.print();
	}
	list.printR();
	for (size_t i = 0; i < 3; i++)
	{
		list.addTail(rand() % 10 + 1);
		list.print();
	}
	list.printR();

	/*cout << "Remove all :: " << endl;
	while (!list.isEmpty())
	{
		list.removeHead();
		list.print();
		list.printR();
	}*/
	list.removeData(1);
	list.print();
	list.printR();
}
/*
	void removeTail(); 
	copy ctor;
	operator =;
	~List();
	void clear() - видаляє всі вузли
	видалення вузла за його індексом void delByIndex(int index)
	вставка нового вузла за індексом void insByIndex(int index, const T& value))
	операція індексування [](надає доступ до інформаційної частини вузла списку за його номером)

*/