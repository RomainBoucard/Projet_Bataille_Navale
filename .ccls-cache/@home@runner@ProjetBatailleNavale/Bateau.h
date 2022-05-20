#ifndef cpp_Bateau_h
#define cpp_Bateau_h

#include <iostream>
using namespace std;

class Bateau {
  private :

    string nom;
    int taille;
    int pdv;
    int coordX[5];
    int coordY[5];
    bool vivant;
  
  public :
    Bateau();
    Bateau(string nom, int taille, int Xdebut, int Ydebut, int Xfin, int Yfin);

  
    //get set
  
  
  
  //Méthodes
    bool checkTouche (int x, int y);
      //lorsque la fonction est appelée, compare les coordonnées données avec les   coordonnées de chaque segment de de chaque bateau non coulé

};

#endif