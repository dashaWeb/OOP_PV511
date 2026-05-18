//#include <iostream>
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
//        throw "Error :: division by zero"; // const char*
//    if (b > LIMIT)
//        throw b; // double
//    if (b < -LIMIT)
//        throw (int)b;// int
//
//    return a / b;
//}
//
////void terminate()
////{
////    cout << "Overlapping terminate is working and doing exit" << endl;
////    exit(EXIT_FAILURE);
////}
//
//void my_terminate()
//{
//    cout << "My terminate is working and doing exit" << endl;
//    exit(EXIT_FAILURE);
//}
//
//int main()
//{
//    set_terminate(my_terminate);
//    double a, b, result;
//    cout << "Enter two number :: ";
//    while (cin >> a >> b)
//    {
//        try {
//            result = div(a, b);
//            cout << "Result :: " << a << " / " << b << " = " << result << endl;
//        }
//        catch (const char* ex)
//        {
//            cout << "Caught const char* ex! Message :: " << ex << endl;
//        }
//        catch (double ex)
//        {
//            cout << "Caught double! Bad value :: " << fixed << ex << endl;
//        }
//        catch (int ex)
//        {
//            cout << "Caught int! Bad value :: " << ex << endl;
//        }
//    }   
//}
//
//
