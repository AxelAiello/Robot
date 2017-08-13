#ifndef COMMANDEEVALUER_HPP
#define COMMANDEEVALUER_HPP

#include "CommandeRobot.hpp"

class CommandeEvaluer : public CommandeRobot {
	protected :
		static CommandeEvaluer myExemplaire;
		int myHauteur = 0;
	public : 
		CommandeEvaluer();
		CommandeEvaluer(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeEvaluer* getMyExemplaire();

		int getMyHauteur();
};

#endif
