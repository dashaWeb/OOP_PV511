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
}

// Додати до існуючого класу :
// Деструктор
// Конструктор копіювання і оператор =
// мeтод clear
// мeтод addTail() - додати в кінець  списку
// метод RemoveAt(data) -> наступний елемент від знайденого

