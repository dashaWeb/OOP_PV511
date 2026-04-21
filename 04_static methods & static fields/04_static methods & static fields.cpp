#include <iostream>
#include "Product.h"
using namespace std;


int main()
{
   
	cout << "Counter  :: " << Product::getCounter() << endl;

	Product bread("Bread", 30, 160, ProductType::BAKERY);
	bread.print(); // 1


	Product cake("Cake", 200, 18, ProductType::CONFECTIONERS);
	cake.print(); // 2

	cout << "Counter  :: " << Product::getCounter() << endl;
	
	cout << "check category :: " << boolalpha << Product::someTypeProduct(bread, cake) << endl;
}

