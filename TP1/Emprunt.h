
#include "Date.h"
#include <string>

class Emprunt {
	    private :
		           Date _dateemprunt ;
			          int _ISBN;
				         std::string _identifiant ;

					     public :
					        
					        Emprunt(){}
						       Emprunt(Date dateemprunt, int ISBN, std::string identifiant);
						              
						              Date getdateemprunt();
							             int getISBN();
								            std::string getidentifiant();
									           void setemprunt(Date dateemprunt, int ISBN, std::string identifiant);
};
