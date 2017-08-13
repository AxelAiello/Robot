#ifndef COMMANDE_HPP
#define COMMANDE_HPP

//#include "..."
#include <map>
#include <vector>

class CommandeAvancer;
class CommandeTourner;
class CommandeSaisir;
class CommandePoser;
class CommandePeser;
class CommandeRencontrer;
class CommandeEvaluer;
class CommandeFiger;
class CommandeRepartir;
class CommandeDefaire;
class CommandeAppeler;
class CommandeDefMacro;
class CommandeFinMacro;
class Invocateur;

using std::string;
using std::map;
using std::vector;

class Commande {
	public :
		static int myNbrCommandes;

		//Macro
		static bool isActuelMarco;
		static vector<Commande*> myActuelMacro;
		static map<string, vector<Commande*>> myMacro;
		static string myActuelNomMacro;

		virtual void execute() = 0;
		virtual void desexecute() = 0;
		virtual Commande* constructeurVirtuel(Invocateur* inv) = 0;
		static map<string,Commande*> commandesInscrites();
		static Commande* nouvelleCommande(string action, Invocateur* inv);
};

#endif
