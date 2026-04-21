#pragma once
#include "Engine.h"
class Car
{
	string brand = "noBrand";
	//Engine engine; // {"Nomodel,0,0}
	Engine engine = { "None", 200, 3.5 }; // ctor with params
	size_t maxSpeed = 120;
public:
	Car() = default;
	Car(const string& brand, const string& model, const size_t& power, const double& volume, const size_t& maxSpeed)
		:brand{brand},engine{model,power,volume}, maxSpeed{maxSpeed}
	{}
	Car(const string& brand, const Engine& engine, const size_t& maxSpeed)
		:brand{brand}, engine{engine}, maxSpeed{maxSpeed}
	{}
	void print() const {
		cout << "Car --> " << brand << endl;
		cout << "Engine   :: "; engine.print();
		cout << "MaxSpeed :: " << maxSpeed << endl;
	}
};

