#include "CommandeFiger.hpp"
#include "Invocateur.hpp"

CommandeFiger CommandeFiger::myExemplaire;

CommandeFiger::CommandeFiger(Invocateur* inv) {
	if(!isActuelMarco) {
		execute();
	}
}

CommandeFiger::CommandeFiger() {
	// Pour l'instance vide
}

void CommandeFiger::execute() {
	mySujet->figer();
}

void CommandeFiger::desexecute() {
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
	mySujet->repartir();
}

Commande* CommandeFiger::constructeurVirtuel(Invocateur* inv) {
	CommandeFiger* c = new CommandeFiger(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeFiger* CommandeFiger::getMyExemplaire() {
	return &myExemplaire;
}
