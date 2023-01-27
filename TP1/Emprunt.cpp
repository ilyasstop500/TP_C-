#include "Emprunt.h"
Emprunt::Emprunt(Date dateemprunt, int ISBN, std::string identifiant):_dateemprunt(dateemprunt),_ISBN(ISBN), _identifiant(identifiant){}
Date Emprunt::getdateemprunt(){
	           return _dateemprunt ;
}
int Emprunt::getISBN(){
	           return _ISBN ;
}
std::string Emprunt::getidentifiant(){
	           return _identifiant ;
}
void Emprunt::setemprunt(Date dateemprunt, int ISBN, std::string identifiant){
	           _dateemprunt = dateemprunt ;
		              _ISBN = ISBN ;
			                 _identifiant = identifiant ;
}

