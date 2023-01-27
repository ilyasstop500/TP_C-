#ifndef AUTEUR_H
#define AUTEUR_H
#include <iostream>
#include <string>

class Auteur {
	private:
		    int _idn;
		        std::string _nom, _prenom, _daten;
	public:
			    Auteur();
			        Auteur(int idn, std::string nom, std::string prenom, std::string daten);
				    int getidn();
				        std::string getnom();
					    std::string getprenom();
					        std::string getdaten();
						    void setauteur(int i, std::string n, std::string p, std::string d);
						    friend std::ostream& operator<<(std::ostream& os, const Auteur& auteur);
};

#endif

