#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(std::vector<Livre> livre, std::vector<Lecteur> lecteur, std::vector<Auteur> auteur, std::vector<Emprunt> emprunts):
	    _livre(livre), _lecteur(lecteur), _auteur(auteur), _emprunts(emprunts) {}

	    std::vector<Livre> Bibliotheque::getlivre(){
		        return _livre;
	    }

std::vector<Lecteur> Bibliotheque::getlecteur(){
	    return _lecteur;
}

std::vector<Auteur> Bibliotheque::getauteur(){
	    return _auteur;
}

void Bibliotheque::ajouter_livre(Livre livre){
	    _livre.push_back(livre);
}

void Bibliotheque::ajouter_lecteur(Lecteur lecteur){
	    _lecteur.push_back(lecteur);
}

void Bibliotheque::ajouter_auteur(Auteur auteur){
	    _auteur.push_back(auteur);
}

bool Bibliotheque::emprunter_livre(Lecteur lect, Livre liv, Date dateemprunt){
	    for (auto l : _livre ){
		            if (l.getisnb() == liv.getisnb() && l.getetat() == "disponible"){
				                l.setetat("indisponible");
						            l.ajouterunempruntid(lect.getid());
							                Emprunt e(dateemprunt,liv.getisnb(),lect.getid());
									lect.ajouter_isnb_lecteur(liv.getisnb()) ;            
									_emprunts.push_back(e);
									
									
										   
										                return true ;
												        }
			        }
	        return false;
}

bool Bibliotheque::resituer_livre(Emprunt emp, Livre l){
	    for (auto e : _emprunts ){
		            if (e.getidentifiant()== emp.getidentifiant() ){
				                l.setetat("disponible");
						     
							                return true ;
									        }
			        }
	        return false;
}
std::vector<Livre> Bibliotheque::chercher_livres_auteur(Auteur auteur) {
	    std::vector<Livre> livres_de_auteur;
	        for (int i = 0; i < _livre.size(); i++) {
			        if (_livre[i].getauteur().getnom() == auteur.getnom() && _livre[i].getauteur().getprenom() == auteur.getprenom()) {
					            livres_de_auteur.push_back(_livre[i]);
						            }
				    }
		    return livres_de_auteur;
}
double Bibliotheque::pourcentage_livres_empruntes() {
	    int nb_livres_empruntes = 0;
	        int nb_livres_total = _livre.size();
		    for (auto livre : _livre) {
			            if (livre.getetat() == "indisponible") {
					                nb_livres_empruntes++;
							        }
				        }
		        return (double) nb_livres_empruntes / nb_livres_total * 100;
}
std::vector<Livre> Bibliotheque::livres_empruntes_par_lecteur(Lecteur lecteur) {
	    std::vector<Livre> livres_empruntes;
	        for (auto livre : _livre) {
			        for (auto id_lecteur : livre.getemprunteurs()) {
					            if (id_lecteur == lecteur.getid()) {
							                    livres_empruntes.push_back(livre);
								                 break;
										                }
						            }
				    }
		    return livres_empruntes;
}
void Bibliotheque::classement(){
	    int max = 0 ;
	        std::string nomdumax, prenomdumax ;
		    for (auto &lec : _lecteur ){
			            if (Bibliotheque::livres_empruntes_par_lecteur(lec).size() > max){
					                max = Bibliotheque::livres_empruntes_par_lecteur(lec).size() ;
							            nomdumax = lec.getnom();
								                prenomdumax = lec.getprenom() ;
										        }
				        }
		        std::cout << "Le lecteur ayant emprunté le plus de livre est : " << nomdumax << " " << prenomdumax << std::endl ;
}



