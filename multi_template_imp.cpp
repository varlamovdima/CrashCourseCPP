#include <iostream>
#include <cctype>
using namespace std;

template <typename T>
class Container {
	private:
		T element;
	public:
		Container(const T e) : element(e) {}
		T inc() {return ++element;}
		T getElement() {return element;}
};

template<>
class Container <char> {
	private:
		char element;
	public:
		Container(const char e):element(e){}
		char uppercase() {return toupper(element);}
		char getElement() {return element;}
};

int main(){
	Container<int> t(10);
	t.inc();
	cout<<t.getElement()<<endl;

	Container<char> c('d');
	cout<<c.uppercase()<<endl;

	cout<<c.getElement()<<endl;

	return 0;
}
