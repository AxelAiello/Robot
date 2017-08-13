#ifndef ETATAVIDEFACEPLOT_HPP
#define ETATAVIDEFACEPLOT_HPP

class EtatAVide;
class EtatEnCharge;
class EtatEnChargeFacePlot;
#include "EtatEnRoute.hpp"

class EtatAVideFacePlot : public EtatEnRoute {
	private :
		static EtatAVideFacePlot _instanceUnique;
	protected :
		EtatAVideFacePlot(string msg = "Etat à vide face plot") : EtatEnRoute(msg) {};
	public :
		virtual EtatRobot* tourner();
		virtual EtatRobot* saisir();
		virtual EtatRobot* evaluerPlot();
		static EtatAVideFacePlot* getInstanceUnique();

};

#endif
