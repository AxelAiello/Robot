#include "CommandeEvaluer.hpp"
#include "Invocateur.hpp"

CommandeEvaluer CommandeEvaluer::myExemplaire;

CommandeEvaluer::CommandeEvaluer(Invocateur* inv) {
	if(!isActuelMarco) {
		execute();
	}
}

CommandeEvaluer::CommandeEvaluer() {
	// Pour l'instance vide
}

void CommandeEvaluer::execute() {
	myHauteur = mySujet->evaluerPlot();
}

void CommandeEvaluer::desexecute() {
}

Commande* CommandeEvaluer::constructeurVirtuel(Invocateur* inv) {
	CommandeEvaluer* c = new CommandeEvaluer(inv);
	if(isActuelMarco) {
		myActuelMacro.push_back(c);
	}
	return c;
}

CommandeEvaluer* CommandeEvaluer::getMyExemplaire() {
	return &myExemplaire;
}

int CommandeEvaluer::getMyHauteur() {
	return myHauteur;
}

