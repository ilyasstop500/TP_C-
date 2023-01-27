#include "Product.h"

//constructeur
product::Product::Product(){

}
product::Product::Product(std::string titre, std::string description, int quantite,float prix):
_titre(titre),_description(description),_quantite(quantite),_prix(prix){

}


// getters
std::string product::Product::gettitre() const {
	return _titre;
}
std::string product::Product::getdescription() const{
	return _description;
}
int product::Product::getquantite() const {
	return _quantite;
}
float product::Product::getprix() const {
	return _prix;
}


// setters
void product::Product::settitre(std::string& titre){
	_titre = titre;
}
void product::Product::setdescription(std::string& description){
	_description= description;
}
void product::Product::setquantite(int quantite){
	if (quantite < 0)
	{
		std::cout <<"veuillez entrer une valeur positive svp" << std::endl ;
    }
    else {
    	_quantite=quantite ;
    }
}

void product::Product::setprix(float prix){
	if (prix < 0)
	{
		std::cout <<"veuillez entrer une valeur positive svp" << std::endl ;
    }
    else {
    	_prix=prix ;
    }
}

// surcharge de <<
std::ostream& product::operator<< (std::ostream &os, const Product& product){
   os << "titre = " << product.gettitre() << std::endl <<"description = " <<product.getdescription()<< std::endl<<"quantite = "<< product.getquantite() << std::endl<<" prix =" << product.getprix()<<std::endl;
   return os ;
}
