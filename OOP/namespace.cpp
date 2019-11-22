/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>

namespace{
	void fun(int x){
		std::cout <<"Inside Anon namespace "<< x << std::endl;
	}
}

void fun(int x){
	std::cout <<"Hello "<< x <<std::endl;
}

int main() {
	freopen("input.txt", "r", stdin);

	fun(5);// error due to ambiguity. so prevents the unintentional change of global data


	return 0;
}


