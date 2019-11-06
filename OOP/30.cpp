#include <iostream>
#include <cmath>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(){};
	~Point();
	void readPoint(int x, int y);
	void printPoint();
	float operator-(Point&);
};

Point::~Point(){
	cout << "Object is getting deleted" <<endl;
}

void Point::readPoint(int a, int b){
	x = a;
	y = b;
}

void Point::printPoint(){
	cout <<"Point is " <<  x <<"," << y <<endl;
}

float Point::operator-(Point& p){
	float dis;
	float x2 = (this->x - p.x)*(this->x - p.x);
	float y2 = (this->y - p.y)*(this->y - p.y);
	dis = sqrt(x2 + y2);
}

int main() {

	Point p,q;
	p.readPoint(7,2);
	q.readPoint(2,7);

	p.printPoint();
	q.printPoint();

	cout <<"Distance between 2 points " <<  p - q <<endl;


	return 0;
}
