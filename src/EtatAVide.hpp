#ifndef ETATAVIDE_HPP
#define ETATAVIDE_HPP

class EtatAVideFacePlot;
class EtatEnCharge;
class EtatEnChargeFacePlot;
#include "EtatEnRoute.hpp"

class EtatAVide : public EtatEnRoute {
	private :
		static EtatAVide _instanceUnique;
	protected :
		EtatAVide(string msg = "Etat à vide") : EtatEnRoute(msg) {};
	public :
		virtual EtatRobot* avancer();
		virtual EtatRobot* tourner();
		virtual EtatRobot* rencontrerPlot();
		static EtatAVide* getInstanceUnique();

};

#endif
