#include<iostream>
#include<string>

using namespace std;

template <typename T>
T adder(T v){
	cout<<__PRETTY_FUNCTION__<<endl;
	return v;
}

template <typename T, typename... Args>
T adder(T first, Args... args){
	cout<<__PRETTY_FUNCTION__<<endl;
	return first + adder(args...);
}


int main(){
	int int_sum = adder(1,2,3,4,5);
	cout<<"The integer sum is "<< int_sum<<endl;
	float float_sum = adder(1.5,2.5,3.5,4.5,5.5);
	cout<<"The floating point sum is "<<float_sum<<endl;

	string partial_1 ="This ";
	string partial_2 ="does ";
	string partial_3 ="concatenation ";
	string string_sum=adder(partial_1,partial_2,partial_3);
	cout<<string_sum<<endl;
	return 0;
}
