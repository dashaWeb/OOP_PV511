#include <iostream>
#include "Engine.h"
#include "Car.h"
using namespace std;


int main()
{
    Engine engine("B1",150,2.5);
    engine.print();

    Car car; // ctor default
    car.print();

    Car audi("Audi", engine, 350);
    audi.print();

    Car bmw("BMW", "HH", 180, 3.6, 200);
    bmw.print();
}
