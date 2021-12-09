#include <iostream> 
#include<cmath>

using namespace std; 

class vecteur3d{
	protected:
		float x, y, z;
	public:
		vecteur3d(float x=0, float y=0, float z=0){
			this->x = x ;
			this->y = y ;
			this->z = z ;
		}
		void afficher(){
			cout <<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		vecteur3d somme(vecteur3d &vect){
			vecteur3d result;
			result.x = x + vect.x;
			result.y = y + vect.y;
			result.z = z + vect.z;
			return result;
		}
		float produitScalaire(vecteur3d &v){
			return (x * v.x + y * v.y + z * v.z);
		}
		bool coincide (vecteur3d &v){
			return (x == v.x && y == v.y && z == v.z);
		}
		float norme(){
			return sqrt (x*x + y*y + z*z);
		}
		vecteur3d normax(vecteur3d v){
			if (this->norme() > v.norme())
				return *this;
			return v;
		}
		vecteur3d *normax(vecteur3d *v){
			if (this->norme() > v->norme())
				return this;
			return v;
		}
		vecteur3d &normaxref(vecteur3d &v){
			if (this->norme() > v.norme())
				return *this;
			return v;
		}
};
int main() {
	vecteur3d v1(1,2,3);
	cout << "V1";
	v1.afficher();
	vecteur3d v2(5,6,7);
	cout << "V2";
	v2.afficher();
	cout << "\nLa somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
    cout << "\nLe produit scalaire des vecteurs v1 et v2 est : ";
	cout<<(v1.produitScalaire(v2))<<endl;
	cout << "\nEst ce que V1 et V2 coincident ? "<<endl;
	if (v1.coincide(v2))
		cout << "Les vecteurs V1 et V2 coincident."<<endl;
	else 
		cout << "Les vecteurs V1 et V2 ne coincident pas."<<endl;
	cout<<"\n(Par valeur)Le vecteur qui a la plus grande norme est : ";
	(v1.normax(v2)).afficher();
	cout<<"\n(Par adresse)Le vecteur qui a la plus grande norme est : ";
	(v1.normax(&v2))->afficher();
	cout<<"\n(Par reference)Le vecteur qui a la plus grande norme est : ";
	(v1.normaxref(v2)).afficher();
	
	return 0;
}

