#include "Livre.h"

Livre::Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string datedep, int isnb, std::vector<std::string> emprunteurs, std::string etat) : 
	    _titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _datedep(datedep), _isnb(isnb), _emprunteurs(emprunteurs), _etat(etat) {}

	    std::string Livre::gettitre(){
		        return _titre;
	    }

Auteur Livre::getauteur(){
	    return _auteur;
}

std::string Livre::getlangue(){
	    return _langue;
}

std::string Livre::getgenre(){
	    return _genre;
}

std::string Livre::getdatedep(){
	    return _datedep;
}

int Livre::getisnb(){
	    return _isnb;
}

std::vector<std::string> Livre::getemprunteurs(){
	    return _emprunteurs;
}

std::string Livre::getetat(){
	    return _etat;
}

void Livre::afficheremprunteurs(){
	    std::cout << " la liste des emprunteurs est :";
	        for (int i = 0; i < _emprunteurs.size(); i++) {
			        std::cout << _emprunteurs[i] << " ";
				    }
		    std::cout << std::endl;
}

void Livre::setLivre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string datedep, int isnb){
	    _titre = titre;
	        _auteur = auteur;
		    _langue = langue;
		        _genre = genre;
			    _datedep = datedep;
			        _isnb = isnb;
}

void Livre::setemprunteurs(std::vector<std::string> emprunteurs){
	    _emprunteurs = emprunteurs;
}

void Livre::setetat(std::string etat){
	    _etat = etat;
}

void Livre::ajouterunempruntid(std::string emprunt){
	    _emprunteurs.push_back(emprunt);
}
std::ostream& operator<<(std::ostream& os, const Livre& livre) {
	    os << "Titre: " << livre._titre << ", Auteur: " << livre._auteur << ", Langue: " << livre._langue << ", Genre: " << livre._genre << ", Date de publication: " << livre._datedep << ", ISBN: " << livre._isnb << ", Etat: " << livre._etat;
	        os << "Emprunteurs: ";
		    for(std::string emprunteur: livre._emprunteurs){
			        os << emprunteur << " ";
		        return os;
                    }
}

