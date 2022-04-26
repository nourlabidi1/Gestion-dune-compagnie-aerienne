#ifndef PASSAGER_H
#define PASSAGER_H
#include<string>
#include"personne.h"
#include<fstream>
class passager:public personne
{private :
    int num_pass;
public:
        passager( int=0,int=0,std::string="",std::string="",std::string="");
       virtual ~passager(){};
  virtual void saisir();
virtual void afficher();
     friend  std::istream& operator>>(std::istream&,passager& );
      friend  std::ostream& operator<<(std::ostream&,passager&);

        virtual  void ecrire_fichier(std::fstream &fichier);
  virtual void lire_fichier(std::fstream &fichier);
 int get_cin();
};

#endif // PASSAGER_H
