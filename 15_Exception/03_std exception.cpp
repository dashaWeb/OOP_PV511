//#include <iostream>
//#include <exception>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	string str = "a1a23d123";
//
//	try
//	{
//		int value = stoi(str);
//		cout << "Value :: " << value << endl;
//	}
//	catch (exception& ex)
//	{
//		cout << "Caught : " << typeid(ex).name() << endl;
//		cout << "Message : " << ex.what() << endl;
//	}
//	/*str = "ABCDE";
//	cout << str[5] << endl;*/
//
//	vector<int> v{ 1,2,3,4,5 };
//	try
//	{
//		//cout << "Vector index 5 :: " << v[5];
//		cout << "Vector index 5 :: " << v.at(5) << endl;
//	}
//	catch (const std::exception& ex)
//	{
//		cout << "Caught : " << typeid(ex).name() << endl;
//		cout << "Message : " << ex.what() << endl;
//	}
//	
//}