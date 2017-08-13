#ifndef ETATENROUTE_HPP
#define ETATENROUTE_HPP

#include "EtatFige.hpp"

class EtatEnRoute : public EtatRobot {
	protected :
		EtatEnRoute(string myNomEtat) : EtatRobot(myNomEtat) {};
	public :
		virtual EtatRobot* figer();
};

#endif
