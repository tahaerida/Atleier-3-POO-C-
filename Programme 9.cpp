#include <iostream> 
#include<cmath>

using namespace std; 

class test{
	public:
		static int counter;
		void call(){
			counter++;
		}
};

int test::counter=0;

int main() {
	
	test t1;
	for (int i = 0 ; i < 8 ; i++){
		t1.call();
	}
	cout <<"Calling time of function <call> : "<<test::counter<<"."<<endl;//8
	
	return 0;
}

