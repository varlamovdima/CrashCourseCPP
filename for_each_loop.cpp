#include <iostream>
#include <vector>
using namespace std;

int main(){
	for(int i:{1,2,3,4,5,6}){
		cout<<i<<" ";
	}
	cout<<endl;

	vector<int> int_vector;
	int temp;

	for(unsigned i=0;i<6;i++){
		temp = rand()%100;
		cout<<temp<<" ";
		int_vector.push_back(temp);
	}
	cout<<endl;
	
	for(auto &i:int_vector){
		i++;
	}

	for(unsigned i=0;i<int_vector.size();i++){
		cout<<int_vector[i]<<" ";
	}
	cout<<endl;

	return 0;
}
