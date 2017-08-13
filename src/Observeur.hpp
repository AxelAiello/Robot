#ifndef OBSERVEUR_HPP
#define OBSERVEUR_HPP

class Robot;

#include "Plot.hpp"
#include "Position.hpp"
#include "Objet.hpp"

#include "EtatAVide.hpp"
#include "EtatAVideFacePlot.hpp"
#include "EtatEnCharge.hpp"
#include "EtatEnChargeFacePlot.hpp"
#include "EtatFige.hpp"

using namespace std;
#include <iostream>
#include <string>

class Observeur {

	protected :
		Robot* _mySujet;

	public :
		Observeur();
		virtual void afficher();
		void setMySujet(Robot* const s);

};

#endif
