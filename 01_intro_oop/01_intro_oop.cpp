#include <iostream>
#include <string>
using namespace std;


// public - доступ відкритий, видимі всі поля та методи за межами класу
// private - доступ закритий, доступ до полів та методів лише в межах класу
// protected - захищений, доступ до полів та методів лише в середині класу та у класах наслідників
const size_t MIN_POWER = 50;
const size_t MAX_POWER = 100;

const size_t MAX_SPEED_LOW = 100;
const size_t MAX_SPEED_UP = 300;

const double MIN_VOLUME = 0.7;
const double MAX_VOLUME = 6;

class Car {
private:
	string _brand = "NoBrand";
	string color = "None";
	size_t power = MIN_POWER;
	size_t max_speed = MAX_SPEED_LOW;
	double volume = MIN_VOLUME;

public:
	Car() = default; // default ctor 
	//Car(const string& brand, const string& color)
	//{
	//    _brand = brand;
	//    this->color = color;// this - неявний вказівник на oб'єкт Car   
	//}
	/*Car(const string& brand, const string& color)
		: _brand{ brand }, color{ color }
	{

	}*/
	Car(const string& brand, const string& color)
		
	{
		setBrand(brand);
		setColor(color);
	}
	Car(const string& brand, const string& color, const size_t& power)
		:Car(brand, color)
	{
		setPower(power);
	}

	void setBrand(const string& brand) // задача сетера = присвоїти значення для поля
	{
		/*if (brand.empty() or brand == " ") {
			cout << "Error brand" << endl;
		}
		else {
			this->_brand = brand;
		}*/
		if (brand.empty() or brand == " ") {
			cout << "Error brand" << endl;
			return;
		}

		this->_brand = brand;

	}
	void setColor(const string& color) // задача сетера = присвоїти значення для поля
	{

		if (color.empty() or color == " ") {
			cout << "Error brand" << endl;
			return;
		}

		this->color = color;

	}
	void setPower(const size_t& power)
	{
		if (power >= MIN_POWER and power <= MAX_POWER)
			this->power = power;
	}

	string getBrand()// задача гетера = отримати значення поля
	{
		return this->_brand;
	}

	void print()
	{
		cout << "Brand  :: " << _brand << endl;
		cout << "Color  :: " << color << endl;
		cout << "Power  :: " << power << endl;
		cout << "Speed  :: " << max_speed << endl;
		cout << "Volume :: " << volume << endl;
	}
	Car newCar(const Car& car) {
		Car tmp;
		if (this->power > car.power) {
			tmp.power = this->power;
		}
		else {
			tmp.power = car.power;
		}
		return tmp;
	}
	void input()
	{
		string tmp;
		cout << "Enter brand :: "; getline(cin, tmp);
		setBrand(tmp);
	}
};

int main()
{
	Car ford("", "black", 60);
	ford.print();
	cout << "\n";
	ford.setBrand("New Ford");
	ford.print();
	cout << "Brand :: " << ford.getBrand() << endl;
	Car audi("Audi","gray",100);
	cout << "\n";
	audi.print();

	Car tmp = ford.newCar(audi);
	cout << "\n";
	tmp.print();

}


