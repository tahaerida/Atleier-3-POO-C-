#include <iostream> 
using namespace std; 

class complexNumber{
	protected:
		float a, b;
	public:
	complexNumber(float a, float b){
		this->a = a;
		this->b = b;
	}
	int chooseOperation(){
			int choice=0;
			cout <<"\nchoose operation number :\n1- Addition.\n2- Substraction.\n3- Multiplication.\n4- Devision."<<endl;
			cin >> choice;
			while (choice < 1 || choice > 4){
				cout << "Please enter number between 1 and 4 : ";
				cin >>choice;
			}
			return choice;
		}
	float makeOperation(int x){
			float resultat;
			switch (x){
				case 1 :
					resultat = a + b;
					break;
				case 2 :
					resultat = a - b;
					break;
				case 3 :
					resultat = a * b;
					break;
				case 4 :
					resultat = a / b;
					break;
			}
			return resultat;
		}
};

int main() {
	//entering data;
	int r1, r2, img1, img2;
	cout << "Enter real part of number 1 : ";
	cin >> r1;
	cout << "Enter real part of number 2 : ";
	cin >> r2;
	cout << "Enter imaginary part of number 1 : ";
	cin >> img1;
	cout << "Enter imaginary part of number 2 : ";
	cin >> img2;
	
	complexNumber real(r1, r2);
	complexNumber img(img1, img2);
	
	int operation = real.chooseOperation();
	
	cout <<"\nReal part after operation = "<<real.makeOperation(operation)<<endl;
	cout <<"Imaginary part after operation = "<<img.makeOperation(operation)<<"i"<<endl;
	
	return 0;
}

