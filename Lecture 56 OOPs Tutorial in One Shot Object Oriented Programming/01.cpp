#include <iostream>
using namespace std;

class Teacher
{
public:
	string name;
	int age;
	int ID;
	string info()
	{
		return "Name " + name + " " + "Age" + to_string(age) + " " + "ID " + to_string(ID);
	}
};

int main()
{
	Teacher t1;
	t1.name = "Jon";
	t1.age = 20;
	t1.ID = 101;
	cout << t1.info() << "\n";

	Teacher t2;
	t2.name = "Sabed";
	t2.age = 25;
	t2.ID = 102;
	cout << t2.info();

	return 0;
}
