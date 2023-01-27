all: main

main: Produit.o Client.o Commande.o Magasin.o main.o
    g++ Produit.o Client.o Commande.o Magasin.o main.o -o main

Produit.o: Produit.cpp Produit.h
    g++ -c Produit.cpp

Client.o: Client.cpp Client.h
    g++ -c Client.cpp

Commande.o: Commande.cpp Commande.h
    g++ -c Commande.cpp

Magasin.o: Magasin.cpp Magasin.h
    g++ -c Magasin.cpp

main.o: main.cpp
    g++ -c main.cpp

clean:
    rm -f *.o main
