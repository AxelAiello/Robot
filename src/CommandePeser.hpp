#ifndef COMMANDEPESER_HPP
#define COMMANDEPESER_HPP

#include "CommandeRobot.hpp"

class CommandePeser : public CommandeRobot {
	protected :
		static CommandePeser myExemplaire;
		int myPoids = 0;
	public : 
		CommandePeser();
		CommandePeser(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandePeser* getMyExemplaire();

		int getMyPoids();
};

#endif
