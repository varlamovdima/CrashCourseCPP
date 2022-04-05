// This program shows off the basics of variants in C++17
#include<iostream>
#include<cassert>
#include<variant>
using namespace std;
int main(){
	variant<int,float> v,w;
	v=12;
	w = get<int>(v);
	w = get<0>(v);
	w=v;

	try{
		// This will clearly fail because in is active
		get<float>(w);
	} catch(const bad_variant_access&){
		cout<<"The float field isn't active right now"<<endl;
	}


	return 0;
}
