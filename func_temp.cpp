#include <iostream>
using namespace std;

template <typename T>
T sum(const T a, const T b){
	return a+b;
}

template<typename T,typename U>
T sum(const T a, const U b){
	return a+b;
}

int main(){
	int a_i=10;
	int b_i=20;
	double a_d=1.234;
	double b_d=3.432;

	cout<<"Sum of ints "<<sum(a_i,b_i)<<endl;
	cout<<"Sum of double and int "<<sum(a_i,a_d)<<endl;	
	return 0;
}
