#ifndef COMMANDE_H_INCLUDED
#define COMMANDE_H_INCLUDED
#include "Client.h"
#include "Product.h"
#include <vector>
#include <iostream>
namespace commande {
class Commande {

public:
    // constructeurs

        Commande(client::Client& client, bool confirmation , std::vector<product::Product> products , int id);

    // declaration des setters
    void setclient(client::Client& client);
    void setconfirmation(bool confirmed);

    // declaration des getters
        client::Client* getclient() const ;
        std::vector<product::Product> getproduct() const;
        int getid() const;
        bool getconfirmation() const;




private:
    // declaration des menbre prive
        client::Client* _client;
        std::vector<product::Product> _products;
        bool _confirmation;
        int _id;

};
std::ostream& operator << (std::ostream& os, const Commande& commande) ;
}

#endif // COMMANDE_H_INCLUDED
