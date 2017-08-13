#include "CommandePoser.hpp"
#include "Invocateur.hpp"

CommandePoser CommandePoser::myExemplaire;

CommandePoser::CommandePoser(Invocateur* inv) {
	myLastObj = mySujet->getMyObjet();
	if(!isActuelMarco) {
		execute();
	}
}

CommandePoser::CommandePoser() {
	// Pour l'instance vide
}

void CommandePoser::execute() {
	mySujet->poser();
}

void CommandePoser::desexecute() {
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
	mySujet->saisir(myLastObj);
}

Commande* CommandePoser::constructeurVirtuel(Invocateur* inv) {
	CommandePoser* c = new CommandePoser(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandePoser* CommandePoser::getMyExemplaire() {
	return &myExemplaire;
}
