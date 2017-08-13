#ifndef COMMANDEDEFMACRO_HPP
#define COMMANDEDEFMACRO_HPP

#include "CommandeRobot.hpp"

class CommandeDefMacro : public CommandeRobot {
	protected :
		static CommandeDefMacro myExemplaire;
	public : 
		CommandeDefMacro();
		CommandeDefMacro(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeDefMacro* getMyExemplaire();
};

#endif
