#ifndef ETATFIGE_HPP
#define ETATFIGE_HPP

#include "EtatRobot.hpp"

class EtatFige : public EtatRobot {
	private :
		static EtatFige _instanceUnique;
		EtatRobot* _dernierEtat;

	protected :
		EtatFige(string msg = "Etat figé") : EtatRobot(msg)  {};
	public :
		virtual EtatRobot* repartir();
		void setDernierEtat(EtatRobot* e);
		static EtatFige* getInstanceUnique();

};

#endif
