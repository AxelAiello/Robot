#ifndef COMMANDEREPARTIR_HPP
#define COMMANDEREPARTIR_HPP

#include "CommandeRobot.hpp"

class CommandeRepartir : public CommandeRobot {
	protected :
		static CommandeRepartir myExemplaire;
	public : 
		CommandeRepartir();
		CommandeRepartir(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeRepartir* getMyExemplaire();
};

#endif
