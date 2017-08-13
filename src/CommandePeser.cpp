#include "CommandePeser.hpp"
#include "Invocateur.hpp"

CommandePeser CommandePeser::myExemplaire;

CommandePeser::CommandePeser(Invocateur* inv) {
	if(!isActuelMarco) {
		execute();
	}
}

CommandePeser::CommandePeser() {
	// Pour l'instance vide
}

void CommandePeser::execute() {
	myPoids = mySujet->peser();
}

void CommandePeser::desexecute() {
}

Commande* CommandePeser::constructeurVirtuel(Invocateur* inv) {
	CommandePeser* c = new CommandePeser(inv);
	if(isActuelMarco) {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandePeser* CommandePeser::getMyExemplaire() {
	return &myExemplaire;
}

int CommandePeser::getMyPoids() {
	return myPoids;
}
