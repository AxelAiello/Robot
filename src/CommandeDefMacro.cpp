#include "CommandeDefMacro.hpp"
#include "Invocateur.hpp"

CommandeDefMacro CommandeDefMacro::myExemplaire;

CommandeDefMacro::CommandeDefMacro(Invocateur* inv) {
	myActuelNomMacro = inv->getNextString();
	execute();
}

CommandeDefMacro::CommandeDefMacro() {
	// Pour l'instance vide
}

void CommandeDefMacro::execute() {
	isActuelMarco = true;
}

void CommandeDefMacro::desexecute() {
	// Pas reversible 
}

Commande* CommandeDefMacro::constructeurVirtuel(Invocateur* inv) {
	return new CommandeDefMacro(inv);
}

CommandeDefMacro* CommandeDefMacro::getMyExemplaire() {
	return &myExemplaire;
}
