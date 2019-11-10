#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	int age;
	int height;
public:
	Person() {};
	Person(string iname, int iage, int iheight) {
		name = iname;
		age = iage;
		height = iheight;
	}

	string getName() { return name;}
	int getAge() { return age;}
	int getHeight() {return height;}

	virtual void printDetails() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Height: " << height << endl;
	}
};

class Student : public Person {
	int roll;
	int yearOfAdmission;
public:
	Student() {};
	Student(int roll, int yearOfAdmission, string name, int age, int height) : Person(name, age, height) {
		this->roll = roll;
		this->yearOfAdmission = yearOfAdmission;
	}

	int getRoll() {return roll;}
	int getYearOfAdmission() {return yearOfAdmission;}
	void printDetails() {
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Height: " << getHeight() << endl;
		cout << "Roll: " << roll << endl;
		cout << "YearOfAdmission: " << yearOfAdmission << endl;
	}
};


int main() {

	Person p("Sabuj", 20, 6);
	p.printDetails();
	cout << "-----------" << endl;

	Student s(72, 2018, "Sabuj", 20, 6);
	s.printDetails();
	cout << "-----------" << endl;

	Person* ptr[4];
	Person p1("harry", 20, 5);
	Person p2("ron", 20, 6);
	Student s1(72, 2018, "Sabuj", 20, 6);
	Student s2(62, 2018, "Hazel", 20, 5);

	ptr[0] = &p1;
	ptr[1] = &p2;
	ptr[2] = &s1;
	ptr[3] = &s2;

	for (int i = 0; i < 4; i++)
		ptr[i]->printDetails();

	return 0;
}
