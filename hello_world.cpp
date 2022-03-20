// This program prints "Hello, entered name!".
// If a name is not provided, the program prints "Hello, world!"
// By: Dmitrii Varlamov
#include <iostream>
#include <string>
int main(int argc, char* argv[]){
	std::string name;
	if(argv[1]==NULL)
		name = "world";
	else
		name = argv[1];
	std::cout<<"Hello, "<<name<<"!"<<std::endl;
	return 0;
}
