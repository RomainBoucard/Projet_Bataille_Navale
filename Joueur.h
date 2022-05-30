#ifndef cpp_Joueur_h
#define cpp_Joueur_h

#include "Bateau.h"
#include <iostream>
#include <vector>
using namespace std;

//Colours macro
#define RED        "\e[0;31m"
#define NOCOLOUR   "\e[0m"
#define GREEN      "\e[0;32m"
#define CYAN       "\e[0;36m"

//Directions
#define LEFT   0
#define RIGHT  1
#define UP     2
#define DOWN   3

#define NB_BATEAUX 5






class Joueur {

private:
  // Nom du joueur
  string nom;
  // Nombre de bateaux encore en vie
  int NombreDeBateaux;
  /*
    Memoire des tirs réalisés
    Empêche de tirer à nouveau sur un emplacement
    Utilisation d'un vecteur pour simplifier les recherches et son utilisation
  */
  vector <string> TableauDeTir;

  /*
    Tableau de classes bateaux
    Bateaux en possession du joueur
  */
  Bateau* tabDeBateau[5];
  
  /*
    Tableau regroupant les directions possibles lors du placement d'un bateau [left, right, up, down]
  */
  bool direction[4];

  /*
    Check coordonnées création bateaux
    Check si cases autour libre pour création
  */
  bool check_coord(string pos, int taille);

  /*
    Fonctions pour vérifier cases libre autour de la case de départ d'un bateau
  */
  bool check_left(int x, int y, int taille);
  bool check_right(int x, int y, int taille);
  bool check_up(int x, int y, int taille);
  bool check_down(int x, int y, int taille);

  /*
    Conversion du nom d'une case "A1" en coordonnées entière pour les tableaux
  */
  int line_conversion(string cellule);
  int column_conversion(string cellule);

public:

    Joueur(); // constructeur

    


    bool get_direction(int p_idirection);
    bool get_TabTir();
    bool get_tabBateaux();

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
    void setName(string name);
    // int getTableauDeTirX();
    // int getTableauDeTirY();
    void AfficheTest();

    // affichage de grille bateau du joueur
    bool affichageBateau(Joueur* adv);
  
    // affichage de grille tir du joueur
    bool affichageTir();

    // // dans init
    // // tableau de noms des bateau en dur
    // // string nomsBateau[];
  
    /*
    1) cin :  place les cases de debut et de fin du bateau nomsBateau[0]
      - check si la place est libre sur le plateau
      - si non : recommencer
      - si oui : modif grilleBateau, créer un bateau coorespondant : appel du
    constructeur bateau boucle sur nomsBateau[1]
    */
    bool creerBateau(Joueur *adversaire); // création d'un bateau
  
    // tir d'un joueur sur un autre
    bool tir(Joueur *adversaire);
    // ti reçu d'un autre joueur
    bool tir_recu(Joueur *adversaire, string case_tire);
    //bateau coulé
    bool bateau_coule(int bateau, Joueur *adversaire);
    // vérification de victoire du joueur
    bool win();
    // // ajoute le bateau dans la grilleBateau[]
    bool modifGrille(string StartBateau, int direction, int taille_bateau);

    //init grilles
    bool initGrilleBateau();
    bool initGrilleTir();

};

#endif