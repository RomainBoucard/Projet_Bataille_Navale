#ifndef cpp_Joueur_h
#define cpp_Joueur_h

#include "Bateau.h"
#include <iostream>
using namespace std;

class Joueur {

private:
  // Nom du joueur
  string nom;
  // Nombre de bateaux encore en vie
  int NombreDeBateaux;
  /*
    Memoire des tirs réalisés
    Empêche de tirer à nouveau sur un emplacement
  */
  string TableauDeTir[100];
  /*
    Tableau de classes bateaux
    Bateaux en possession du joueur
  */
  Bateau* tabDeBateau[5];

public:
    Joueur(); // constructeur

    /*
      Tableau d'emplacement des bateaux:
      1 bateau à la position x,y
      0 pas de bateau
    */
    bool GrilleBateau[10][10];

    /*
    Emplacement des tirs du joueur :
    0 rien sur la position x,y
    1 tir dans l'eau à la position x,y
    2 tir touché à la position x,y
    3 élement de bateau coulé à la position x,y
    */
    int GrilleTir[10][10];


    // get/set
    /*
      Ajouter en cas de besoin
    */
    string getName();
    int getTableauDeTirX();
    int getTableauDeTirY();
    void AfficheTest();

    // affichage de grille bateau du joueur
    bool affichageBateau(Joueur* adv) const;
  
    // affichage de grille tir du joueur
    bool affichageTir() const;
  
    // dans init
    // tableau de noms des bateau en dur
    // string nomsBateau[];
  
    /*
    1) cin :  place les cases de debut et de fin du bateau nomsBateau[0]
      - check si la place est libre sur le plateau
      - si non : recommencer
      - si oui : modif grilleBateau, créer un bateau coorespondant : appel du
    constructeur bateau boucle sur nomsBateau[1]
    */
    bool creerBateau(); // création d'un bateau
  
    // tir d'un joueur sur un autre
    bool tir(Bateau adversaire);
    // vérification de victoire du joueur
    bool win();
    // ajoute le bateau dans la grilleBateau[]
    bool modifGrille(string StartBateau, string EndBateau);
};

#endif