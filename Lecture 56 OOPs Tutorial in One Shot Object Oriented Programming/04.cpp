#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string cls;
    int roll;

    string StudentInfo()
    {
        return " Name " + name + " Class " + cls + " Roll " + to_string(roll);
    }

    Student() // 1 non parameterize constructor
    {
        name = "Enter Name";
        cls = "Enter Class";
        roll = 0;
    }

    Student(string n, string c, int r, int i) // 2 parameterize constructor
    {
        name = n;
        cls = c;
        roll = r;
        i = 0;
    }

    Student(string name, string cls, int roll)
    { // this
        this->name = name;
        this->cls = cls;
        this->roll = roll;
    }

    Student(Student &obj) // 3 copy constructor  => passing a object as parameter
    {
        name = obj.name + " Copy ";
        cls = obj.cls;
        roll = obj.roll;
    }
};

int main()
{
    Student s1;
    cout << s1.StudentInfo() << endl;

    Student s2("Jabed", "A", 1);
    cout << s2.StudentInfo() << endl;

    Student s3(s2);
    cout << s3.StudentInfo() << endl;
    return 0;
}