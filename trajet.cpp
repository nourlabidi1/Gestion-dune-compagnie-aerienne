#include "trajet.h"
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
 using namespace std;

   trajet:: trajet(int n,int b,int c,string v)
    {
        num_trajet=n;
        nb_res=0;
        nb_max=c;
        villes="";    }
    trajet::trajet(const trajet&t)
    {
         num_trajet=t.num_trajet;
        nb_res=t.nb_res;
        nb_max=t.nb_max;
        villes=t.villes;
       /* string * vi=new string();
         for(int i=0;i<t.ville.size();i++)
         { *vi=t.ville[i];
           ville.push_back(*vi);
            }*/
    }


   trajet& trajet::operator =(const trajet&t)
   {
        num_trajet=t.num_trajet;
        nb_res=t.nb_res;
        nb_max=t.nb_max;
        villes=t.villes;
        /*string * vi=new string();
         for(int i=0;i<t.ville.size();i++)
         { *vi=t.ville[i];
           ville.push_back(*vi);
            }*/


       return *this;
   }






    trajet:: ~trajet()
    {
      /*  for(int i=0;i<ville.size();i++)
        ville[i].erase();
         ville.clear();*/
    }
     int trajet::get_nb_max()
     {
         return nb_max;
     }
     int trajet::get_nb_res()
     {
         return nb_res;
     }
      void trajet::modifier_nb_res()
      {nb_res ++;

      }
       void trajet::modifier_nb_resS(){
       nb_res --;
       }
   istream& operator>>(istream&in,trajet& t)
       {cout<<"donner le numero de trajet:"<<endl;
       in >>t.num_trajet;
       t.nb_res=0;
       cout<<"donner le nombre max de reservation"<<endl;
       in>>t.nb_max;
       cout<<"donner les villes du trajet , et quand vous terminez tapez #"<<endl;;
       string j;
       while(1)
       {
           in>>j;
           if (j=="#") break;
           else {t.villes+="  ";
            t.villes+=j;}

       }
      /* cout<<"donner le nombre de villes"<<endl;
       int m;
       in>>m;

       cout<<"donner les villes du trajet successivement"<<endl;

      for(int i=0;i<m;i++)
        {cout <<"ouiiiiiii";
            in>>t.ville[i];
            cout<<"noooon";
        t.ville.push_back(t.ville[i]);*/

          return in;
       }



          void trajet::ecrire_fichier_t(fstream &fichier)
          { fichier<<"le numero de trajet est: "<<num_trajet<<"\nle nombre de reservation est: "<<nb_res<<"\n"<<"le nombre max de reservation est :"<<nb_max<<"\n"<<"les villes du trajet sont :  "<<villes<<endl;
          /*for (int i=0;i<ville.size();i++)
            fichier<<ville[i]<<endl;*/

          }
  void trajet::lire_fichier_t(fstream &fichier)
  {
      fichier>>num_trajet>>nb_res>>nb_max>>villes;
         /* for (int i=0;i<ville.size();i++)
            fichier>>ville[i];*/
  }
ostream& operator<<(ostream& out,trajet&t)

        {out<<" le numero de trajetest :"<<t.num_trajet<<endl;
    out<<"le numero de reservations est :"<<t.nb_res<<endl;
       out<<" le nombre max de reservation est "<< t.nb_max<<endl;
       out<<" les villes du trajet successivement sont "<<endl;
       out<< t.villes<<endl;
     /* for(int i=0;i<t.ville.size();i++)
        out<<t.ville[i]<<"\t";*/
        return out;
        }

