// 04_composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Human {
public:
	Human() = default;
	Human(const string& name)
		:name{name} {
	}
	void think() const
	{
		cout << name << " ";
		brain.think();
	}

	class Brain {
	public:
		void think() const
		{
			cout << "Think Brain" << endl;
		}
	};

private:
	string name;
	Brain brain;
};



int main()
{
	Human sasha("Alex");
	sasha.think();
}

