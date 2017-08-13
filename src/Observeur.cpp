#include "Observeur.hpp"
#include "Robot.hpp"

Observeur::Observeur() {}

void Observeur::afficher() {
	cout << "Afficheur de base, n'affiche rien !" << "\n";
}

void Observeur:: setMySujet(Robot* const s) {
	_mySujet = s;
}
