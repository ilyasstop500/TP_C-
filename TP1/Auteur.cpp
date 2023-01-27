#include "Auteur.h"

Auteur::Auteur() {}

Auteur::Auteur(int idn, std::string nom, std::string prenom, std::string daten) : _idn(idn), _nom(nom), _prenom(prenom), _daten(daten) {}

int Auteur::getidn() {
	    return _idn;
}

std::string Auteur::getnom() {
	    return _nom;
}

std::string Auteur::getprenom() {
	    return _prenom;
}

std::string Auteur::getdaten() {
	    return _daten;
}

void Auteur::setauteur(int i, std::string n, std::string p, std::string d) {
	    _idn = i;
	        _nom = n;
		    _prenom = p;
		        _daten = d;
}
std::ostream& operator<<(std::ostream& os, const Auteur& auteur) {
	    os << "ID: " << auteur._idn << ", Nom: " << auteur._nom << ", Prénom: " << auteur._prenom << ", Date de naissance: " << auteur._daten;
	        return os;
}

