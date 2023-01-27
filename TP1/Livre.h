#include <iostream>
#include <vector>
#include "Auteur.h"

class Livre {
	    private:
		            Auteur _auteur;
			            std::string _titre, _langue, _genre;
				            std::string _datedep;
					            int _isnb;
						            std::vector<std::string> _emprunteurs;
							            std::string _etat;
								        public:
								            Livre(){};
									            Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string datedep, int isnb, std::vector<std::string> emprunteurs, std::string etat);

										            std::string gettitre();
											            Auteur getauteur();
												            std::string getlangue();
													            std::string getgenre();
														            std::string getdatedep();
															            int getisnb();
																            std::vector<std::string> getemprunteurs();
																	            std::string getetat();

																		            void afficheremprunteurs();
																			            void setLivre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string datedep, int isnb);
																				            void setemprunteurs(std::vector<std::string> emprunteurs);
																					            void setetat(std::string etat);
																						            void ajouterunempruntid(std::string emprunt);
																							    friend std::ostream& operator<<(std::ostream& os, const Livre& livre);

};

