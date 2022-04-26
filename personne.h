#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include<fstream>

class personne
{protected :
     int CIN;
    std::string nom;
    std::string prenom;
   std::string adresse;
   public:
        personne( int=0,std::string="",std::string="",std::string="");
        virtual~personne(){};
    virtual void saisir()=0;
     virtual void afficher();
     friend  std::istream& operator>>(std::istream&,personne& );
      friend  std::ostream& operator<<(std::ostream&,personne&);

         virtual void ecrire_fichier(std::fstream &fichier);
  virtual void lire_fichier(std::fstream &fichier);

};
#endif // PERSONNE_H
