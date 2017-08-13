#include "Commande.hpp"
#include "Invocateur.hpp"
#include "CommandeAvancer.hpp"
#include "CommandeTourner.hpp"
#include "CommandeSaisir.hpp"
#include "CommandePoser.hpp"
#include "CommandePeser.hpp"
#include "CommandeRencontrer.hpp"
#include "CommandeEvaluer.hpp"
#include "CommandeFiger.hpp"
#include "CommandeRepartir.hpp"
#include "CommandeDefaire.hpp"
#include "CommandeAppeler.hpp"
#include "CommandeDefMacro.hpp"
#include "CommandeFinMacro.hpp"

int Commande::myNbrCommandes = 0;

//Macro
bool Commande::isActuelMarco = false;
vector<Commande*> Commande::myActuelMacro;
map<string, vector<Commande*>> Commande::myMacro;
string Commande::myActuelNomMacro = "";

map<string,Commande*> Commande::commandesInscrites() {
	map<string,Commande*> myMap;
	myMap["AVANCER"] = CommandeAvancer::getMyExemplaire();
	myMap["TOURNER"] = CommandeTourner::getMyExemplaire();
	myMap["SAISIR"] = CommandeSaisir::getMyExemplaire();
	myMap["POSER"] = CommandePoser::getMyExemplaire();
	myMap["PESER"] = CommandePeser::getMyExemplaire();
	myMap["RENCONTRERPLOT"] = CommandeRencontrer::getMyExemplaire();
	myMap["EVALUERPLOT"] = CommandeEvaluer::getMyExemplaire();
	myMap["FIGER"] = CommandeFiger::getMyExemplaire();
	myMap["REPARTIR"] = CommandeRepartir::getMyExemplaire();
	myMap["DEFAIRE"] = CommandeDefaire::getMyExemplaire();
	myMap["APPELER"] = CommandeAppeler::getMyExemplaire();
	myMap["DEFMACRO"] = CommandeDefMacro::getMyExemplaire();
	myMap["FINMACRO"] = CommandeFinMacro::getMyExemplaire();
	return myMap;
}

Commande* Commande::nouvelleCommande(string action, Invocateur* inv) {
	return  commandesInscrites()[action]->constructeurVirtuel(inv);
}
