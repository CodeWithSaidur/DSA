#include <iostream>
using namespace std;

// Stracture -> it is the User define datatype
struct Stu
{
    int id;
    string name;
    bool isMerid;
};

int main()
{
    Stu s1;
    s1.id = 1;
    s1.name = "sabed";
    s1.isMerid = true;

    cout << s1.id << endl;

    return 0;
}