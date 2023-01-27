CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
DEPFLAGS = -MMD
OBJS = Date.o Lecteur.o Auteur.o Livre.o Emprunt.o Bibliotheque.o main.o

all: $(OBJS)
		$(CXX) $(CXXFLAGS) -o main $(OBJS)

Date.o: Date.h Date.cpp
		$(CXX) $(CXXFLAGS) -c Date.cpp

Lecteur.o: Lecteur.h Lecteur.cpp
		$(CXX) $(CXXFLAGS) -c Lecteur.cpp

Auteur.o: Auteur.h Auteur.cpp
		$(CXX) $(CXXFLAGS) -c Auteur.cpp

Livre.o: Livre.h Livre.cpp
		$(CXX) $(CXXFLAGS) -c Livre.cpp

Emprunt.o: Emprunt.h Emprunt.cpp
		$(CXX) $(CXXFLAGS) -c Emprunt.cpp

Bibliotheque.o: Bibliotheque.h Bibliotheque.cpp
		$(CXX) $(CXXFLAGS) -c Bibliotheque.cpp

main.o: main.cpp
		$(CXX) $(CXXFLAGS) -c main.cpp

clean:
		rm -f $(OBJS) main

