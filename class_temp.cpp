#include <iostream>
using namespace std;

template <typename T>
class Point {
	private:
		T x;
		T y;
	public:
		Point(const T u,const T v): x(u),y(v) {}
		T getX() {return x;}
		T getY() {return y;}
};

int main(){
	Point<int> p_i(4,5);
	cout<<"Int "<<p_i.getX()<<" "<< p_i.getY()<<endl;
	
	Point<float> p_d(4.4,5.6);
	cout<<"Float "<<p_d.getX()<<" "<< p_d.getY()<<endl;
	
	return 0;
}
