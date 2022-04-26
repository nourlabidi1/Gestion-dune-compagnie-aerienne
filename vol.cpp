#include "vol.h"
#include"date.h"
#include"trajet.h"
#include"pilote.h"
#include"passager.h"
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

 vol::vol(date da,trajet t,pilote p,int num,string dep,string arr)
 {
 num_vol=num;
 d=da;
 pil=p;
 tra=t;
 depart=dep;
 arrivee=arr;
}
vol::vol(const vol& v)
{ num_vol=v.num_vol;
 d=v.d;
 pil=v.pil;
 tra=v.tra;
 depart=v.depart;
 arrivee=v.arrivee;
  passager * vi=new passager();
         for(int i=0;i<v.pass.size();i++)
         { *vi=v.pass[i];
           pass.push_back(*vi);
            }

}
//------------------------------------------
     vol::~vol()
     {
         for(int i=0;i<pass.size();i++)
        pass.erase(pass.begin()+i);
        pass.clear();
     }
    string  vol:: get_depart()
     {
         return depart;
     }

     string vol:: get_arrivee()
     {return arrivee ;

     }
     int vol::get_num()
     {
         return num_vol;
     }


     trajet& vol::get_trajet()
     { return tra;

     }

  //------------------------------------------
void vol::reserver()
     { cout<<"donner le nombre de reservation a effectuer"<<endl;
     int n;
     cin>>n;
     passager p;

     for (int i=0;i<n;i++)
     { if (tra.get_nb_max()>tra.get_nb_res())
        {p.saisir();
      pass.push_back(p);
      tra.modifier_nb_res();}
      else
      {cout<<"non";
      break;}
     }
     }
 //--------------------------------------------------------
     int vol::chercher_passager(int a)
     { for(int i=0;i<pass.size();i++)
     if (pass[i].get_cin()==a)
      return i;

     return -1;

     }

//-------------------------------------------------------
     void vol::annuler_res()
     { cout<<"donner le cin du passager à supprimer"<<endl;

        int pi;cin>>pi;
        if (chercher_passager(pi) != -1)
        pass.erase(pass.begin()+(chercher_passager(pi)));
      else cout<<"passager introuvable";
       tra.modifier_nb_resS();
     }
      //--------------------------------------------
    void vol::afficher_passager()
    { for(int i=0;i<pass.size();i++)
         pass[i].afficher();
         cout <<"-------------------------------";
    }
     //--------------------------------------------
      void vol::afficher_vol()
      { cout<<"le numero du vol est "<<num_vol<<endl;
      cout <<"la ville de depart est :"<<depart<<endl;
      cout<<"la ville d'arrivee est : "<<arrivee<<endl;
      cout<<"la date du vol est :"<<d<<endl;
      cout<<"le trajet est :"<<tra;
      cout<<"le nom du pilote:"<< pil.get_nom()<<endl;
      cout<<"les passagers du vols sont"<<endl;
      afficher_passager();
      cout<<endl;
      }
      //--------------------------------------------
    void vol::saisir_vol()
    {cout<<"donner le numero du vol  "<<endl;
     cin >>num_vol;
      cout <<"donner la ville de depart :"<<endl;
      cin>>depart;
      cout<<"donner la ville d'arrivee  : "<<endl;
      cin>>arrivee;
      cout<<"donner la date du vol  :"<<endl;
      cin>>d;
      cout<<"donner le trajet  :"<<endl;
      cin>>tra;
      cout<<" donner les coordonnes du pilote"<<endl;
     pil.saisir();
    }


//--------------------------------------------
         void vol::ecrire_fichier(std::fstream &fichier)
         {fichier<<"le num de vol est :"<<num_vol<<"\n";
          d.ecrire_fichier_d(fichier);
          fichier<<"la ville de depart est : "<<depart<<"\nla ville d'arrivee est: "<<arrivee<<"\n";
          tra.ecrire_fichier_t(fichier);
          pil.ecrire_fichier(fichier);
          for (int i=0;i<pass.size();i++)
            pass[i].ecrire_fichier(fichier);

      fichier<<"***********************************************************\n";
         }
//--------------------------------------------------
 /* vector<string> vol::lire_fichier(std::fstream &fichier)
{

 vector<string> pp;
 std::string line="";
 fichier.seekg(0);
		while(1)
		{ std::getline(fichier,line);
           pp.push_back(line);
			if (fichier.eof()) break;

		}
		return pp;

}

*/
