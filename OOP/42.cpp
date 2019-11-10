#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee() {};
	Employee(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	string getName() {return name;}
	int getSalary() {return salary;}
	virtual void printDetails() {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};

class Manager : public Employee {
	string type;
public:
	Manager() {};
	Manager(string type, string name, int sal) : Employee(name, sal) {
		this->type = type;
	}
	string getType() {return type;}
	void printDetails() {
		cout << "Name: " << getName() << endl;
		cout << "Salary: " << getSalary() << endl;
		cout << "Type of Manager: " << type << endl;
	}
};

class Clerk : public Employee {
	int allowance;
public:
	Clerk() {};
	Clerk(int allowance, string name, int sal) : Employee(name, sal) {
		this->allowance = allowance;
	}
	int getAllowance() {return allowance;}
	void printDetails() {
		cout << "Name: " << getName() << endl;
		cout << "Salary: " << getSalary() << endl;
		cout << "Allowance of Clerk is: " << allowance << endl;
	}
};


int main() {

	Manager m("HR", "rick", 25000);
	m.printDetails();
	cout << "------" << endl;

	Clerk c(15000, "morty", 10000);
	c.printDetails();
	cout << "------" << endl;

	Employee* ptr[6];
	Manager m1("HR", "rick", 25000);
	Manager m2("GM", "tyrion", 80000);
	Clerk c1(15000, "gopa", 17000);
	Clerk c2(90000, "ron", 25000);
	Employee e1("SABUJ", 90000);
	Employee e2("JANA", 80000);
	ptr[0] = &e1;
	ptr[1] = &e2;
	ptr[2] = &m1;
	ptr[3] = &m2;
	ptr[4] = &c1;
	ptr[5] = &c2;

	int sal = 0;
	for (int i = 0; i < 6; ++i)
	{
		ptr[i]->printDetails();
		sal += ptr[i]->getSalary();
	}

	cout << "Total salary of all Employees is: " << sal <<endl;

	return 0;
}
