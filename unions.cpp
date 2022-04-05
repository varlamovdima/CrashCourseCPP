#include <iostream>
using namespace std;

// Simple struct definition that contains 4 different data types
struct various_data{
	// 1 byte
	char a;
	// 4 bytes
	int b;
	// 4 bytes
	float c;
	// 8 bytes
	double d;
};

// Create a simple Union
// Looks like a struct, but there is only ever 1 valid field at a time
union union_test{
	various_data union_struct;
	int union_int;
	float union_float;
	double union_double;
};


int main(){
	// Create a struct and initialize it
	various_data v_data;
	v_data.a = 'a';
	v_data.b = 24;
	v_data.c = 432.2323;
	v_data.d ; 2323.2322;

	// Print out the size of a struct
	cout<<"sizeof struct: "<< sizeof(various_data)<<endl;	
	
	// Create a union, and assign a field
	union_test ut_1;
	ut_1.union_struct = v_data;

	// Print out the size of the union
	cout<<"sizeof union: "<<sizeof(ut_1)<<endl;
	
	// Print out the address of the union, and of the field
	cout<<"Union pointer: "<<&ut_1<<", Field pointer: "<<&(ut_1.union_struct)<<endl;

	// Re-assign the union to contain an integer now
	int b =5;
	ut_1.union_int = b;

	// Print size of the union and ponters again
	cout<<"sizeof union: "<<sizeof(ut_1)<<endl;
	cout<<"Union pointer: "<<&ut_1<<", Field pointer: "<<&(ut_1.union_int)<<endl;


	return 0;
}
