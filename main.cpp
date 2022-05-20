#include <iostream>
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


int main() {
  std::cout << "Hello World!\n";

  Joueur Joueur1;
  cout << Joueur1.getName() << endl;
  Joueur1.AfficheTest();
  //Bateau bateau();
  
  

}

