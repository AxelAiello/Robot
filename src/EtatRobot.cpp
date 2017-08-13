#include "EtatRobot.hpp"

EtatRobot* EtatRobot::avancer() {
	throw "L'état actuel ne peut pas avancer";
}

EtatRobot* EtatRobot::tourner() {
	throw "L'état actuel ne peut pas tourner";
}

EtatRobot* EtatRobot::saisir() {
	throw "L'état actuel ne peut pas saisir";
}

EtatRobot* EtatRobot::poser() {
	throw "L'état actuel ne peut pas poser";
}

EtatRobot* EtatRobot::peser() {
	throw "L'état actuel ne peut pas peser";
}

EtatRobot* EtatRobot::evaluerPlot() {
	throw "L'état actuel ne peut pas évaluer un plot";
}

EtatRobot* EtatRobot::rencontrerPlot() {
	throw "L'état actuel ne peut pas rencontrer un plot";
}

EtatRobot* EtatRobot::figer() {
	throw "L'état actuel ne peut pas être figer";
}

EtatRobot* EtatRobot::repartir() {
	throw "L'état actuel ne peut pas repartir";
}

string EtatRobot::getMyNomEtat() {
	return _myNomEtat;
}
