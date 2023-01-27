#include <vector>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"

class Bibliotheque {
	    private:
		            std::vector<Livre> _livre;
			            std::vector<Lecteur> _lecteur;
				            std::vector<Auteur> _auteur;
					            std::vector<Emprunt> _emprunts;
						        public:
						            Bibliotheque(){}
							            Bibliotheque(std::vector<Livre> livre, std::vector<Lecteur> lecteur, std::vector<Auteur> auteur, std::vector<Emprunt> emprunts);

								            std::vector<Livre> getlivre();
									            std::vector<Lecteur> getlecteur();
										            std::vector<Auteur> getauteur();
											            void ajouter_livre(Livre livre);
												            void ajouter_lecteur(Lecteur lecteur);
													            void ajouter_auteur(Auteur auteur);
														            bool emprunter_livre(Lecteur lect, Livre liv, Date dateemprunt);
		
														    bool resituer_livre(Emprunt emp, Livre l);
														    std::vector<Livre> chercher_livres_auteur(Auteur auteur);
double pourcentage_livres_empruntes();
std::vector<Livre> livres_empruntes_par_lecteur(Lecteur lecteur);
void classement() ;
};


