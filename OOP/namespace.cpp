/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>

namespace{
	void fun2(int x){
		std::cout <<"Inside Anon namespace "<< x << std::endl;
	}
}

namespace ns1{
	void fun1(int x){
		std::cout <<"Inside Anon namespace "<< x << std::endl;
	}
	namespace ns2 {
		void fun1(int x){
		std::cout <<"Inside ns2 namespace "<< x << std::endl;
	}

	}
}

void fun(int x){
	std::cout <<"Hello "<< x <<std::endl;
}

int main() {
	freopen("input.txt", "r", stdin);

	fun(5);// error due to ambiguity. so prevents the unintentional change of global data
	using namespace ns1::ns2;
	fun1(2);

	return 0;
}


