#include<iostream>
using namespace std;

enum suit_t{
	CLUBS=0,
	DIAMONDS=1,
	HEARTS=2,
	SPADES=3
};

const char* print_suit(const suit_t suit){
	const char *names[] ={"Clubs","Diamonds","Hearts","Spades"};
	return names[suit];
}


int main(){
	suit_t card1 = CLUBS;
	suit_t card2 = SPADES;

	cout<<"Card1 is a "<<print_suit(card1)<<" with values "<<card1<<endl;
	cout<<"Card2 is a "<<print_suit(card2)<<" with values "<<card2<<endl;

	return 0;
}
