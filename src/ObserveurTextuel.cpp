#include "ObserveurTextuel.hpp"
#include "Robot.hpp"

ObserveurTextuel::ObserveurTextuel() {}

void ObserveurTextuel::afficher() {
	cout << "\nRepresantation actuelle du robot Wall-e :\n";

	cout << "Direction : " << _mySujet->getMyDirection() << ".\n";
	cout << "Hauteur du plot : ";
		_mySujet->getMyPlot() != nullptr ? cout << _mySujet->getMyPlot()->getMyHauteur() << ".\n" : cout << "vide." << '\n' ;
	cout << "Position : ";
		_mySujet->getMyPosition() != nullptr ? cout << "x = " << _mySujet->getMyPosition()->getMyX() << ", y = " << _mySujet->getMyPosition()->getMyY() << ".\n" : cout << "vide." << '\n';
	cout << "Poids de l'objet : ";
		_mySujet->getMyObjet() != nullptr ? cout << _mySujet->getMyObjet()->getMyPoids() << ".\n" : cout << "vide." << "\n";
	cout << "Etat : ";
		_mySujet->getMyEtatRobot() != nullptr ? cout << _mySujet->getMyEtatRobot()->getMyNomEtat() << ".\n" : cout << "vide." << "\n";
} 
