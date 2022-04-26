#ifndef VOL_H
#define VOL_H
#include"date.h"
#include"trajet.h"
#include"pilote.h"
#include"passager.h"
#include<vector>
#include<string>
#include<fstream>
class vol
{
 private:
     int num_vol;
     std::string depart;
     std::string arrivee;
     date d;
     trajet tra;
     pilote pil;
     std::vector<passager>pass;
 public:
     vol(date,trajet,pilote,int=0,std::string="",std::string="");
     ~vol();
     vol(const vol& v);
     void reserver();
     void annuler_res();
     int chercher_passager(int);
    //friend  std::istream& operator>>(std::istream&,vol& );
     // friend  std::ostream& operator<<(std::ostream&,vol&);
    void afficher_vol();
    void saisir_vol();
    void afficher_passager();
         void ecrire_fichier(std::fstream &fichier);
//std::vector<std::string> lire_fichier(std::fstream &fichier);
  int get_num();
std::string get_depart();
std::string get_arrivee();
trajet& get_trajet();
};

#endif // VOL_H
