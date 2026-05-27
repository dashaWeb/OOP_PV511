#pragma once
#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;

template <typename ContType>
void print(const ContType& cont, const string& prompt = "")
{
	cout << prompt << endl;
	for (auto& i : cont)
	{
		cout << i << "\t";
	}
	cout << endl;
}

class TestFrwList
{
public:
	void startTest() const;
};

inline void TestFrwList::startTest() const
{
	forward_list<int> fl{ 10,23,45,-1,100,-55,10,-22,10,200 };
	print(fl, "Forward_List before :: ");
	fl.push_front(5);
	print(fl, "Forward_List after push front :: ");
	auto it = fl.begin();
	int index = 2;
	advance(it, index);
	fl.insert_after(it, 55);
	print(fl, "Forward_List after insert_after :: ");
	int value = 10;
	it = find(fl.begin(), fl.end(), value);
	while (it != fl.end())
	{
		cout << value << " was found " << endl;
		auto tmpIt = it;
		++tmpIt;
		if (tmpIt != fl.end())
		{
			cout << "Will be deleted :: " << *tmpIt << endl;
			fl.erase_after(it);
		}
		else {
			cout << "Erase after " << value << " is impossible (because it is last element)" << endl;
			break;
		}
		++it;
		it = find(it, fl.end(), value);
	}
	print(fl, "Forward_List after erase_after :: ");

	fl.sort();
	print(fl, "Forward_List sorted abs :: ");
	fl.sort(greater<int>());
	print(fl, "Forward_List sorted desc:: ");
	fl.sort([](int a, int b) {return abs(a) < abs(b); });
	print(fl, "Forward_List sorted module number:: ");

	fl.remove(value); // 10
	print(fl, "Forward_List after remove :: ");
	fl.remove_if([](int a) {return a < 0; }); // < 0
	print(fl, "Forward_List after remove_if :: ");
}