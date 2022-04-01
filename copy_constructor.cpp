// This program shows how copy constructor works
#include <iostream>
using namespace std;

class vector{
	public:
		double start_x;
		double start_y;
		double end_x;
		double end_y;
		vector(){
			start_x=0;
			start_y=0;
			end_x=0;
			end_y=0;
		}
		vector(double x1,double y1,double x2,double y2){
			start_x=x1;
			start_y=y1;
			end_x=x2;
			end_y=y2;
		}
		// Copy constructor (had original object passed by reference)
		vector(vector &v){
			start_x=v.start_x;
			start_y=v.start_y;
			end_x=1.0;
			end_y=1.0;
		}
		void print(){
			cout<<"Start x: "<<start_x<<", Start y: " <<start_y<< endl;
			cout<<"End x: "<<end_x<<", End y: "<<end_y<<endl;
		}
};

int main(){
	vector obj(1.0,2.0,3.0,4.0);
	obj.print();
	vector obj2 = obj;
	obj2.print();
	return 0;
}
