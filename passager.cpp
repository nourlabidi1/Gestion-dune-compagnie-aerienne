#include "passager.h"
#include"personne.h"


#include<string>
#include<iostream>
#include<fstream>
using namespace std;

passager::passager( int num,int nu,string n,string p,string adr):personne(nu,n,p,adr)
{ num_pass=num;

}

 void passager::saisir()
 { personne::saisir();
      cout<<"donner le numero de passeport du passager"<<endl;
   cin>>num_pass;
 }
int passager::get_cin()
{return this->CIN;

}
 void passager::afficher()
 {personne::afficher();
cout<<"le numero de passeport est :"<<num_pass<<endl;

 }






     istream& operator>>(istream& in,passager&p )
   {
    personne *per=&p;
    in>>*per;
    cout<<"donner le numero de passeport du passager"<<endl;
   in>>p.num_pass;

   return in;

   }
     ostream& operator<<(ostream& out ,passager&p)
     { personne *per=&p;
     out<<*per;
        out<<"le numero de passeport est :"<<p.num_pass<<endl;



        return out;
     }





          void passager::ecrire_fichier(fstream&fichier)

          {  personne::ecrire_fichier(fichier);
              fichier<<"le num de passeport est:  "<<num_pass<<"\n";
          }



  void passager::lire_fichier(fstream &fichier)
  { personne::lire_fichier(fichier);
      fichier>>num_pass;
  }
