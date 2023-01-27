
#include "Magasin.h"

//  constructeurs



magasin::Magasin::Magasin(std::vector <product::Product>& products, std::vector <client::Client>& clients, std::vector <commande::Commande>& commandes):_products(products) ,_clients(clients) , _commandes(commandes) {

}
// defenition des getters
std::vector<product::Product>  magasin::Magasin::getproducts() const { return _products ;}
std::vector<client::Client>   magasin::Magasin::getclients() const { return _clients ;}
std::vector<commande::Commande>   magasin::Magasin::getcommandes() const { return _commandes ;}
//  definition de la methodes qui permet d'ajouter un nouveau produit
void magasin::Magasin::addproduct(product::Product product){
    _products.push_back(product);
}
// definition de la methodes qui permet d'afficher touts les produits
void magasin::Magasin::showproducts(){
    for (int i =0 ; i< _products.size(); i++)
    {
        std::cout<< _products[i]<<std::endl;
    }
}
// definition de la methodes qui permet d'afficher un produit avec son nom
void magasin::Magasin::showproduct(std::string nom_produit){
    for(auto& i : _products)
        if( i.gettitre() == nom_produit){
            std::cout << std::endl ;
            std::cout << i << std::endl ;
            std::cout << "si vous ne voyez rien au dessus donc le produit que vous demandez n'est pas dispo " << std::endl;
            break;
        }

}
// definition de la methodes qui permet de mettre  a jour la quantite de produit
void magasin::Magasin::majquantite(std::string nom_produit,int quantite){

    if(quantite >= 0){
        for(auto& i : _products){

             if( i.gettitre() == nom_produit){
            i.setquantite(quantite);
            break;

             }
        }
    }
    else
        std::cout << "la quantité ne peut pas étre negative " << std::endl ;
}

void magasin::Magasin::addclient(client::Client& client){
    _clients.push_back(client) ;
}

void magasin::Magasin::addclient(std::string prenom, std::string nom, int id) {
    std::vector<product::Product> panier;
    client::Client client(prenom,nom,panier,id) ;
    _clients.push_back(client) ;

}

void magasin::Magasin::addcommande(commande::Commande& commande){
    _commandes.push_back(commande) ;

}


void magasin::Magasin::showclients(){

    std::cout << "\nClients\n";
    std::cout << "Uid" ;

    for(int i = 0 ; i < 9 ; i++) {
        std::cout << " ";
    }
    std::cout << "Identifiant \n";

    for(auto& i:_clients){
        std::cout << i.getid() ;
        for(int j = 0 ; j < 12 - (int)std::to_string(i.getid()).length() ; j++)
            {std::cout << " ";}
        std::cout << i.getprenom() << " " << i.getnom() << std::endl ;
    }
    std::cout << std::endl;

}

void magasin::Magasin::showclient(std::string prenom, std::string nom){
     for (int i = 0 ; i < _clients.size() ; i++) {

        if ( (_clients.at(i).getnom() == nom) || (_clients.at(i).getprenom() == prenom) ){
            std::cout << std::endl << _clients.at(i) ;
            break;



        }
    }
}

void magasin::Magasin::showclient(int id){
    for (int i = 0 ; i < _clients.size() ; i++) {

        if ( _clients.at(i).getid() == id){
             std::cout << std::endl << _clients.at(i) << std::endl ;
        }
    }
}

void magasin::Magasin::addproductcart(std::string titre, std::string prenom, std::string nom){
    for(auto& i : _products)
        if( i.gettitre() == titre){
            for(auto& j : _clients)
                if( j.getprenom() == prenom || j.getnom() == nom ){
                    j.addproduct(i);
                    break;
                }
            break;
        }
}

void magasin::Magasin::addproductcart(std::string titre, int id ){

    for(auto& i : _products)
        if( i.gettitre() == titre){
            for(auto& j : _clients)
                if( j.getid() == id){
                    j.addproduct(i);
                    break;
                }
             break;
        }
}


