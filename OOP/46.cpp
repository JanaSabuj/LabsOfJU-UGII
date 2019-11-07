#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r" , stdin);
	int x, y;
	cout << "Enter two numbers x and y" <<endl;
	cin >> x >> y;

	try{
		if(y == 0)
			throw(y);
		cout << "Division of x/y is " << (float)x/y <<endl;
	}
	catch(int x){
		cout <<"Division by 0 occurred" <<endl;
	}

	cout <<"Program ends" <<endl;

	return 0;
}
