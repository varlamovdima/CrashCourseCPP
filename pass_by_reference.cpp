// This program shows off two function for multiplication that use pass
// by value and pass by reference respectively

#include <iostream>
using namespace std;

void multiply_pbv(int a, int b, int p){
	p=a*b;
	cout<<"Pass by value product = " <<p<<endl;
}
void multiply_pbr(int &a, int &b, int &p){
	p=a*b;
	cout<<"Pass by reference product = "<<p<<endl;
}

int main(){
	int multiplier = 5;
	int multiplicand = 10;
	int product = 0;
	multiply_pbv(multiplier,multiplicand,product);
	cout<<product<<endl;

	multiply_pbr(multiplier,multiplicand,product);
	cout<<product<<endl;
	return 0;
}
