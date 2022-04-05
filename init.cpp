// This program shows off how the init feature with for conditional and switch statements in C++
#include <iostream>
#include <string>
using namespace std;
int main(){
	string hello = "Hello, World in C++17";
	auto val1 = hello.find("Hello");
	if(val1!=string::npos){
		cout<<val1<< " - Hello"<<endl;
	}
	auto val2 = hello.find("World");
	if(val2!=string::npos){
		cout<<val2<< " - World"<<endl;
	}

	if(auto val3=hello.find("C++17"); val3!=string::npos){
		cout<<"Found C++17 at "<<val3<<" without leaking scople!"<<endl;
	}

	return 0;
}
