#include "CommandeAppeler.hpp"
#include "Invocateur.hpp"

CommandeAppeler CommandeAppeler::myExemplaire;

CommandeAppeler::CommandeAppeler(Invocateur* inv) {
	myNom = inv->getNextString();
	if(myMacro.find(myNom) != myMacro.end()) {
		myVector = myMacro[myNom];
	}
	execute();
}

CommandeAppeler::CommandeAppeler() {
	// Pour l'instance vide
}

void CommandeAppeler::execute() {
	for(unsigned int i = 0; i < myVector.size(); i++) {
		myVector[i]->execute();
	}
}

void CommandeAppeler::desexecute() {
	// Pas reversible 
}

Commande* CommandeAppeler::constructeurVirtuel(Invocateur* inv) {
	return new CommandeAppeler(inv);
}

CommandeAppeler* CommandeAppeler::getMyExemplaire() {
	return &myExemplaire;
}
