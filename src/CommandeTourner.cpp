#include "CommandeTourner.hpp"
#include "Invocateur.hpp"

CommandeTourner CommandeTourner::myExemplaire;

CommandeTourner::CommandeTourner(Invocateur* inv) {
	myLastDirection = mySujet->getMyDirection();
	myDirection = inv->getNextString();
	if(!isActuelMarco) {
		execute();
	}
}

CommandeTourner::CommandeTourner() {
	// Pour l'instance vide
}

void CommandeTourner::execute() {
	mySujet->tourner(myDirection);
}

void CommandeTourner::desexecute() {
	mySujet->tourner(myLastDirection);
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
}

Commande* CommandeTourner::constructeurVirtuel(Invocateur* inv) {
	CommandeTourner* c = new CommandeTourner(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeTourner* CommandeTourner::getMyExemplaire() {
	return &myExemplaire;
}

string CommandeTourner::getMyDirection() {
	return myDirection;
}
