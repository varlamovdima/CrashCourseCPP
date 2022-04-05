// This program shows the importance of understanding how function
// arguments are passed in C++
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Load number using pass-by-value
// Uses copy constructor in
vactor<int> load_numbers_value(vector<int> v){
	// Load the vector with 1k values
	for(int i=0; i<1000; i++){
		v.push_back(i);
	}
	// Return the vector
	// Uses automatic move on return for pass-by value param
	return v;
}

// Load number using pass-by-rvalue-ref (no move out)
// No copy constructor
vector<int> load_numbers_rvalue_ref_1(vector<int>&& v){
	// Load the vector with 1k values
	for(int i=0; i<1000; i++){
		v.push_back(i);
	}

	return v;
}


int main(int argc, char *argv[]){
	vector<int> v;

	for(int i=0; i<10; i++){
		v.clear();
		v = load_numbers_value(v);
	}
	
	return 0;
}
