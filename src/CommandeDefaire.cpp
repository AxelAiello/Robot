#include "CommandeDefaire.hpp"
#include "Invocateur.hpp"

CommandeDefaire CommandeDefaire::myExemplaire;

CommandeDefaire::CommandeDefaire(Invocateur* inv) {
	if(!isActuelMarco) {
		execute();
	}
}

CommandeDefaire::CommandeDefaire() {
	// Pour l'instance vide
}

void CommandeDefaire::execute() {
	if(myCommandesExecutes.size()>0)
		myCommandesExecutes[myNbrCommandes - 1]->desexecute();
}

void CommandeDefaire::desexecute() {
}

Commande* CommandeDefaire::constructeurVirtuel(Invocateur* inv) {
	CommandeDefaire* c = new CommandeDefaire(inv);
	if(isActuelMarco) {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeDefaire* CommandeDefaire::getMyExemplaire() {
	return &myExemplaire;
}
