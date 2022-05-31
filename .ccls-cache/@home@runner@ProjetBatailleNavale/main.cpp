#include "Bateau.h"
#include "Joueur.h"
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h> 

using namespace std;



bool GrilleBateau[10][10] = {
    {false, false, false, false, true, true, true, false, false, false},
    {false, false, true, false, false, false, false, true, false, false},
    {false, false, false, false, false, false, false, false, true, false},
    {false, true, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, true, false, false, false, false},
    {false, false, false, true, false, false, false, false, true, false},
    {false, true, false, false, false, false, false, false, false, false},
    {true, false, false, true, true, false, false, true, false, false},
    {false, false, false, false, false, false, false, true, false, false},
    {false, true, false, false, false, false, false, false, false, false}};

int GrilleBateaud[10][10] = {
    {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}, {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
    {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}, {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
    {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}, {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
    {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}, {0, 0, 1, 1, 0, 0, 2, 0, 3, 0},
    {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}, {0, 0, 1, 1, 0, 0, 2, 0, 3, 0}};

int main() {
  srand (time(NULL)); //initialisation de srand pour la valeur aleatoire
  // string elem;
  cout << "Hello\n";
  
  Joueur *Joueur1 = new Joueur;
  Joueur *Joueur2 = new Joueur;

  // //init
  // cout << "Bonjour, et bienvenue. J1 entrez votre nom" << endl;
  // cin >> elem;
  // Joueur1.setName(elem);
  // cout << "Bonne chance " << Joueur1.getName() << endl;
  
  string entree;
  bool fin = true;

  // Game
  // Init des joueurs
  cout << "Joueur 1, veuillez inscrire votre nom : ";
  cin >> entree;
  Joueur1->setName(entree);
  cout << endl << "Joueur 2, veuillez inscrire votre nom : ";
  cin >> entree;
  Joueur2->setName(entree);
  clear(); //effacer contenu de la console
  // Placement des bateaux
  Joueur1->creerBateau(Joueur2);
  clear();//efface contenu de la console
  suivant("Inserez un caractere et appuyez sur Entree pour positionner vos bateaux...");
  Joueur2->creerBateau(Joueur1);
  clear(); //effacer contenu de la console
  
  suivant("Inserez un caractere et appuyez sur Entree pour commencer la partie...");

  // Début du jeu
  while (fin) {
    clear(); //effacer contenu de la console
    //J1
    cout << "Inserez un caractere et appuyez sur Entree pour commencer votre tour " << GREEN << Joueur1->getName() << NOCOLOUR << "...";
    cin >> entree;
    cout << endl;
    clear(); //effacer contenu de la console
    cout << "Placement des bateaux de " << Joueur1->getName() << endl;
    Joueur1->affichageBateau(Joueur2);
    cout << "Tirs effectues de " << Joueur1->getName() << endl;
    Joueur1->affichageTir();
    Joueur1->tir(Joueur2);
    cout << "Tirs effectues de " << Joueur1->getName() << endl;
    Joueur1->affichageTir();
    if (Joueur2->lose()){
      fin=false;
      cout << "Victoire de " << Joueur1->getName() << " !" << endl;
      suivant("Inserez un caractere et appuyez sur Entree pour terminer la partie...");
    }
    else {
      suivant("Inserez un caractere et appuyez sur Entree pour terminer votre tour...");
    }
    clear(); //effacer contenu de la console
    if (fin){
      //J2
      cout << "Inserez un caractere et appuyez sur Entree pour commencer votre tour " << GREEN << Joueur2->getName() << NOCOLOUR << "...";
      cin >> entree;
      cout << endl;
      cout << "Placement des bateaux de " << Joueur2->getName() << endl;
      Joueur2->affichageBateau(Joueur1);
      cout << "Tirs effectues de " << Joueur2->getName() << endl;
      Joueur2->affichageTir();
      Joueur2->tir(Joueur1);
      cout << "Tirs effectues de " << Joueur2->getName() << endl;
      Joueur2->affichageTir();
      if (Joueur1->lose()){
        fin=false;
        cout << "Victoire de " << Joueur2->getName() << " !" << endl;
        suivant("Inserez un caractere et appuyez sur Entree pour terminer la partie...");
      }
      else{
        suivant("Inserez un caractere et appuyez sur Entree pour terminer votre tour...");
      }
    }
    
  }

  delete (Joueur1);
  delete (Joueur2);
}
