#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

// Simple fucntion to show off using auto with return types
double multiply(double a, double b){
	return a*b;
}

int main() {
	// Use auto when we do direct assignment
	auto integer = 42;
	cout<<"interger is of type "<<typeid(integer).name()<<endl;

	// Use auto with a return type of a function
	auto double_precision = multiply(1.4,2.7);
	cout<<"double_precision is of type "<<typeid(double_precision).name()<<endl;
	// Use auto on a more comple date type
	vector<int> int_vec;
	auto iterator = int_vec.begin();
	cout<<"iterator is of type "<<typeid(iterator).name()<<endl;

	return 0;
}
