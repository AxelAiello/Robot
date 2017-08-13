#ifndef COMMANDEDEFAIRE_HPP
#define COMMANDEDEFAIRE_HPP

#include "CommandeRobot.hpp"

class CommandeDefaire : public CommandeRobot {
	protected :
		static CommandeDefaire myExemplaire;
	public : 
		CommandeDefaire();
		CommandeDefaire(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeDefaire* getMyExemplaire();

};

#endif
