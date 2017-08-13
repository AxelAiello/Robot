#include "Observable.hpp"

Observable::Observable(vector<Observeur*> myObserveurs) : _myObserveurs(myObserveurs){}

void Observable::attacher(Observeur* ob) {
	_myObserveurs.push_back(ob);
	//ob->setMySujet(this);
}

void Observable::detacher() {
	_myObserveurs.pop_back();
}

void Observable::notifier() {
	for(unsigned int i = 0; i < _myObserveurs.size(); i++) {
		_myObserveurs.at(i)->afficher();
	}
}	
