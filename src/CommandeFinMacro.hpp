#ifndef COMMANDEFINMACRO_HPP
#define COMMANDEFINMACRO_HPP

#include "CommandeRobot.hpp"

class CommandeFinMacro : public CommandeRobot {
	protected :
		static CommandeFinMacro myExemplaire;
	public : 
		CommandeFinMacro();
		CommandeFinMacro(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeFinMacro* getMyExemplaire();
};

#endif
