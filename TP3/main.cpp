#include <iostream>
#include "Client.h"
#include "Client.cpp"
#include "Product.h"
#include "Product.cpp"
#include "Commande.h"
#include "Commande.cpp"
#include "Magasin.cpp"
#include "Magasin.h"

int main()

{
    std::vector<product::Product> products ;
	std::vector<client::Client> clients ;
	std::vector<commande::Commande> commandes ;
	magasin::Magasin SHOP(products, clients, commandes) ;


	// partie product

	product::Product IPHONE("Iphone", "TOO EXPENSIVE FOR YOU ", 10, 1000.00) ;
	product::Product S20("S20", "better that iphone", 10, 1000.00) ;
	product::Product OPPO("Oppo", "very good budget phone", 10, 200.00) ;
	product::Product NOKIA("Nokia", "INDESTRUCTABLE ALIEN ARTIFACT ", 1,  10000000.00) ;

	SHOP.addproduct(IPHONE) ;
	SHOP.addproduct(S20) ;
	SHOP.addproduct(OPPO) ;
	SHOP.addproduct(NOKIA) ;


	SHOP.showproducts() ;
	SHOP.showproduct("Nokia");
	SHOP.majquantite("Nokia ", 2) ;


    // partie client

    SHOP.addclient("Ronaldo" ,"Cristiano" , 7) ;
	client::Client messi("Messi", "Lionel",{S20,NOKIA}, 1) ;
    SHOP.addclient(messi) ;

    messi.addproduct(NOKIA) ;
	SHOP.addproductcart("NOKIA" , 1) ;
	std::cout << messi << std::endl ;


	SHOP.showclients() ;
	SHOP.showclient(1) ;
	SHOP.showclient("Messi" ,"Lionel");


    // partie commande

    commande::Commande   c1 (messi , 0 , {S20,NOKIA},1);
    std::cout <<*c1.getclient()<<std::endl;
    std::cout <<c1.getconfirmation()<<std::endl;
    std::cout <<c1.getid()<<std::endl;

}





