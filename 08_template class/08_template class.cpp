#include <iostream>
#include "Array.h"
using namespace std;

template <typename T, typename T2>
auto sum(T a, T2 b)
{
    return a + b;
}
int main()
{
 /*   int a = 5, b = 7;
    double c = 7.5, d = 8;
    string e = "abc", f = "efg";

    cout << "Template type int    >> " << sum(a, c) << endl;
    cout << "Template type double >> " << sum(c, d) << endl;
    cout << "Template type string >> " << sum(e, f) << endl;*/
    Array<double, 10> obj(2.2);
    obj[0] = 25.3;
    obj[1] = 33.3;
    cout << obj;

    Array<string, 5> str("abc");
    str.print();
}
