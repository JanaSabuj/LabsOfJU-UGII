#include <iostream>
#include <cmath>
using namespace std;

// class Obj{
// 	int* row;
// 	int len;
// public:
// 	Obj(){};
// 	Obj(int n, int arr[]){
// 		len = n;
// 		row = new int[n];
// 		for(int i = 0; i < n; i++)
// 			row[i] = arr[i];
// 	}
// 	int& operator[](int j){
// 		return row[j];
// 	}

// };

class Table {
	int **arr;
	int n, m;
public:
	Table() {};
	Table(int, int);
	// friend istream& operator>>(istream& , const Table&);
	friend istream& operator>>(istream& , Table&); // no const
	friend ostream& operator<<(ostream&, const Table&);
	// Obj operator[](int i){
	// 	Obj temp(m, arr[i]);
	// 	return temp;
	// }

};

Table::Table(int x, int y) {
	n = x;
	m = y;
	arr = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m];
	}
}

istream& operator>>(istream& input, Table& t) {
	input >> t.n >> t.m ;
	return input;
}

ostream& operator<<(ostream& output, const Table& t) {
	// always use const otherwise cant accesss private class members
	  for (int i = 0; i < t.n; ++i)
	  {	
	  	 
	  	for(int j=0; j< t.m; j++){
	  		output << t.arr[i][j] <<" ";
	  	}
	  	cout <<endl;
	  }
	  return output;
}



int main() {
	freopen("input.txt", "r" , stdin);
	Table t(4, 5), t1(4, 5);
	cin >> t;
	// t[0][0] = 5;
	// int x = t[2][3];
	// t1 = t;
	// cout << t << “\n” << t1;//stray '\342' resulting from html copy
	cout << t << "\n" << t1;

	return 0;
}

