#include "CommandeAvancer.hpp"
#include "Invocateur.hpp"

CommandeAvancer CommandeAvancer::myExemplaire;

CommandeAvancer::CommandeAvancer(Invocateur* inv) {
	lastX = (mySujet->getMyPosition())->getMyX();
	lastY = (mySujet->getMyPosition())->getMyY();
	myX = inv->getNextInt();
	myY = inv->getNextInt();
	if(!isActuelMarco) {
		execute();
	}
}

CommandeAvancer::CommandeAvancer() {
	// Pour l'instance vide
}

void CommandeAvancer::execute() {
	mySujet->avancer(&myX, &myY);
}

void CommandeAvancer::desexecute() {
	myX = lastX;
	myY = lastY;
	mySujet->avancer(&myX, &myY);
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
}

Commande* CommandeAvancer::constructeurVirtuel(Invocateur* inv) {
	CommandeAvancer* c = new CommandeAvancer(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

int CommandeAvancer::getMyX() {
	return myX;
}

int CommandeAvancer::getMyY() {
	return myY;
}

CommandeAvancer* CommandeAvancer::getMyExemplaire() {
	return &myExemplaire;
}
