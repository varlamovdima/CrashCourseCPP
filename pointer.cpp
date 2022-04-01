// This program shows pointer manipulation
#include <iostream>
using namespace std;



int main(){
	int a = 5;
	int* ptr_a = &a;
	cout<<"a: value: "<<a<<", address "<<&a<<endl;
	cout<<"ptr_a: value: "<<ptr_a<<", address "<<&ptr_a<<endl;
	cout<<"*b = a = "<<*ptr_a<<endl;
       	cout<<endl;		
	a=10;

	cout<<"a: value: "<<a<<", address "<<&a<<endl; 
	cout<<"ptr_a: value: "<<ptr_a<<", address "<<&ptr_a<<endl; 
	cout<<"*b = a = "<<*ptr_a<<endl;
       	cout<<endl;

	int c=3;
	int &d = c;
 		
	cout<<"c: value: "<<c<<", address "<<&c<<endl; 
	cout<<"d: value: "<<d<<", address "<<&d<<endl; 
	return 0;
}
