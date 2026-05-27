#pragma once
#include "TestFrwList.h"
#include <set>




class Test_multiset_set
{
public :
	void startTest() const;
};

inline void Test_multiset_set::startTest() const
{
	multiset<int> ms{ 10,22,10,22,33,-33,100,200,100,1,100 };
	//multiset<int, greater<int>> ms{10,22,10,22,33,-33,100,200,100,1,100};
	print(ms, "Print multiset container :: ");
	ms.insert(77);
	print(ms, "Print multiset container :: ");
	for (auto i = ms.begin(); i != ms.end(); i++)
	{
		cout << *i << "\t";
	}cout << endl;

	for (auto i = ms.rbegin(); i != ms.rend(); i++)
	{
		cout << *i << "\t";
	}cout << endl;

	cout << "Min :: " << *ms.begin() << endl;
	cout << "Max :: " << *ms.rbegin() << endl;
	cout << "\n Count of key 100 :: " << ms.count(100) << endl;

	//ms.erase(100);
	//print(ms, "Print multiset container :: ");

	//auto it = ms.find(22);
	//ms.erase(it,ms.end());
	//print(ms, "Print multiset container :: ");

	// set - unique
	set<int> s(ms.begin(), ms.end());
	print(s, "Print set container :: ");
	s.insert(100);
	print(s, "Print set container :: ");
	set<int> s2{ 100,55,77,88,300,100 };
	print(s2, "Print set2 container :: ");
	ostream_iterator<int> outIt(cout, "\t");
	cout << "\n -------------- UNION ---------------" << endl;
	set_union(s.begin(), s.end(), s2.begin(), s2.end(), outIt);
	cout << "\n -------------- INTERSECTION ---------------" << endl;
	set_intersection(s.begin(), s.end(), s2.begin(), s2.end(), outIt);
	cout << "\n -------------- DIFFERENCE (s1 - s2)---------------" << endl;
	set_difference(s.begin(), s.end(), s2.begin(), s2.end(), outIt);
	cout << "\n -------------- DIFFERENCE (s2 - s1)---------------" << endl;
	set_difference(s2.begin(), s2.end(), s.begin(), s.end(), outIt);
}