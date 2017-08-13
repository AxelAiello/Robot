#include "CommandeRobot.hpp"
#include "Invocateur.hpp"

vector<CommandeRobot*> CommandeRobot::myCommandesExecutes;
Robot* CommandeRobot::mySujet = nullptr;

CommandeRobot::CommandeRobot() {
	/* Rien car les variables statics sont déjà initialisées*/
}

CommandeRobot::CommandeRobot(Robot* r) {
	mySujet = r;
}

void CommandeRobot::execute() {
	// Rien
}

void CommandeRobot::desexecute() {
}

Commande* CommandeRobot::constructeurVirtuel(Invocateur* inv) {
	return this;
}

Robot* CommandeRobot::getMySujet(){
	return mySujet;
}
