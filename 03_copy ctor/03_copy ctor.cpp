#include <iostream>
#include "Food.h"
using namespace std;


int main()
{
	Food food;
	food.setName("Borshch");
	food.setKkal(200);
	food.setWeight(250);
	food.print();

	Food olivie("Salad Olivie", 330, 200);
	olivie.print();
	

	//Food clone = food; // ctor copy (compile create copy ctor = shallow copy
	//Food clone(food); // ctor copy (compile create copy ctor = shallow copy
	Food clone{ food }; // ctor copy (compile create copy ctor = shallow copy
	cout << "Before :: " << endl;
	cout << "Print Origin :: ";
	food.print();
	cout << "Print Clone :: ";
	clone.print();

	clone.setKkal(400);
	clone.setWeight(300);
	clone.setName("Vareniki");

	cout << "After :: " << endl;
	cout << "Print Origin :: ";
	food.print();
	cout << "Print Clone :: ";
	clone.print();


	cout << "\n\nBefore :: " << endl;
	cout << "Print Origin :: ";
	olivie.print();
	cout << "Print Clone :: ";
	clone.print();

	clone = olivie;
	clone.setName("Milk");
	cout << "\n\nAfter :: " << endl;
	cout << "Print Origin :: ";
	olivie.print();
	cout << "Print Clone :: ";
	clone.print();


}
