#include <iostream>
using namespace std;

class Book{
	string isbn;
	string title;
	string* authors;
	int price;
public:
	Book();

};



class BookStore{
	Book* arr;
public:
};

string b[] = {"Chemistry", "Chemistry", "Physics","Physics","Physics", "Maths"};
string auth[] = {"J.F.Dalal", "CRDG", "MLAggarwal"};
int p[] = {100,200,300};

int main() {

	Book temp[6];
	for (int i = 0; i < 6; ++i)
	{
		 Book b;


	}

 	BookStore bs;



  return 0;
}