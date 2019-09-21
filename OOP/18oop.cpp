#include <iostream>
#include <cmath>
using namespace std;

class Point{
	int x,y,z;
public:
	Point(int x,int y,int z);
	float distance(Point p);
};

Point :: Point(int a,int b,int c){
	x = a;
	y = b;
	z = c;
	cout <<"The point is : (" << x <<"," <<y<<","<<z<<")" <<endl;
}

float Point:: distance(Point p){

	float x1 = abs(x - p.x);
	float y1 = abs(y - p.y);
	float z1 = abs(z - p.z);

	return sqrt(x1*x1 + y1*y1 + z1*z1);
}

int main() {
	
	Point x(1,2,3);
	Point y(5,6,7);

	
	cout << "The distance between two points are: " <<x.distance(y) <<endl;


  return 0;
}