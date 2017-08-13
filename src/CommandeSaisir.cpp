#include "CommandeSaisir.hpp"
#include "Invocateur.hpp"

CommandeSaisir CommandeSaisir::myExemplaire;

CommandeSaisir::CommandeSaisir(Invocateur* inv) {
	myObjet = inv->getNextObjet();
	if(!isActuelMarco) {
		execute();
	}
}

CommandeSaisir::CommandeSaisir() {
	// Pour l'instance vide
}

void CommandeSaisir::execute() {
	mySujet->saisir(&myObjet);
}

void CommandeSaisir::desexecute() {
	mySujet->poser();
	myNbrCommandes--;
	myCommandesExecutes.erase(myCommandesExecutes.begin() + myNbrCommandes);
}

Commande* CommandeSaisir::constructeurVirtuel(Invocateur* inv) {
	CommandeSaisir* c = new CommandeSaisir(inv);
	if(!isActuelMarco) {
		myCommandesExecutes.push_back(c);
		myNbrCommandes++;
	} else {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeSaisir* CommandeSaisir::getMyExemplaire() {
	return &myExemplaire;
}

Objet CommandeSaisir::getMyObjet() {
	return myObjet;
}
