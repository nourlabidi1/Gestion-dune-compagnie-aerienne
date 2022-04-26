#ifndef DATE_H
#define DATE_H
#include<fstream>

class date
{ private:
    int jour;
    int mois;
    int annee;
    int heure;
    int minu;
    public:
        date(int=0,int=0,int=0,int=0,int=0);
     friend  std::istream& operator >>(std::istream&  ,date& );
      friend  std::ostream& operator <<(std::ostream&  ,date&);
          void ecrire_fichier_d(std::fstream &fichier);
  void lire_fichier_d(std::fstream &fichier);

};

#endif // DATE_H
