#include <iostream>
#include <vector>
#include "Bibliotheque.h"
using namespace std;

int main() {
 
	 cout << " *** Debut TP1 *** " << endl ;

	 Date date1(15,01,2022) ;
	  Date date2(05,12,2022) ;
	  Date date3(21,01,2023) ;
	  cout << " - Création de la classe Date validée " << endl ;
	  

	    Auteur auteur1(1, "George", "Orwell", "1903-06-25");
	        Auteur auteur2(2, "F. Scott", "Fitzgerald", "1896-09-24");
		    Auteur auteur3(3, "Ernest", "Hemingway", "1899-07-21");
		        vector<Auteur> auteurs = {auteur1, auteur2, auteur3};
			cout << " - Création des 3 auteurs validée " << endl ;
			cout << "Auteur1 : " << auteur1 << endl ;
			cout << "Auteur2 : " << auteur2 << endl ;
			cout << "Auteur3 : " << auteur3 << endl ;
                        cout << endl ;

			    Livre livre1("1984", auteur1, "Anglais", "Science-fiction", "1949-06-08", 123456, {"001","002"}, "disponible");
			        Livre livre2("The Great Gatsby", auteur2, "Anglais", "Roman", "1925-04-10", 654321, {"003"}, "disponible");
				    Livre livre3("The Old Man and the Sea", auteur3, "Anglais", "Roman", "1952-09-01", 111111, {"002"}, "disponible");
				    Livre livre4("The Catcher in the Rye", auteur1, "Anglais", "Roman", "1951-07-16", 222222, {}, "disponible");
				        Livre livre5("To Kill a Mockingbird", auteur2, "Anglais", "Roman", "1960-07-11", 333333, {"003"}, "disponible");
					    Livre livre6("The Lord of the Rings", auteur3, "Anglais", "Fantasy", "1954-07-29", 444555, {"002","001","003"}, "indisponible");
					        Livre livre7("The Hobbit", auteur3, "Anglais", "Fantasy", "1937-09-21", 555231, {"003"}, "indisponible");
						    Livre livre8("The Grapes of Wrath", auteur1, "Anglais", "Roman", "1939-04-14", 665966, {}, "disponible");
						        Livre livre9("Animal Farm", auteur1, "Anglais", "Science-fiction", "1945-08-17", 777777, {"003"}, "indisponible");
							    Livre livre10("The Great Gatsby", auteur2, "Anglais", "Roman", "1925-04-10", 888888, {"001","003"}, "disponible");
							        vector<Livre> livres = {livre1, livre2, livre3, livre4, livre5, livre6, livre7, livre8, livre9, livre10};

							cout << " - Création des 10 livres validée " << endl ;
						 cout << " Affichage des 3 premiers livres : " << endl ;
					         cout << "Livre1 : " << livre1 << endl ;
					         cout << "Livre2 : " << livre2 << endl ;
					         cout << "Livre3 : " << livre3 << endl ;
					cout << endl ;	 

					    vector<int> lisnb1 = {123456, 444555,888888};
					        Lecteur lecteur1("001", "Rayane", "Mouazer", lisnb1);
						  vector<int>  lisnb2 = {123456,111111,444555};
						        Lecteur lecteur2("002", "Ali", "bekten", lisnb2);
							vector<int> lisnb3 = {654321,333333,444555,777777,888888} ; 
								 Lecteur lecteur3("003", "Celine", "laceb", lisnb3);
							    vector<Lecteur> lecteurs = {lecteur1, lecteur2,lecteur3};
							        cout << " - Création des 3 lecteurs validée " << endl ;
							       cout << "Lecteur1 : " << lecteur1 << endl ;
						             cout << "Lecteur2 : " << lecteur2 << endl ;
					      cout << "Lecteur3 : " << lecteur3 << endl ;		     
					      cout << endl ;
				
					
								
								
								
									Emprunt emprunt1(date1 , 222222 , "002") ;
											Emprunt emprunt2(date1 , 888888 , "001") ;
									
										Emprunt emprunt3(date2 , 444555 , "002") ;
										
											Emprunt emprunt4(date3 , 665966 , "003") ;
								vector<Emprunt> emprunts = {emprunt1, emprunt2,emprunt3,emprunt4} ;
								cout << " - Création des 4 emprunts validée " << endl ;


								Bibliotheque b1(livres,lecteurs,auteurs,emprunts) ;
								b1.livres_empruntes_par_lecteur(lecteur1) ;
								b1.chercher_livres_auteur(auteur2) ;
								b1.emprunter_livre(lecteur1,livre2,date1) ;
							
								lecteur1.ajouter_isnb_lecteur(456666) ;
								cout << "Lecteur1 apres les 2 nouveaux emprunts : " << lecteur1 << endl ;
								b1.classement();
				                                cout << "POURCENTAGES de livres empruntés : " << b1.pourcentage_livres_empruntes() << "%" << endl  ;
  
    return 0;
}
