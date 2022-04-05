#include <iostream>

using namespace std;

struct USCurrency {
	int dollars;
	int cents;
	// Constructor with default values
	USCurrency(const int d=0,const int c=0) :dollars(d),cents(c){}
};

// Overloading the '+' operator to add two structures
USCurrency operator+(const USCurrency m, const USCurrency o){
	USCurrency tmp(0,0);
	tmp.cents = m.cents + o.cents;
	tmp.dollars = m.dollars + o.dollars;

	if(tmp.cents >100){
		tmp.dollars+=1;
		tmp.cents -=100;
	}
	return tmp;
}

int main(){
	// Create to structs with different values
	USCurrency wallet_1(5,50);
	USCurrency wallet_2(6,75);
	USCurrency wallet_3 = wallet_1+wallet_2;
	cout<<wallet_3.dollars<<" dollars and "<<wallet_3.cents<<" cents"<<endl;
	return 0;
}
