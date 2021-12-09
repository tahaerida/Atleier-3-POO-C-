#include<iostream>
using namespace std;

class MyClass{
	public:
		MyClass();//constructeur
		~MyClass();//destructeur
};

MyClass::MyClass(){
	cout << "Creating an object." << endl;
}
MyClass::~MyClass(){
	cout <<"Creating the object.";
}

int main(){
	
	MyClass object;

	return 0;
}

