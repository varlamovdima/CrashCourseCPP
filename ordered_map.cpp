#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	map<int,int> ordered_map;
	ordered_map[9] = 9 * 9;
	ordered_map[4] = 4 * 4;
	ordered_map[1] = 1 * 1;

	for(auto itr=ordered_map.begin();itr!=ordered_map.end();itr++){
		cout<<"Key: "<<itr->first<<" Value: "<<itr->second<<endl;
	}

	string animal1 = "aardvark";
	string animal2 = "baboon";
	string animal3 = "zebra";

	map<string,int> animals;

	animals.insert(make_pair(animal3,10));
	animals.insert(make_pair(animal2,10));
	animals.insert(make_pair(animal1,10));
	for(auto itr=animals.begin();itr!=animals.end();itr++){
		cout<<"Key: "<<itr->first<<" Value: "<<itr->second<<endl;
	}

	return 0;
}
