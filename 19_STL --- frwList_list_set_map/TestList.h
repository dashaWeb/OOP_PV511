#pragma once
#include "TestFrwList.h"
#include <list>



class TestList
{
public:
	void test_list() const;
};

inline void TestList::test_list() const
{
	list<string> li{ "c++","java","c#","python" };
	print(li, "print list :: ");
	li.push_back("Js");
	li.push_front("assembler");
	print(li, "print list after push:: ");

	cout << "\n List in reverse order :: " << endl;
	for (auto i = li.rbegin(); i !=	li.rend(); i++)
	{
		cout << *i << "\t";
	}
	cout << endl;

	char letter = 'c';

	li.remove_if([letter](string el) {return el.find(letter) != string::npos; });
	print(li, "print list after remove_if:: ");
	li.sort();
	print(li, "print list after sort :: ");
	li.sort(greater<string>());
	print(li, "print list after sort :: ");
	li.sort([](string a, string b) {return a.size() < b.size(); });
	print(li, "print list after sort :: ");

	list<string> li2{ "ms sql", "mysgl" };
	li.resize(li.size() + li2.size() + 1);
	li2.sort();
	//li.merge(li2, greater<string>());
	//print(li, "print list after merge :: ");
}