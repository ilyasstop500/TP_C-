#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <string>
#include <iostream>



namespace product {
class Product
{
public:
	// constructeurs
	Product();
	Product(std::string titre , std::string description , int quatite , float prix) ;

    // getters
    std::string gettitre() const;
    std::string getdescription() const;
    int getquantite() const;
    float getprix() const;

    // setters
    void settitre(std::string& titre);
    void setdescription(std::string&description);
    void setquantite(int quantite);
    void setprix(float prix);




private:
    // declaration des attribues
        std::string _titre;
        std::string _description;
        int _quantite;
        float _prix;



};

 // surcharger l'opérateur <<
       std::ostream& operator<< (std::ostream& os, const Product& product);
}

#endif // PRODUCT_H_INCLUDED
