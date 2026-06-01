//#include <iostream>
//using namespace std;

//void print(int a)
//{
//    cout << "Test print() " << endl;
//}
//
//void print(int b)
//{
//    cout << "Test print() 2" << endl;
//}

#include "Func.h"
using std::cout;
using std::endl;
using Shapes::value; // global
//using namespace Shapes;
int main()
{
    /*string name = "Alex";
    cout << name << endl;*/
    /*string name = "Pavlo";
    cout << name << endl;*/
    //print(1.0);
    //std::cout << Shapes::areaCircle(5) << std::endl;
    //std::cout << areaCircle(5) << std::endl;
    //name = "Test";
    cout << value << endl;
    Shapes::name = "Test";

    using namespace Shapes::Trian;
    std::cout << areaTrian(10,2) << std::endl;
}
