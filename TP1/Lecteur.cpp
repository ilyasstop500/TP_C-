#include "Lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom, std::vector<int> lisnb):_id(id),_nom(nom),_prenom(prenom),_lisnb(lisnb){}

std::string Lecteur::getid(){
	    return _id;
}

std::string Lecteur::getnom(){
	    return _nom;
}

std::string Lecteur::getprenom(){
	    return _prenom;
}

std::vector<int> Lecteur::getlisnb(){
	    return _lisnb;
}

void Lecteur::afficherlisnb(){
	    std::cout << "Liste des livres empruntés: ";
	        for (int i = 0; i < _lisnb.size(); i++) {
			        std::cout << _lisnb[i] << " ";
				    }
		    std::cout << std::endl;
}

void Lecteur::setLecteur(std::string id, std::string nom, std::string prenom, std::vector<int> lisnb){
	    _id = id;
	        _nom = nom;
		    _prenom = prenom;
		        _lisnb = lisnb;
}
void Lecteur::ajouter_isnb_lecteur(int isnb){
       _lisnb.push_back(isnb) ;
}

std::ostream& operator<<(std::ostream& os, const Lecteur& l) {
	    os << "Identifiant : " << l._id << std::endl;
	        os << "Nom : " << l._nom << std::endl;
		    os << "Prénom : " << l._prenom << std::endl;
		        os << "Liste des numéros de livres empruntés : ";
			    for (auto n : l._lisnb) {
				            os << n << " ";
					        }
			        os << std::endl;
				    return os;
}
