#include <iostream>
using namespace std;

char* stringcpy(char* dest, const char* src) //Note the order
{
    char* temp = dest;
    while(*dest++ = *src++);
        
    return temp;
}

int main() {

	const char* str = "Sabuj";
	char* s2;

	cout << stringcpy( s2, str);


	return 0;
}