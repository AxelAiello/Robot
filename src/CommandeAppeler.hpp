#ifndef COMMANDEAPPELER_HPP
#define COMMANDEAPPELER_HPP

#include "CommandeRobot.hpp"

class CommandeAppeler : public CommandeRobot {
	protected :
		static CommandeAppeler myExemplaire;
		string myNom;
		vector<Commande*> myVector;
	public : 
		CommandeAppeler();
		CommandeAppeler(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeAppeler* getMyExemplaire();
};

#endif
