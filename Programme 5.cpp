#include <iostream> 
using namespace std; 

class Animal{
	protected:
		string name;
		int age;
	public:
		virtual void setValue(string name, int age){
			this->name = name;
			this->age = age;
		}
};
class Zebra:public Animal{
	string lieu;
	public:
		void setValue(string name, int age, string lieu){
			this->name = name;
			this->age = age;
			this->lieu = lieu;
		}
		void display(){
			cout <<"The name : "<< name <<".\nThe age : "<< age <<".\nIts origins: "<< lieu <<".";
		}
};
class Dolphin:public Animal{
	string lieu;
	public:
		void setValue(string name, int age, string lieu){
			this->name = name;
			this->age = age;
			this->lieu = lieu;
		}
		void display(){
			cout <<"The name : "<< name <<".\nThe age : "<< age <<".\nIts origins: "<< lieu <<".";
		}
};

int main() {
	Zebra z1;
	z1.setValue("Horse Zebra", 8, "Native to Africa");
	z1.display();
	
	cout <<"\n\n";
	
	Dolphin d1;
	d1.setValue("Blue Dolphin", 2, "The Eocene epoch");
	d1.display();
	
	return 0;
}

