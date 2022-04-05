#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
	unordered_map<string,double> constants;
	string pi ="PI";
	string root2 = "ROOT2";
	string e = "E";

	constants[pi]=3.14159265;
	constants[root2]=1.414;

	constants.insert(make_pair(e,2.718));

	// Dump all values in the map
	for(auto itr = constants.begin();itr!=constants.end();itr++){
		cout<<"Key: "<<itr->first<<" Value: "<<itr->second<<endl;
	}

	// Expample of how to chech if a value is in the map
	string lambda = "LAMBDA";
	// End points to the position after the last elements
	if(constants.find(lambda) == constants.end()){
		cout<<"Was not able to find: "<<lambda<<endl;
	}

	return 0;
}
