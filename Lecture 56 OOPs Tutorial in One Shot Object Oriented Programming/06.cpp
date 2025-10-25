// inharitance
#include <iostream>
using namespace std;

// single Inheritance
class A
{
public:
    int a;
    int b;
    int c;
};

class B : public A
{
public:
    int d;

    int sum()
    {
        return a + b + c + d;
    }
};

// Multilevel Inheritance
class C : public B
{
public:
    int e;
    int sum()
    {
        return a + b + c + d + e;
    }
};

// Multiple Inheritance
class Tcr
{
public:
    int sal;
    string dep;
};

class Stu
{
public:
    int roll;
    string grade;
};

class TA : public Tcr, public Stu
{
public:
    string info()
    {
        return to_string(sal) + " " + dep + " " + to_string(roll) + "" + grade + "\n";
    }
};

// Hierarchical Inheritance
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle started 🚗" << endl;
    }
};

class Car : public Vehicle
{
public:
    void carFeature()
    {
        cout << "Car with AC ❄️" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void bikeFeature()
    {
        cout << "Bike with disc brakes 🏍️" << endl;
    }
};

// Hybrid Inheritance

int main()
{
    TA ta1;
    ta1.sal = 12000;
    ta1.dep = "CSE";
    ta1.roll = 1;
    ta1.grade = "A+";

    cout << ta1.info();
    return 0;
}
