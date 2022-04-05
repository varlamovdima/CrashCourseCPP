#include<iostream>
using namespace std;

template<typename ...Args>
void prints(Args... args){
	(cout<< ... << args) <<endl;
}

template<typename ...Args>
auto sum(Args ...args){
	return (args + ...);
}


int main(){
	prints(1," hello ", 3.14);
	prints(sum(1,2,3,4,5));
	return 0;
}
