#include "Joueur.h"
#include "stdlib.h"
using namespace std;


Joueur::Joueur(){
  this->nom = "c";
	this->NombreDeBateaux = 0;
  this->TableauDeTir[100]= {0};
  this->tabDeBateau[5] ={NULL};
}

string Joueur::getName(){
  return nom;
}


void Joueur::AfficheTest(){
  cout << "valeur de tableau de tir :" << TableauDeTir[8] << endl;
}
    
bool Joueur::affichageTir() const{
  int i;
  int j;
  cout << "  | A  | B  | C  | D  | E  | F  | G  | H  | I  | J  |" << endl;
  cout << "  |----|----|----|----|----|----|----|----|----|----|" << endl;
  for (i=0; i<sizeof(GrilleTir)/sizeof(GrilleTir[0]); i++)
  {
    cout << i+1;
    string result = (i+1 == 10) ? "|" : " |";
    cout << result;
    
    for (j=0; j<sizeof(GrilleTir[0])/sizeof(GrilleTir[0][0]); j++)
    {
      cout << " ";
      switch (GrilleTir[i][j]){
        case 0:
          cout << " ";
          break;
        case 1:
          cout << "O";
          break;
        case 2:
          cout << "X";
          break;
        case 3:
          cout << "V";
          break;
        default:
          cout << " ";
          break;
      }
      cout << "  |";
    }
    cout << endl;
    cout << "  |----|----|----|----|----|----|----|----|----|----|" << endl;
  } 
  return true;
} 

bool Joueur::affichageBateau(Joueur* adv) const{
  int i;
  int j;
  cout << "  | A  | B  | C  | D  | E  | F  | G  | H  | I  | J  |" << endl;
  cout << "  |----|----|----|----|----|----|----|----|----|----|" << endl;
  for (i=0; i<sizeof(GrilleBateau)/sizeof(GrilleBateau[0]); i++)
  {
    cout << i+1;
    string result = (i+1 == 10) ? "|" : " |";
    cout << result;
    
    for (j=0; j<sizeof(GrilleBateau[0])/sizeof(GrilleBateau[0][0]); j++)
    {
      if (GrilleBateau[i][j]==true){
        cout << "B";
      }
      else
      {
        cout << " ";
      }
      cout << "  ";
      switch (adv->GrilleTir[i][j]){
        case 0:
          cout << " ";
          break;
        case 1:
          cout << "O";
          break;
        case 2:
          cout << "X";
          break;
        case 3:
          cout << "V";
          break;
        default:
          cout << " ";
          break;
      }
      cout << "|";
    }
    cout << endl;
    cout << "  |----|----|----|----|----|----|----|----|----|----|" << endl;
  } 
  return true;
} 
