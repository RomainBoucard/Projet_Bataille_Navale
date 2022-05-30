main: main.o Joueur.o Bateau.o JoueurTest.o
	g++ -o main main.o Joueur.o Bateau.o JoueurTest.o
main.o: main.cpp
	g++ -c main.cpp
Joueur.o: Joueur.cpp
	g++ -c Joueur.cpp
Bateau.o: Bateau.cpp
	g++ -c Bateau.cpp