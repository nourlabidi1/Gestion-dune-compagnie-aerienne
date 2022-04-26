#include "vol.h"
#include"date.h"
#include"trajet.h"
#include"pilote.h"
#include"passager.h"
#include"personne.h"
#include<string>
#include<vector>
#include<iostream>
#include<fstream>

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


#include<string.h>
using namespace std;
 void lire(std::fstream &f)

 {


vector<string> pp;
 std::string line="";
 f.seekg(0);
		while(1)
		{ std::getline(f,line);
           pp.push_back(line);
			if (f.eof()) break;

		}
		for(int i=0;i<pp.size();i++)
                 {
                     cout<<pp[i];
                     cout<<endl;

                 }

                 pp.clear();}


int main()
{

int a=0;
vector<vol> v;
 char e[9];

int choix;
 std::fstream f;
    f.open("vol.txt", ios::in | ios::out | ios::trunc);
                 if(! f.is_open()) exit (-1);
 system("color 9");
//+++++++++++++++++++++++++++++++++++++++++++++++++++
   cout<<"/$$      /$$ /$$$$$$$$ /$$        /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$         \n";
   cout<<"| $$  /$ | $$| $$_____/| $$       /$$__  $$ /$$__  $$| $$$    /$$$| $$_____/     \n";
   cout<<"| $$ /$$$| $$| $$      | $$      | $$  \\__/| $$  \\ $$| $$$$  /$$$$| $$               \n";
   cout<<"| $$/$$ $$ $$| $$$$$   | $$      | $$      | $$  | $$| $$ $$/$$ $$| $$$$$             \n";
   cout<<"| $$$$_  $$$$| $$__/   | $$      | $$      | $$  | $$| $$  $$$| $$| $$__/             \n";
    cout<<"| $$$/ \\  $$$| $$      | $$      | $$    $$| $$  | $$| $$\\  $ | $$| $$               \n";
   cout<<"| $$/   \\  $$| $$$$$$$$| $$$$$$$$|  $$$$$$/|  $$$$$$/| $$ \\/  | $$| $$$$$$$$      \n ";
   cout<<"|__/     \\__/|________/|________/ \\______/  \\______/ |__/     |__/|________/        \n";
    cout<<"\n"<<endl<<endl<<endl<<endl;
     cout<<"saisir le mot de passe svp ";
      do
     {cin>>e;
     if (!(strcasecmp(e,"SONIE"))==0)
     {system("color 4");
    cout<<"\n mot de passe incorrecte ,veuillez svp retapez le mdp";}}
    while (!(strcasecmp(e,"SONIE"))==0);

if ((strcasecmp(e,"SONIE"))==0)
{system("color 2");
    for(int i=0;i<20;i++)

{
cout<<"\n\n\n";

cout<<"     BIENVENUE CHEZ SONIE VOYAGE \n \n  Reservez maintenant votre hotel en temps reel\n ";
cout<<"\n  * * * * * * *   MENU  * * * * * * * * * * \n";
cout<<"  *                                         * \n";
cout<<"  *      1-Liste des vols                   *\n";
cout<<"  *      2-rechercher un vol                *\n" ;
cout<<"  *      3- ajouter un vol                  *\n";
cout<<"  *      4-Reserver un vol                  *\n";
cout<<"  *      5-supprimer une reservation        *\n";
cout<<"  *      6-chercher une reservation         *\n";
cout<<"  *      7- quitter                         *\n ";
cout<<"  *                                         * \n";
cout<<"  * * * * * * * * * * * * * * * * * * * * *\n";
cout<<"nos contacts \n Adresse:infoe12122@gmail.com \n rue des Entrepreneurs , 3eme etage ,Charguia II - 2035 TUNIS CARTHAGE \n Tel:+(216) 759 952 235 ";




         do
            {
              cout<<"\n\n >>>> Veuillez choisir une des options donnees \n";
            cin>>choix;
             }
         while ((choix<1) || (choix>7));

        {

         switch (choix)
         {
             case 1: {
                 system("cls");
                  system("color 9");
                 cout<<" ***********  Les vols disponibles  ************\n\n\n";
               // for(i=0;i<v.size();i++)
               //  {
              //       v[i].afficher_vol();
               //  }

cout <<"*********************************************************"<<endl;


                lire(f);


                 }



             break;
               case 2: if(v.empty())
                     cout<<" Aucun vol n'est disponible maintenant "<<endl;

                else
                {                 system("cls");
                 system("color 9");

                    int num0=0;
                    cout<<"entrez le num de vol que vous voulez chercher : ";
                    cin>>num0;
                    int i;
                    for(i=0;i<v.size();i++)
                    if (v[i].get_num()==num0)
                    {
                       v[i].afficher_vol();
                       break;
                    }
                    if (i>=v.size())
                        cout<<"le vol n'existe pas";
                }
                   break;
             case 3:{                 system("cls");
              system("color 9");

                // (date da,trajet t,pilote p,int num,string dep,string arr
               date d (1,2,3,4,5);
               trajet tt(3,4,5);
               //float sal,int nu,string n,string p,string adr
               pilote p(12.3,25,"bhg","ghf","jhg");
             vol l(d,tt,p,5,"reeg","gdjf");
             l.saisir_vol();
             v.push_back(l);
              fstream f;//enregistrement de liste des vols
			f.open("vol.txt", ios::in | ios::out | ios::app);
			if (!f.is_open()) cout << "erreur d'ouverture du fichier" << endl;
			else
				//f.seekg(0);
            for(unsigned i=a;i<v.size();i++)
			      {v[i].ecrire_fichier(f);
			       a++;

			      }
system("cls");}
             break;
             case 4:{                 system("cls");
              system("color 9");

                 cout<<"donner la ville de depart et d'arrivee"<<endl;
                 std::string dep,arr;
                 cin >>dep;
                 cin>>arr;
                  bool trouve=false;
                for(int i=0;i<v.size();i++)
                    if ((v[i].get_depart()==dep)&&(v[i].get_arrivee()==arr))
                      {cout<<v[i].get_trajet();
                      trouve =true;}
                if (!trouve)
                    cout<<"on n'a pas un vol de telle destination "<<endl;}
               cout<<"tapez le num de vol que vous voulez reservez"<<endl;
               int k;
               cin>>k;
               int i;
                    for(i=0;i<v.size();i++)
                    if (v[i].get_num()==k)
                    {
                       v[i].reserver();
                       break;
                    }
                    if (i>=v.size())
                        cout<<"le vol n'existe pas";

             break;
             case 5:{                 system("cls");
              system("color 9");

                int num0=0;
                    cout<<"entrez le num de vol que vous voulez supprimer: ";
                    cin>>num0;
                    int i;
                    for(i=0;i<v.size();i++)
                    if (v[i].get_num()==num0)
                    { v[i].annuler_res();
                    break;
                    }
                    if (i>=v.size())
                        cout<<"le vol n'existe pas";

         }
             break;

             case 6:{                 system("cls");
              system("color 9");

                 int num0;
 cout<<"entrez le num de vol que vous voulez chercher : ";
                    cin>>num0;
                                    int num1;
 cout<<"entrez cin du passager  : ";
                    cin>>num1;
                    int j;
                    for(j=0;j<v.size();j++)
                    if (v[j].get_num()==num0)
                    { int l=(v[j].chercher_passager(num1));
                    if( l==-1) {cout<<"reservation introuvable";
                                                    break;}
                    else cout << "la reservation de ce passagerdans vol existe "<<l<<endl;



                    break;
                    }
                    if (j>=v.size())
                        cout<<"la reservation  n'existe pas";


             }

             break;


         }
if (choix==7)   {



        break;}}


printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\n>>>>Revenez quand vous voudrez, vous etes le bienvenue chez nous.\n");

printf(" \n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
}
f.close();
return 0;
}

}
