#include "CommandeFinMacro.hpp"
#include "Invocateur.hpp"

CommandeFinMacro CommandeFinMacro::myExemplaire;

CommandeFinMacro::CommandeFinMacro(Invocateur* inv) {
	execute();
}

CommandeFinMacro::CommandeFinMacro() {
	// Pour l'instance vide
}

void CommandeFinMacro::execute() {
	isActuelMarco = false;
	myMacro[myActuelNomMacro] = myActuelMacro;
	myActuelMacro.clear();
	myActuelNomMacro = "";
}

void CommandeFinMacro::desexecute() {
	// Pas reversible 
}

Commande* CommandeFinMacro::constructeurVirtuel(Invocateur* inv) {
	return new CommandeFinMacro(inv);
}

CommandeFinMacro* CommandeFinMacro::getMyExemplaire() {
	return &myExemplaire;
}
