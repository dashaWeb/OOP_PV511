#pragma once
#include "Animal.h"
class Wolf final: // final - від нього не можна успадковуватися
    protected Animal
{
public:
    Wolf(const string& place = "Europe", const size_t& age = 0, const size_t& weight = 1);
    ~Wolf();
    void print() const override final; // похідним типам заборонено перевизнатачи цуй віртуальний метод
    void eat() const override;
    void move() const override;
protected:
    size_t weight;

    // Inherited via Animal
};

//class BlueWolf :public Wolf
//{
//public:
//    void print() const;
//};

