#include "CommandeRepartir.hpp"
#include "Invocateur.hpp"

CommandeRepartir CommandeRepartir::myExemplaire;

CommandeRepartir::CommandeRepartir(Invocateur* inv) {
	if(!isActuelMarco) {
		execute();
	}
}

CommandeRepartir::CommandeRepartir() {
	// Pour l'instance vide
}

void CommandeRepartir::execute() {
	mySujet->repartir();
}

void CommandeRepartir::desexecute() {
	mySujet->figer();
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
}

Commande* CommandeRepartir::constructeurVirtuel(Invocateur* inv) {
	CommandeRepartir* c = new CommandeRepartir(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeRepartir* CommandeRepartir::getMyExemplaire() {
	return &myExemplaire;
}
