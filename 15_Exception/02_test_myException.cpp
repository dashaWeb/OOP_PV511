//#include <iostream>
//#include "MyException.h"
//using namespace std;
//
//// Exception - помилкова ситуація, яка потребує обробки
////try, catch, throw
//
//
//double div(double a, double b)
//{
//    const double LIMIT = 1'000'000;
//    if (b == 0)
//        throw DivByZeroException();
//    if (b > LIMIT)
//        throw TooBigDivisorException("Too big number", b);
//    if (b < -LIMIT)
//        throw TooSmallDivisorException("Too small number", b);
//
//    return a / b;
//}
//
//
//
//int main()
//{
//
//    double a, b, result;
//    cout << "Enter two number :: ";
//    while (cin >> a >> b)
//    {
//        try {
//            result = div(a, b);
//            cout << "Result :: " << a << " / " << b << " = " << result << endl;
//        }
//        catch (DivByZeroException ex)
//        {
//            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
//            cout << "Bad value :: " << fixed << ex.getValue() << endl;
//        }
//        catch (TooBigDivisorException ex)
//        {
//            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
//            cout << "Bad value :: " << fixed << ex.getValue() << endl;
//        }
//        catch (TooSmallDivisorException ex)
//        {
//            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
//            cout << "Bad value :: " << fixed << ex.getValue() << endl;
//        }
//        catch (MyException ex)
//        {
//            cout << ex.what() << " Bad value :: " << ex.getValue() << endl;
//        }
//        catch (...) // default
//        {
//            cout << "Run default catch " << endl;
//        }
//    }
//}
//
//
