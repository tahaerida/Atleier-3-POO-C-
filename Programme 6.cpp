#include <iostream> 
using namespace std; 

class Personne{
	protected:
		string nom;
		string prenom;
		string dateDeNaissance;
	public:
		Personne(string nom, string prenom, string dateDeNaissance){
			this->nom = nom;
			this->prenom = prenom;
			this->dateDeNaissance = dateDeNaissance;
		}
		virtual void afficher(){
			cout<<"Last name : "<<nom<<".\nFirst name : "<<prenom<<".\nBirth date : "<<dateDeNaissance<<endl;
		}
};
class Employe: public Personne{
	public:
		float salaire;
		Employe(string nom, string prenom, string dateDeNaissance, float salaire):Personne(nom, prenom, dateDeNaissance){
			this->salaire = salaire;
		}
		virtual void afficher(){
			cout<<"Last name : "<<nom<<".\nFirst name : "<<prenom<<"."<<endl;
			cout<<"Birth date : "<<dateDeNaissance<<".\nSalaire : "<<salaire<<"DH."<<endl;
		}
};
class Chef: public Employe{
	public:
		string service;
		Chef(string nom, string prenom, string dateDeNaissance, float salaire, string service):Employe(nom, prenom, dateDeNaissance, salaire){
			this->service = service;
		}
		virtual void afficher(){
			cout<<"Last name : "<<nom<<".\nFirst name : "<<prenom<<"."<<endl;
			cout<<"Birth date : "<<dateDeNaissance<<".\nSalary : "<<salaire<<"DH."<<endl;
			cout<<"Service : "<<service<<"."<<endl;
		}
};
class Directeur: public Chef{
	public:
		string societe;
		Directeur(string nom, string prenom, string dateDeNaissance, float salaire, string service, string societe):Chef(nom, prenom, dateDeNaissance, salaire, service){
			this->societe = societe;
		}
		void afficher(){
			cout<<"Last name : "<<nom<<".\nFirst name : "<<prenom<<"."<<endl;
			cout<<"Birth date : "<<dateDeNaissance<<".\nSalary : "<<salaire<<"DH."<<endl;
			cout<<"Service : "<<service<<".\nSociety : "<<societe<<"."<<endl;
		}
};
int main() {
	
	Personne P("NAKHLI", "HICHAM", "06/06/1976");
	P.afficher();
	cout<<"\n\n";
	Employe E("MOUNTASSER", "AYOUB", "06/06/1996", 7000);
	E.afficher();
	cout<<"\n\n";
	Chef C("OUFRID", "TAHA", "06/06/1984", 14000, "Team Boss");
	C.afficher();
	cout<<"\n\n";
	Directeur D("RIDA", "AHMED", "06/06/1971", 30000, "Owner", "InfoShop");
	D.afficher();
    
	return 0;
}

