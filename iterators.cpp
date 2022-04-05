#include<iostream>
#include<vector>
using namespace std;
int main() {
	
	vector<int> int_vec;
	for(int i=0;i<10;i++){
		int_vec.push_back(i);
	}
	vector<int>::iterator itr_begin;
	vector<int>::iterator itr_end;
	itr_begin = int_vec.begin();
	itr_end = int_vec.end();

	for(auto i=int_vec.begin();i!=int_vec.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;

	for(auto i=int_vec.rbegin();i!=int_vec.rend();i++){
		cout<<*i<<" ";
	}
	cout<<endl;

	return 0;
}

