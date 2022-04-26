#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<string.h>
#include"date.h"
using namespace std;



date::date(int j,int m,int a,int h,int mi)
    {
    jour=j;
    mois=m;
    annee=a;
    heure=h;
    minu=mi;
    }

     istream& operator >>(istream& in ,date& d)
     {cout<<"donner le jour"<<endl;
        in>> d.jour;
        cout<<"donner le mois"<<endl;
        in>>d.mois;
        cout<<"donner l'annee"<<endl;
        in>>d.annee;
        cout<<"donner l'heure"<<endl;
        in>>d.heure;
        cout<<"donner les minutes "<<endl;
        in>>d.minu;
        return in ;
     }
     ostream& operator <<(ostream& out ,date& d)
          {
              out <<"le jour est: "<< d.jour<<"/"<<d.mois<<"/"<<d.annee<<endl;
              out<<"l'heure"<<d.heure<<":"<<d.minu;

 return out;

          }


          void date::ecrire_fichier_d(std::fstream &fichier)
          {
              fichier<<"la date est:  "<<jour<<" / "<<mois<<"/ "<<annee<<"\nl'heure est : "<<heure<<":"<<minu<<"\n";
          }


  void date::lire_fichier_d(std::fstream &fichier)
  {
      fichier>>jour>>mois>>annee>>heure>>minu;
  }
