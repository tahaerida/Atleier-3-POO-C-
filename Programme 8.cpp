#include <iostream> 
#include<cmath>

using namespace std; 

class Media{
	protected:
		string titre;
	public:
		virtual void setAttribut(string titre){
			this->titre = titre;
		}
		virtual void imprimer(){
			cout <<"Media name : "<<titre<<"."<<endl;
		}
};
class Audio:public Media{
	string name;
	public:
		virtual void setAttribut(string name){
			this->name = name;
		}
		virtual void imprimer(){
			cout <<"Audio name: "<<name<<"."<<endl;
		}
};
class CD:public Audio{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"CD name : "<<name<<"."<<endl;
		}
};
class Cassette:public Audio{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Cassette name : "<<name<<"."<<endl;
		}
};
class Disque:public Audio{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Disque name : "<<name<<"."<<endl;
		}
};
class Livre:public Media{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Book name : "<<name<<"."<<endl;
		}
};
class Presse:public Media{
	string name;
	public:
		virtual void setAttribut(string name){
			this->name = name;
		}
		virtual void imprimer(){
			cout <<"Presse name : "<<name<<"."<<endl;
		}
};
class Magazine:public Presse{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Magazine name : "<<name<<"."<<endl;
		}
};
class Journal:public Presse{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Journal name : "<<name<<"."<<endl;
		}
};
class Revue:public Presse{
	string name;
	public:
		void setAttribut(string name){
			this->name = name;
		}
		void imprimer(){
			cout <<"Revue name : "<<name<<"."<<endl;
		}
};
int main() {
	
	Journal p1;
	p1.setAttribut("Hespress");
	p1.imprimer();
	
	return 0;
}

