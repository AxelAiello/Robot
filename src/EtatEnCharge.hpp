#ifndef ETATENCHARGE_HPP
#define ETATENCHARGE_HPP

class EtatAVide;
class EtatAVideFacePlot;
class EtatEnChargeFacePlot;
#include "EtatEnRoute.hpp"

class EtatEnCharge : public EtatEnRoute {
	private :
		static EtatEnCharge _instanceUnique;
	protected :
		EtatEnCharge(string msg = "Etat en charge") : EtatEnRoute(msg) {};
	public :
		virtual EtatRobot* avancer();
		virtual EtatRobot* tourner();
		virtual EtatRobot* peser();
		virtual EtatRobot* rencontrerPlot();
		static EtatEnCharge* getInstanceUnique();

};

#endif
