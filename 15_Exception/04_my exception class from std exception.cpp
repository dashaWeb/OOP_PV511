#include <iostream>
using namespace std;



class DivByZeroException
	: public exception
{
public:
	DivByZeroException(const string& message = "Division by zero")
		:exception(message.data()) // c_str
	{
	}
};

class TooBigDivisorException
	: public overflow_error
{
	static const int LIMIT_UP = 1'000'000;
	double value;
public:
	TooBigDivisorException(const string& message = "To big divisor", const double& value = LIMIT_UP)
		:overflow_error(message), value{value}
	{
	}
	double getValue() const {
		return value;
	}
};

class TooSmallDivisorException
	: public underflow_error
{
	static const int LIMIT_DOWN = -1'000'000;
	double value;
public:
	TooSmallDivisorException(const string& message = "To small divisor", const double& value = LIMIT_DOWN)
		:underflow_error(message), value{value}
	{
	}
	double getValue() const {
		return value;
	}
};

double div(double a, double b)
{
    const double LIMIT = 1'000'000;
    if (b == 0)
        throw DivByZeroException();
    if (b > LIMIT)
        throw TooBigDivisorException("Too big number", b);
    if (b < -LIMIT)
        throw TooSmallDivisorException("Too small number", b);

    return a / b;
}

int main()
{
	double a, b, result;
    cout << "Enter two number :: ";
    while (cin >> a >> b)
    {
        try {
            result = div(a, b);
            cout << "Result :: " << a << " / " << b << " = " << result << endl;
        }
        catch (DivByZeroException ex)
        {
            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
        }
        catch (TooBigDivisorException ex)
        {
            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
            cout << "Bad value :: " << fixed << ex.getValue() << endl;
        }
        //catch (TooSmallDivisorException ex)
        //{
        //    cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
        //    cout << "Bad value :: " << fixed << ex.getValue() << endl;
        //}
        catch (underflow_error ex)
        {
            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
        }

        catch (exception ex)
        {
            cout << "Exception " << typeid(ex).name() << " was caught \n" << ex.what() << endl;
        }
        catch (...) // default
        {
            cout << "Run default catch " << endl;
        }
    }
}