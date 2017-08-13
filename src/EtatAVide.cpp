#include "EtatAVide.hpp"
#include "EtatAVideFacePlot.hpp"
#include "EtatEnCharge.hpp"
#include "EtatEnChargeFacePlot.hpp"

// Instancie l'instance
EtatAVide EtatAVide::_instanceUnique;

EtatRobot* EtatAVide::avancer() {
	return this;
}

EtatRobot* EtatAVide::tourner() {
	return this;
}

EtatRobot* EtatAVide::rencontrerPlot() {
	return EtatAVideFacePlot::getInstanceUnique();
}

EtatAVide* EtatAVide::getInstanceUnique() {
	return &_instanceUnique;
}
