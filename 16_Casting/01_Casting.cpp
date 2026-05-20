//#include <iostream>
//using namespace std;
//
//// explicit
//// implicit
//
//enum Colors {RED,GREEN,BLUE};
//
//struct Point
//{
//    int x = 0, y = 0;
//    virtual void print() const {
//        cout << "(" << x << "," << y << ")" << endl;
//    }
//};
//
//struct Point3D : Point // public inheritance by default for struct 
//{
//    int z = 0;
//    void print() const override
//    {
//        cout << "(" << x << "," << y << "," << z << ")" << endl;
//    }
//};
//
//struct  String
//{
//    string str; // -1
//};
//int main()
//{
//    char ch = { 90 }; // неявне
//    //int number = { 20.0 }; // неявне через спискову ініцналізація, додаткові перевірки
//    cout << ch << endl;
//    int number = { (int)20.9 };
//    //cout << number << endl;
//    cout << (int)Colors::RED << endl;
//
//
//    Point point;
//    point.x = 1;
//    point.y = 2;
//
//    /*String str = (String&)point; 
//    cout << "String number " << str.str << endl;*/
//    // if exixts implicit type1 ---> type2 static_cast<type2>(var type1)
//    cout << " \n ______________ STATIC_CAST ____________" << endl;
//    cout << "static_cast<char>(122) --> " << static_cast<char>(122) << endl;
//    cout << "static_cast<int>(Colors::GREEN) --> " << static_cast<int>(Colors::GREEN) << endl;
//
//    Colors color = static_cast<Colors>(3);
//    //String& str = static_cast<String&>(point); // compile error
//
//    Point3D point3d;
//    point3d.x = 1;
//    point3d.y = 2;
//    point3d.z = 3;
//
//    Point& point_ = point3d; // ok - дозволене неявне перетворення від похідного типу до базового
//    //Point& point2 = point_;
//    /*cout << "Point 3d  --> "; point3d.print();
//    cout << "Point 3d implicit point  --> "; point_.print();
//    Point3D point3 = (Point3D&)point_;
//
//    cout << "Point  explicit point3D  --> "; point3.print();*/
//    if (typeid(point_) == typeid(Point3D))
//    {
//        Point3D point3 = static_cast<Point3D&>(point_);
//        point3.print(); 
//    }
//    else {
//        cout << "Untenable casting " << endl;
//    }
//    double a = 5;
//
//    double* ptr_d = &a;
//    char* ptr_ch = &ch;
//
//    //ch = static_cast<char>(ptr_ch); // error compile
//    ch = reinterpret_cast<char>(ptr_ch); // error compile
//    ptr_d = reinterpret_cast<double*>(ptr_ch);
//    cout << ch << endl;
//    //char symbol = reinterpret_cast<char>()
//}
//
