# A mettre a jour : répertoire d'installation de Google Test

GTEST_DIR = ./googletest/googletest
GTEST_LIB = ./googletest/lib


CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++11

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h


#JoueurTest.out: Joueur.o JoueurTest.o Bateau.o
	#g++ $(CPP_FLAGS) -o JoueurTest.out JoueurTest.o Joueur.o Bateau.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a
main: Bateau.o Joueur.o main.o
	g++ -o main main.o Joueur.o Bateau.o
main.o: main.cpp
	g++ -c main.cpp
Joueur.o: Joueur.cpp
	g++ -c Joueur.cpp
Bateau.o: Bateau.cpp
	g++ -c Bateau.cpp
#JoueurTest.o: JoueurTest.cpp Joueur.h
	#g++ -c $(CPP_FLAGS) JoueurTest.cpp



