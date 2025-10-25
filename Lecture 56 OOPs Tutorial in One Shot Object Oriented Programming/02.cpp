#include <iostream>
using namespace std;

class Teacher {
private:
	 double salary;

public: 
		string name;
		int age;
		int ID;
string info(){
		return "Name " + name + " " + "Age" + to_string(age) + " " + "ID " + to_string(ID);
};

void setSalary(double s){
	salary = s;
};

double getSalary(){
	return salary;
};

};

int main ()
{
	Teacher t1;
	t1.name = "Jon";
	t1.age = 20;
	t1.ID = 101;

	t1.setSalary(12000);

	cout << t1.info() <<"\n";
	cout << t1.getSalary();

	return 0;
};


