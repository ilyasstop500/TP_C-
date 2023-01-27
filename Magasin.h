#ifndef MAGASIN_H_INCLUDED
#define MAGASIN_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Client.h"
#include "Commande.h"





namespace magasin {

class Magasin {
public:

    //contructeurs

	Magasin(std::vector <product::Product>& products, std::vector <client::Client>& clients, std::vector <commande::Commande>& commandes);

    // getters
    std::vector<client::Client> getclients() const ;
    std::vector<product::Product> getproducts() const ;
    std::vector<commande::Commande> getcommandes() const ;

    // ajouter un produit
    void addproduct (product::Product product) ;

    // afficher les produits
    void showproducts() ;
    void showproduct(std::string nom_produit) ;

    // maj quantité produit
    void majquantite(std::string nom_produit , int quantite ) ;

    // ajouter un client
    void addclient (client::Client& client) ;
    void addclient(std::string prenom, std::string nom , int id) ;
    void addcommande(commande::Commande& commande ) ;

    // afficher les clients
    void showclients();
    void showclient(std::string prenom, std::string nom) ;
    void showclient (int id) ;

    // ajouter ,suprimmer  un produit au panier d'achat
    void addproductcart(std::string nom_produit , int id) ;
    void addproductcart (std::string titre,std::string prenom ,std::string nom ) ;
    void removeproductcart(std::string nom_produit , int id ) ;

    // modifier qte produit du panier d'achat
    void updateproductquantitecart(std::string nom_produit , int id , int quantite) ;

    // valider la commmande
    //Void confirmcommande (int id) ;

    // maj status commande
    //Void updatecommandestatus(int id ) ;

    // afficher les commandes confirmées
    //Void showcommandesconfirmed() ;
    //Void showcommandesconfirmedclinet(int id) ;


private:

    //declaration des attributs
    std::vector<product::Product> _products;
    std::vector<client::Client> _clients;
    std::vector<commande::Commande> _commandes;



};

}

#endif // MAGASIN_H_INCLUDED
