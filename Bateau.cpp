#include "Bateau.h"
#include "stdlib.h"
using namespace std;

// Bateau::Bateau(){
  
// }
// bool Bateau::checkTouche(int x,int y) const{
//   int i;
//   int j;
  
// } 

Bateau::Bateau(string nom, int taille, string debut, int direction){
    this->nom=nom;
    this->taille=taille;
    this->vivant=true;
    this->pdv=taille;
    int i, line, column;
    int x = line_conversion(debut);
    int y = column_conversion(debut);
    switch (direction){
    case 0: //gauche
        for (i = 0; i < taille; i++)
        {
          coordY.push_back(y-i);
          coordX.push_back(x);
        }     
        break;
    case 1: //droite
        for (i = 0; i < taille; i++)
        {
          line=x;
          column=y+i;
          coordY.push_back(column);
          coordX.push_back(line);
        }        
        break;
    case 2: //haut
        for (i = 0; i < taille; i++)
        {
          coordX.push_back(x-i);
          coordY.push_back(y);
        }        
        break;
    case 3: //bas
        for (i = 0; i < taille; i++)
        {
          coordX.push_back(x+i);
          coordY.push_back(y);
        }        
        break;    
    default:
        break;
    }
}

int Bateau::column_conversion (string cellule){
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
    default: return -1;
      break; 
  }
}

int Bateau::line_conversion (string cellule){
  cellule.erase(0,1);
  int line;
  (cellule!="") ? line = stoi(cellule, nullptr)-1 : line=-1;
  return line;
}

string Bateau::get_name(){
  return this->nom;
}

bool Bateau::checkTouche(int x, int y){
  if(this->vivant==true){
    int i;
    for (i = 0; i < this->taille; i++)
    {
      if (x==coordX[i]){
        if(y==coordY[i]){
          return true;
        }
      }
    }
    return false;
  }
  else{
    return false;
  }
  
}

bool Bateau::perte_pdv(){
  if(this->vivant==false){
    return false;
  }
  else{
    this->pdv=this->pdv-1;
    cout << "PDV :" << this->pdv << endl;
    if(this->pdv==0){
      cout << "mort" << endl;
      this->vivant=false;
      return false;
    }
    cout << "vie" << endl;
    return true;
  }
}

int Bateau::get_X(int x){
  return this->coordX[x];
}

int Bateau::get_Y(int y){
  return this->coordY[y];
}

void Bateau::get_Ys(){
  for (int& x : this->coordY) {
    cout << x << endl; 
  }
}

void Bateau::get_Xs(){
  for (int& x : this->coordX) {
    cout << x << endl; 
  }
}

int Bateau::get_taille(){
  cout << "Fonction taille bateau" << endl;
  return this->taille;
}

