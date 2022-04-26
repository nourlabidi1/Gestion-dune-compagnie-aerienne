#include "pilote.h"
#include"personne.h"


#include<string>
#include<iostream>
#include<fstream>
using namespace std;

pilote::pilote( float sal,int nu,string n,string p,string adr):personne(nu,n,p,adr)
{
salaire=sal;


}

 void pilote::saisir()
 { personne::saisir();
      cout<<"donner le salaire du pilote"<<endl;
   cin>>salaire;
 }

 void pilote::afficher()
 {personne::afficher();
cout<<"le salaire est  :"<<salaire<<endl;

 }

 string pilote::get_nom()
 {
     return this->nom;
 }




     istream& operator>>(istream& in,pilote&p )
   {
    personne *per=&p;
    in>>*per;
    cout<<"donner le salaire du pilote"<<endl;
   in>>p.salaire;

   return in;

   }
     ostream& operator<<(ostream& out ,pilote&p)
     { personne *per=&p;
     out<<*per;
        out<<"le salaire est :"<<p.salaire<<endl;



        return out;
     }





          void pilote::ecrire_fichier(fstream&fichier)

          {  personne::ecrire_fichier(fichier);
              fichier<<"le salaire est: "<<salaire<<"\n";
          }



  void pilote::lire_fichier(fstream &fichier)
  { personne::lire_fichier(fichier);
      fichier>>salaire;
  }
