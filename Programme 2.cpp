#include <iostream> 
using namespace std; 

class shape{
	protected:
	float LARGEUR, HAUTEUR;
	public:
		shape(float largeur, float hauteur){
			LARGEUR = largeur;
			HAUTEUR = hauteur;
		}
};

class triangle:public shape{
	public:
		triangle(float i, float j): shape(i, j){}
		float area(){
			return (LARGEUR * HAUTEUR / 2);
		}
};
class rectangle:public shape{
	public:
		rectangle(float a, float b): shape(a , b){}
		float area(){
			return (LARGEUR * HAUTEUR);
		}
};


int main() {
	float l1, h1, l2, h2;
	
	cout<<"Entrer dimansion t1 : larguer = ";
	cin>>l1;
	cout<<"Entrer dimansion t1 : hauteur = ";
    cin>>h1;
    
	triangle t1(l1, h1);
	cout<<"Area t1 = "<<t1.area()<<endl;
	
	
	
	cout<<"\nEntrer dimansion r1 : larguer = ";
	cin>> l2;
	cout<<"Entrer dimansion r1 : hauteur = ";
    cin>> h2;
    
	rectangle r1(l2, h2);
	cout<<"Area r1 = "<<r1.area();
	
	
	
	return 0;
}

