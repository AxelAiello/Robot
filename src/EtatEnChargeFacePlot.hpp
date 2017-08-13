#ifndef ETATENCHARGEFACEPLOT_HPP
#define ETATENCHARGEFACEPLOT_HPP

class EtatAVide;
class EtatAVideFacePlot;
class EtatEnCharge;
#include "EtatEnRoute.hpp"

class EtatEnChargeFacePlot : public EtatEnRoute {
	private :
		static EtatEnChargeFacePlot _instanceUnique;
	protected :
		EtatEnChargeFacePlot(string msg = "Etat en charge face plot") : EtatEnRoute(msg) {};
	public :
		virtual EtatRobot* tourner();
		virtual EtatRobot* poser();
		virtual EtatRobot* peser();
		virtual EtatRobot* evaluerPlot();
		static EtatEnChargeFacePlot* getInstanceUnique();

};

#endif
