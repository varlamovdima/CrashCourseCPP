#include<iostream>
#include<vector>
#include<list>
#include<forward_list>
#include<string>
#include<array>
#include<deque>
#include<algorithm>
using namespace std;
template <typename T>
void print_container(T a){
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main() {

	array<int,10> int_array = {9,4,3,8,7,9,7,4,6};
	cout<<"Array: "<<endl;
	print_container(int_array);
	sort(int_array.begin(),int_array.end());
	print_container(int_array);
	cout<<endl;

	vector<int> int_vector;
	for(int i=0;i<10;i++){
		int_vector.push_back(i*i);
	}

	cout<<"Vector"<<endl;
	print_container(int_vector);
	int_vector.pop_back();
	int_vector.pop_back();
	int_vector.pop_back();
	print_container(int_vector);
	cout<<endl;

	list<int> int_list;
	for(int i=0;i<5;i++){
		int_list.push_back(i);
	}
	cout<<"List"<<endl;
	print_container(int_list);
	auto itr = int_list.begin();
	int_list.insert(itr,5);
	print_container(int_list);
	int_list.insert(itr,6);
	print_container(int_list);
	int_list.insert(int_list.begin(),7);
	print_container(int_list);

	for(auto r_itr=int_list.rbegin();r_itr!=int_list.rend();r_itr++){
		cout<<*r_itr<<" ";
	}
	cout<<endl;

	deque<int> int_deque;
	for(int i=0;i<5;i++){
		int_deque.push_back(i);
	}
	cout<<"Deque"<<endl;
	print_container(int_deque);
	int_deque.push_front(5);
	int_deque.push_front(6);
	int_deque.push_front(7);
	print_container(int_deque);

	return 0;
}
