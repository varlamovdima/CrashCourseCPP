// This program shows off overloaded functions in C++ 
#include <iostream>

using namespace std;

void print(char c){
	cout<<"char size is "<<sizeof(c)<<endl;
}
void print(int i){
	cout<<"int size is "<<sizeof(i)<<endl;
}
void print(float f){
	cout<<"float size is "<<sizeof(f)<<endl;
}
void print(double d){
	cout<<"double size is "<<sizeof(d)<<endl;
}

int main(){
	char c = 23;
	int i = 52;
	float f = 12.3;
	double d = 332.2;
	print(c);
	print(i);
	print(f);
	print(d);
	return 0;
}
