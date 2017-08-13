#ifndef COMMANDEFIGER_HPP
#define COMMANDEFIGER_HPP

#include "CommandeRobot.hpp"

class CommandeFiger : public CommandeRobot {
	protected :
		static CommandeFiger myExemplaire;
	public : 
		CommandeFiger();
		CommandeFiger(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeFiger* getMyExemplaire();
};

#endif
