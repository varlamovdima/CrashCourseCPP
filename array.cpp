// This program shows off arrays and pointer arithmetic in C++
#include <iostream>
using namespace std;

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	for(int i=0;i<10;i++){
		cout<<"Index "<<i<<", value "<<a[i]<< ", address "<<&a[i]<<endl;
	}
	cout<<endl;
	int b[] = {10,11,12};
	for(int i=0; i<3;i++){
		cout<<"Index "<<i<<", value "<<b[i]<<endl;
	}
	cout<<endl;
	int *ptr =b;
	cout<<"b[0]=*ptr= "<<*ptr<<endl;
	ptr++;
	cout<<"b[1]=*(ptr++)= "<<*ptr<<endl;
	cout<<endl;
	char hw_array[]={'H','e','l','l','o',' ','W','o','r','l','d','!'};
	const char * hw_string="Hello World!";
	cout<<hw_array<<endl;
	cout<<hw_string<<endl;
	return 0;
}
