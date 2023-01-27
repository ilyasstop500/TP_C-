    #ifndef CLIENT_H_INCLUDED
    #define CLIENT_H_INCLUDED
    #pragma once
    #include <string>
    #include <vector>
    #include "Product.h"
    #include <iostream>

    namespace client  {

        class Client
        {
            public:

                 Client();
                 Client(std::string prenom, std::string nom, std::vector<product::Product> panier , int id);

                 // getters
                 std::string getnom() const;
                 std::string getprenom() const;
                 std::vector<product::Product> getpanier() const;
                 int         getid() const;



                 // ajouter un produit au panier
                 void addproduct(product::Product produit );

                 // Vider le panier
                 void viderpanier();

                 //  modifier la quantité d'un produit
                 void newquantity(std::string titre, int quantite);

                 //Supprimer un produit du panier

                 void delproduct(std::string titre);







         private:
            // declaration des attribues
                std::string _prenom;
                std::string _nom;
                int _id;
                std::vector<product::Product> _panier;



    };
             // surcharger l'opérateur <<
           std::ostream& operator<< (std::ostream& os, const Client& client);

    }




    #endif // CLIENT_H_INCLUDED
