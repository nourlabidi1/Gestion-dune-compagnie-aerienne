#ifndef PILOTE_H
#define PILOTE_H
#include<fstream>
#include<string>
#include"personne.h"
class pilote:public personne
{private :
    float salaire;
public:
        pilote( float=0.0,int=0,std::string="",std::string="",std::string="");
       virtual ~pilote(){};
  virtual void saisir();
virtual void afficher();
     friend  std::istream& operator>>(std::istream&,pilote& );
      friend  std::ostream& operator<<(std::ostream&,pilote&);

       virtual  void ecrire_fichier(std::fstream &fichier);
  virtual void lire_fichier(std::fstream &fichier);
 std::string get_nom();
};

#endif // PILOTE_H
