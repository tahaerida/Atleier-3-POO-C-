#include <iostream> 
using namespace std; 

class mother{
	public:
		virtual void display(){
			cout << "Hello I'm the MOTHER" <<endl;
		}
};
class daughter: public mother{
	public: 
		void display(){
			cout << "Hello I'm the daughter" <<endl;
		}
};

int main() {
	daughter d;
	d.display();
	return 0;
}

