#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

	string dir1,dir2;
	dir1 = "left";
	dir2 = "right";

	try{
		if(dir1!=dir2)
			throw(0);
		cout <<"NO Collission!!" <<endl;
	}
	catch(int x){
		cout <<"Cars will collide!! Either of the 2 cars must be redirected urgently";
	}

	return 0;
}
