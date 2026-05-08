#include <iostream>
#include "FwdList.h"
using namespace std;


int main()
{
    FwdList<int> list;
    list.print();
	for (size_t i = 0; i < 3; i++)
	{
		list.addHead((i + 1) * 10);
		list.print();
	}
	cout << "\n ----- Removing head ----- " << endl;
	while (!list.isEmpty()) {
		list.removeHead();
		list.print();
	}
	cout << "Add again :: \n";
	list.addHead(100);
	list.addHead(200);
	list.addHead(300);
	list.print();
	
	FwdList<int> list11;
	list11.addHead(10);
	list11.addHead(152);
	list11.addHead(15);
	FwdList<int> list12;
	list12.addHead(102);
	list12.addHead(100);
	list12.addHead(152);

	Node<int>* list33;
	list33 = list11 + list12;
	FwdList<int> list_3(list33);
	list_3.print();
}

// Додати до існуючого класу :
// Деструктор
// Конструктор копіювання і оператор =
// мeтод clear
// мeтод addTail() - додати в кінець  списку
// метод RemoveAt(data) -> наступний елемент від знайденого

