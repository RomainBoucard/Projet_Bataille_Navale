#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include "Joueur.h"
#include "Bateau.h"

using namespace std;

  bool GrilleBateau[10][10]={
      {false, false, false, false, true, true, true, false, false, false},
      {false, false, true, false, false, false, false, true, false, false},
      {false, false, false, false, false, false, false, false, true, false},
      {false, true, false, false, false, false, false, false, false, false},
      {false, false, false, false, false, true, false, false, false, false},
      {false, false, false, true, false, false, false, false, true, false},
      {false, true, false, false, false, false, false, false, false, false},
      {true, false, false, true, true, false, false, true, false, false},
      {false, false, false, false, false, false, false, true, false, false},
      {false, true, false, false, false, false, false, false, false, false}
  };

int GrilleBateaud[10][10]={
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
      {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}
  };

int column_conversion (string cellule){
  switch (cellule[0]){
    case 65 : return 0;// A
      break;
    case 66 : return 1;// B
      break;
    case 67 : return 2;// C
      break;
    case 68 : return 3;// D
      break;
    case 69 : return 4;// E
      break;
    case 70 : return 5;// F
      break;
    case 71 : return 6;// G
      break;
    case 72 : return 7;// H
      break;
    case 73 : return 8;// I
      break;
    case 74 : return 9;// J
      break;
    default: return 0;
      break; 
  }
}

int line_conversion (string cellule){
  cellule.erase(0,1);
  int line = stoi(cellule, nullptr)-1;
  return line;
}

int main() {
  // string elem;
  cout << "Hello World!\n";

  Joueur *Joueur1 = new Joueur;
  Joueur *Joueur2 = new Joueur;
  cout << Joueur1->getName() << endl;
  cout << Joueur2->getName() << endl;

  
  // //init
  // cout << "Bonjour, et bienvenue. J1 entrez votre nom" << endl;
  // cin >> elem;
  // Joueur1.setName(elem);
  // cout << "Bonne chance " << Joueur1.getName() << endl;

  //game
  string suite;

  Joueur1->creerBateau(Joueur2);
  
  Joueur1->get_tabBateaux();
  int i;
  for (i=0; i<10; i++){
    Joueur2->tir(Joueur1);
    cout << "Tir realise" << endl;
    cout << "Appuyez sur une touche pour continuer...";
    cin >> suite;
  }
  // Joueur1->get_tabBateaux();

  // Joueur1->tir(Joueur2);
  // Joueur1->tir(Joueur2);
  // Joueur1->tir(Joueur2);
  // Joueur1->tir(Joueur2);
  // Joueur1->tir(Joueur2);
  // Joueur1->get_TabTir();

  // delete(Joueur1);
  //delete(Joueur2);
  

}


