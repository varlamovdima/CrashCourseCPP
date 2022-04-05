#include <iostream>
using namespace std;

class IntegerArray {
	public:
		int *data;
		int size;

		// Constructor
		IntegerArray(int size){
			data = new int[size];
			this->size = size;
			// (*this).size = size;
		}

		// Distructor
		~IntegerArray(){
			delete[] data;
		}

		// Copy constructor
		IntegerArray(IntegerArray &o){
			data = new int[o.size];
			size = o.size;
			for(int i=0;i<size;i++){
				data[i]=o.data[i];
			}
		}

};

int main(){
	IntegerArray ia1(10);
	for(int i=0;i<ia1.size;i++){
		ia1.data[i] = i;
	}

	if(true) {
		IntegerArray ia2 = ia1;
	}	
	

	return 0;
}
