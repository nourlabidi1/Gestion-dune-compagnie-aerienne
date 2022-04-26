#include "personne.h"
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

personne::personne(int num,string n,string p,string adr)
{ CIN=num;
 nom=n;
 prenom=p;
adresse=adr;
}
   void personne::saisir()
   {
       cout<<"donner le numero de cin"<<endl;
   cin>>CIN;
   cout<<"donner le nom "<<endl;
   cin>>nom;
   cout<<"donner le prenom"<<endl;
   cin>>prenom;
   cout<<"donner l'adresse"<<endl;
   cin>>adresse;

   }
  void personne::afficher()
     {
          cout<<"le CIN est :"<<CIN<<endl;
        cout<<"le nom est :"<<nom<<endl;
        cout<<"le prenom est :"<<prenom<<endl;
        cout<<"l'adresse est :"<<adresse<<endl;



     }







   istream& operator>>(istream& in,personne&p )
   { cout<<"donner le numero de cin"<<endl;
   in>>p.CIN;
   cout<<"donner le nom "<<endl;
   in>>p.nom;
   cout<<"donner le prenom"<<endl;
   in>>p.prenom;
   cout<<"donner l'adresse"<<endl;
   in>>p.adresse;

   return in;

   }
     ostream& operator<<(ostream& out ,personne&p)
     {
        out<<"le CIN est :"<<p.CIN<<endl;
        out<<"le nom est :"<<p.nom<<endl;
        out<<"le prenom est :"<<p.prenom<<endl;
        out<<"l'adresse est :"<<p.adresse<<endl;


        return out;
     }




          void personne::ecrire_fichier(fstream&fichier)

          {
              fichier<<"CIN  :"<<CIN<<"\nle nom est: "<<nom<<"\nle prenom est:  "<<prenom<<"\nl'adresse:   "<<adresse<<"\n";
          }



  void personne::lire_fichier(fstream &fichier)
  {
      fichier>>CIN>>nom>>prenom>>adresse;
  }
