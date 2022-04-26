#ifndef TRAJET_H
#define TRAJET_H
#include<string>
#include<vector>
#include<fstream>
class trajet
{private :
  int num_trajet;
    int nb_res;
  int nb_max;
 // std::vector<std::string>ville;
 std::string  villes;
 public:
     trajet(int=0,int=0,int=0,std::string="");
     ~trajet();
     trajet(const trajet&);
     trajet& operator =(const trajet&);
       friend  std::istream& operator>>(std::istream&,trajet& );
      friend  std::ostream& operator<<(std::ostream&,trajet&);
          void ecrire_fichier_t(std::fstream &fichier);
  void lire_fichier_t(std::fstream &fichier);
 int get_nb_max();
     int get_nb_res();
     void modifier_nb_res();
void modifier_nb_resS();

};

#endif // TRAJET_H
