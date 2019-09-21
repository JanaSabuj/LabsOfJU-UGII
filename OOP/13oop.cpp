#include <iostream>
using namespace std;

inline int add(int x, int y,int z){
	return x+y+z;
}

int main() {

	int x = 5, y = 6, z = 9;
	cout << add(x,y,z) <<endl;


	return 0;
}