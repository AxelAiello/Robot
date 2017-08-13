#include "CommandeRencontrer.hpp"
#include "Invocateur.hpp"

CommandeRencontrer CommandeRencontrer::myExemplaire;

CommandeRencontrer::CommandeRencontrer(Invocateur* inv) {
	myPlot = inv->getNextPlot();
	if(!isActuelMarco) {
		execute();
	}
}

CommandeRencontrer::CommandeRencontrer() {
	// Pour l'instance vide
}

void CommandeRencontrer::execute() {
	mySujet->rencontrerPlot(&myPlot);
}

void CommandeRencontrer::desexecute() {
}

Commande* CommandeRencontrer::constructeurVirtuel(Invocateur* inv) {
	CommandeRencontrer* c = new CommandeRencontrer(inv);
	if(isActuelMarco) {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeRencontrer* CommandeRencontrer::getMyExemplaire() {
	return &myExemplaire;
}

Plot CommandeRencontrer::getMyPlot() {
	return myPlot;
}
