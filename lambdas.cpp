#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct building{
	string name;
	int height;

	building(string s,int h): name(s), height(h){}
};

int main(){
	[]{
		cout<<"Hello, lambda!" <<endl;
	}();
	cout<<endl;

	auto print_lambda = [] {
		cout<<"Hello, lambda!"<<endl;
	};

	// Call it like a fucntion
	print_lambda();
	cout<<endl;

	// We can pass parameters to lambda
	const string some_string("Some constant string");
	// Pass the string to the lambda that returns a double
	auto parameter_lambda = [] (const string &s) -> double {
		cout<<s<<endl;
		return 123.456;
	};

	// Call it like a fucntion with a parameter and return value
	double some_num = parameter_lambda(some_string);
	cout<<some_num<<endl;
	cout<<endl;

	int a =5;
	int b=10;
	cout<<"a = "<<a<<", b = "<<b<<endl;
	cout<<endl;

	auto capture_lambda = [=,&b]{
		b++;
	};
	capture_lambda();
	cout<<"a = "<<a<<", b = "<<b<<endl;
	cout<<endl;

	vector<building> buildings{
		building("Bank",234),
		building("Monument",542),
		building("Skyscraper",808),
		building("Library",145),
		building("Office",200)
	};
	cout<<"Pre-sort"<<endl;
	for(const auto &s:buildings){
		cout<<"Building name: "<<s.name<<" Building height: "<<s.height<<endl;
	}
	cout<<endl;

	// Create a sorting rule
	auto sort_rule=[](const building &b1,const building &b2) ->bool{
		return b1.height<b2.height;
	};
	sort(buildings.begin(),buildings.end(),sort_rule);

	cout<<"Post-sort"<<endl;
	for(const auto &s:buildings){
		cout<<"Building name: "<<s.name<<" Building height: "<<s.height<<endl;
	}
	return 0;
}
