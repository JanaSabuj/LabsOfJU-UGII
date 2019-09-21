#include <iostream>
#include <ctime>
using namespace std;

inline int add_inline(int x, int y,int z){
	return x+y+z;
}

int add_normal(int x,int y,int z){
	return x+y+z;
}

int main() {
	clock_t t;

	int x = 5, y = 6, z = 9;
	t = clock();

	cout << add_inline(x,y,z) <<endl;
	t = clock() - t;
	cout << "Time elapsed in inline function: " << ((float) t / CLOCKS_PER_SEC) * 1e6 << "ms" <<endl;

	t = clock();
	cout << add_normal(x,y,z) <<endl;
	t = clock() - t;
	cout << "Time elapsed in normal function: " << ((float) t / CLOCKS_PER_SEC) * 1e6 << "ms" <<endl;

	return 0;
}