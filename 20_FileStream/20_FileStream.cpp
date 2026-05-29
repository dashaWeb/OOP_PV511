#include <iostream>
#include <vector>
#include "Text_stream.h"

struct Student
{
    char name[50]{};
    char lastname[50]{};
    int age;
    void print()
    {
        cout << lastname << " " << name << " \t age :: " << age << endl;
    }
};

int main()
{
    /*Text_stream txt;
    const int SIZE = 5;
    int arr[SIZE]{ 10,21,100,-34,77 };
    string fname = "my.txt";
    txt.writeToFileArray(arr, SIZE, fname);

    txt.showFile(fname);
    size_t count = 0;
    int* mas;
    mas = txt.readToFile(count, fname);
    for (size_t i = 0; i < count; i++)
    {
        cout << mas[i] << "\t";
    }cout << endl;*/
    string fname = "student.dat";
    fstream file(fname, ios_base::in | ios_base::out | ios_base::binary);
    if (!file.is_open())
    {
        cout << "Error" << endl;
        return 0;
    }
    //Student stud{ "Alex","Bondar",22 };
    //file.write((char*)&stud, sizeof(Student));

    //Student arr[2]{ {"Olia","Melnuk",18},{"Taras","Voyko",25} };
    //file.write(reinterpret_cast<const char*>(arr), sizeof(arr));

    //vector<Student> vec = { {"Maria","Olexin",12},{"Igor","Polichuk",25} };
    //file.write(reinterpret_cast<const char*>(vec.data()), vec.size() * sizeof(Student));

    vector<Student> res;
    Student tmp;
    /*while (file.read(reinterpret_cast<char*>(&tmp), sizeof(Student))) // read by one student
    {
        res.push_back(tmp);
    }

    cout << "Print Students :: " << endl;
    for (auto& i : res)
    {
        i.print();
    }*/
    file.seekg(0, ios_base::end);
    cout << file.tellg() << endl;
    //int len = file.tellg();
    int count = file.tellg() / sizeof(Student);
    res.resize(count);
    file.seekg(0);
    file.read(reinterpret_cast<char*>(res.data()), sizeof(Student) * count);
    cout << "Print Students :: " << endl;
    for (auto& i : res)
    {
        i.print();
    }
}

