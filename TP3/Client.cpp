#include "Client.h"
#include "Product.h"
#include <vector>
#include <iostream>



    client::Client::Client(std::string prenom, std::string nom, std::vector<product::Product> panier, int id): _prenom(prenom) ,
        _nom(nom), _panier(panier),_id(id){}


    // getters
    std::string client::Client::getnom() const{
    return _nom;
    }
    std::string client::Client::getprenom() const{
        return _prenom;
    }
    int client::Client::getid() const {
        return _id;
    }
    std::vector<product::Product> client::Client::getpanier() const{
        return _panier;
    }

    //  methode pour ajouter un produit
    void client::Client::addproduct(product::Product produit){
        produit.setquantite(1);
        _panier.push_back(produit);
    }

    // methode pour Vider le panier
    void client::Client::viderpanier(){
        _panier.clear();
    }

    // modification de la quantité d'un produit
    void client::Client::newquantity(std::string titre,int quantite){
        for ( int i =0 ; i< _panier.size() ; i++){
            if( (_panier.at(i)).gettitre() == titre){
                _panier[i].setquantite(quantite);
                break;
            }
        }
    }



     //  Supprimer un produit du panier
    void client::Client::delproduct(std::string titre){
        for(int i=0; i<_panier.size(); i++){
            if( (_panier.at(i)).gettitre() == titre){
                _panier.erase(_panier.begin()+i);
                break;
            }
        }
    }





    std::ostream&  client::operator<<(std::ostream& os, const Client& client)

{
	os << std::endl << "nom   :  " << client.getnom() + " " + client.getprenom() << std::endl
       << "id : " << client.getid() << std::endl << std::endl
       << "panier d'achat :" <<  std::endl << std::endl ;
    for (int i = 0 ; i < client.getpanier().size() ; i++)
        os << client.getpanier().at(i) << std::endl ;
	return os ;
}




