// This program has recursive implementations of fibonacci and factorial

#include <iostream>
using namespace std;

int factorial(int n){
	if(n<=1)
		return 1;
	else 
		return(n*factorial(n-1));
}
	
int fibonacci(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fibonacci(n-2) + fibonacci(n-1));
}


int main(){
	cout<<factorial(4)<<endl;
	cout<<fibonacci(5)<<endl;
	return 0;
}
