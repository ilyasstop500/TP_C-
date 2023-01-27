#include "Commande.h"


// definition des constructors


    commande::Commande::Commande(client::Client& client, int confirmation, std::vector<product::Product> products, int id ) : _client(&client) , _confirmation(confirmation),_products(products),_id(id){
       };




// definition des setters
    void commande::Commande::setclient(client::Client& client){ _client = &client;}

    void commande::Commande::setconfirmation(int confirmation){ _confirmation = confirmation;}



// defenition des getteurs getters
    client::Client* commande::Commande::getclient()const { return _client;}
    std::vector<product::Product> commande::Commande::getproduct() const {return _products;}
    int commande::Commande::getid() const { return _id;}
    int commande::Commande::getconfirmation() const { return _confirmation;}

//Surcharge d'opérateur
    std::ostream& commande::operator<< (std::ostream& os, const Commande& commande){
    os << "client :  " <<commande.getclient() << std::endl << " produits  : " << std::endl ;
    for (int i = 0 ; i < commande.getproduct().size() ; i++)
        os << commande.getproduct().at(i)<<std::endl ;
    os << "État de la commande : " ;
        if (commande.getconfirmation() == true)
        os << "Confirmé" ;
        else
        os << "Pas encore" ;
    return os ;
    }

