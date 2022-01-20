#include <iostream> 
using namespace std;

class Personne {
	string nom;
	string prenom;
	string dateDeNaissance;
public:
	Personne(string nom, string prenom, string dateDeNaissance) {
		this->nom = nom;
		this->prenom = prenom;
		this->dateDeNaissance = dateDeNaissance;
	}
	void afficher() {
		cout << "Last name : " << nom << ".\nFirst name : " << prenom << ".\nBirth date : " << dateDeNaissance << endl;
	}
};
class Employe : public Personne {
	float salaire;
public:
	Employe(string nom, string prenom, string dateDeNaissance, float salaire) :Personne(nom, prenom, dateDeNaissance) {
		this->salaire = salaire;
	}
	void afficher() {
		Personne::afficher();
		cout<<"Salaire : " << salaire << "DH." << endl;
	}
};
class Chef : public Employe {
	string service;
public:
	Chef(string nom, string prenom, string dateDeNaissance, float salaire, string service) :Employe(nom, prenom, dateDeNaissance, salaire) {
		this->service = service;
	}
	void afficher() {
		Employe::afficher();
		cout << "Service : " << service << "." << endl;
	}
};
class Directeur : public Chef {
	string societe;
public:
	Directeur(string nom, string prenom, string dateDeNaissance, float salaire, string service, string societe) :Chef(nom, prenom, dateDeNaissance, salaire, service) {
		this->societe = societe;
	}
	void afficher() {
		Chef::afficher();
		cout << "Society : " << societe << "." << endl;
	}
};
int main() {

	Personne P("RIDA", "TAHA ELAMINE", "10/01/2000");
	P.afficher();
	cout << "\n\n";
	Employe E("MOUNTASSER", "AYOUB", "06/06/2000", 7000);
	E.afficher();
	cout << "\n\n";
	Chef C("OUFRID", "TAHA", "15/02/2000", 14000, "Team Boss");
	C.afficher();
	cout << "\n\n";
	Directeur D("RIDA", "AHMED", "01/01/1993", 30000, "Owner", "InfoShop");
	D.afficher();

	return 0;
}
