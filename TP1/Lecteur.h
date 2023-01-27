#include <iostream>
#include <vector>

class Lecteur {
	private:

		    std::string _id;
		        
		        std::string _nom;
			    
			    std::string _prenom;
			        
			        std::vector<int> _lisnb;
	public:
				    
				    Lecteur(){}
				        
				        Lecteur(std::string id, std::string nom, std::string prenom, std::vector<int> lisnb);
					  
					    std::string getid();

					        std::string getnom();
						  
						    std::string getprenom();
						        std::vector<int> getlisnb();
							    void afficherlisnb();
							        void setLecteur(std::string id, std::string nom, std::string prenom, std::vector<int> lisnb);
								void ajouter_isnb_lecteur(int isnb) ;
								friend std::ostream& operator<<(std::ostream& os, const Lecteur& l);
};
