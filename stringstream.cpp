#include <iostream>
#include <string>
#include <sstream>
using namespace std;




int main() {
  string str= "Hello-my-name-is-Sabuj";

  stringstream output(str);
  string word;
  char delim = '-';
  // while(output>>word)
  //   cout << word <<endl;

  while(getline(output,word,delim))
     cout <<word <<" ";

}


