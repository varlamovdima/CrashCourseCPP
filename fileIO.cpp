// This program shows fstream
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <bitset>

using namespace std;

void print_matrix(int* a, int n){
	for(int i=0;i<n*n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void m_mul(int *a, int *b, int *c, int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp = 0;
			for(int k=0;k<n;k++){
				temp+=a[i*n+k]*b[k*n+j];
			}
			c[i*n+j]=temp;
		}
	}
}

int main(int argc, char *argv[]){
	fstream file1;
	// Different modes for opening a file
	// app: Output is appended to the end of a file
	cout<<bitset<8>(ios::app)<<endl;
	// ate: Open a file and seek to end of file
	cout<<bitset<8>(ios::ate)<<endl;
	// in: Open a file for reading
	cout<<bitset<8>(ios::in)<<endl;
	// out: Open a file for writing (also truncate)
	cout<<bitset<8>(ios::out)<<endl;
	// trunc: Clear the contensts of file before opening it
	cout<<bitset<8>(ios::trunc)<<endl;
	// How to combine flags
	cout<<bitset<8>(ios::out|ios::in)<<endl;

	// Open a file for reading
	file1.open(argv[1],ios::in);
	// Declare and allocate memory
	int *a;
	int n = 3;
	size_t bytes = n*n*sizeof(int);
	a=(int*)malloc(bytes);
	
	// Read in matrix 1
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			file1>>a[i*n+j];
		}
	}
	file1.close();

	print_matrix(a,n);


	fstream file2;
	file2.open(argv[2],ios::in);
	file2>>n;
	int *b;
	bytes = n*n*sizeof(int);
	b=(int*)malloc(bytes);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			file2>>b[i*n+j];
		}
	}
	file2.close();

	print_matrix(b,n);

	int *c;
	c = (int*)malloc(bytes);
	m_mul(a,b,c,n);
	fstream file3;
	file3.open(argv[3],ios::out);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			file3<<c[i*n+j]<<' ';
		}
		file3<<'\n';
	}
	file3.close();

	return 0;
}
