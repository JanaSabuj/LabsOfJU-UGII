#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i <= 100; ++i)
	{
		float fah = (float)(9 * i) / 5 + 32 ;
		cout << i << " degree Celsius = " << fah << " Fah" << endl;
	}

	return 0;
}