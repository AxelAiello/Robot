#include "Robot.hpp"

Robot::Robot(vector<Observeur*> myObserveurs) : Observable(myObserveurs) {
	_myDirection = "N";
	_myPlot = nullptr;
	_myPosition = new Position(0,0);
	_myObjet = nullptr;
	_myEtatRobot = EtatAVide::getInstanceUnique();
}

void Robot::avancer(int* x, int* y) {
	try {
		_myEtatRobot = _myEtatRobot->avancer();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	_myPosition = new Position((*x),(*y));
	notifier();
}

void Robot::tourner(string direction) {
	// Si on veut tourner dans la direction où on est déjà alors on ne tourne pas
	if(direction.compare(_myDirection) != 0) {
		try {
			_myEtatRobot = _myEtatRobot->tourner();
		} catch(char const* e) {
			cout << "\n" << "Erreur : " << e << "\n";
			return;
		}
		_myPlot = nullptr;
		_myDirection = direction;
		notifier();
	}
}

void Robot::saisir(Objet* o) {
	try {
		_myEtatRobot = _myEtatRobot->saisir();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	_myObjet = o;
	notifier();
}

void Robot::poser() {
	try {
		_myEtatRobot = _myEtatRobot->poser();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	_myObjet = nullptr;
	notifier();
}

int Robot::peser() {
	try {
		_myEtatRobot = _myEtatRobot->peser();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return 0;
	}
	notifier();
	return _myObjet->getMyPoids();
}

void Robot::rencontrerPlot(Plot* p) {
	try {
		_myEtatRobot = _myEtatRobot->rencontrerPlot();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	_myPlot = p;
	notifier();
}

int Robot::evaluerPlot() {
	try {
		_myEtatRobot = _myEtatRobot->evaluerPlot();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return 0;
	}
	notifier();
	return _myPlot->getMyHauteur();
}

void Robot::figer() {
	try {
		_myEtatRobot = _myEtatRobot->figer();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	notifier();
}

void Robot::repartir() {
	try {
		_myEtatRobot = _myEtatRobot->repartir();
	} catch(char const* e) {
		cout << "\n" << "Erreur : " << e << "\n";
		return;
	}
	notifier();
}

void Robot::attacher(Observeur* ob) {
	_myObserveurs.push_back(ob);
	ob->setMySujet(static_cast<Robot* const>(this));
}

Robot::~Robot() {
	delete _myPosition;
}

// Getteurs
string Robot::getMyDirection() {return _myDirection;}
Plot* Robot::getMyPlot() {return _myPlot;}
Position* Robot::getMyPosition() {return _myPosition;}
Objet* Robot::getMyObjet() {return _myObjet;}
EtatRobot* Robot::getMyEtatRobot() {return _myEtatRobot;}

