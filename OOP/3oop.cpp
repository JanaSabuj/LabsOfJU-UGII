#include <iostream>
using namespace std;

int main() {

	int prod = 1;

	for (int i = 1; i <= 6 ; ++i)
	{
		prod = prod * i;
		cout << i << "! = " << prod << endl;

	}


	return 0;
}