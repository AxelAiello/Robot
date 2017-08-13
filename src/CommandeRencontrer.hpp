#ifndef COMMANDERENCONTRER_HPP
#define COMMANDERENCONTRER_HPP

#include "CommandeRobot.hpp"

class CommandeRencontrer : public CommandeRobot {
	protected :
		static CommandeRencontrer myExemplaire;
		Plot myPlot;
	public : 
		CommandeRencontrer();
		CommandeRencontrer(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeRencontrer* getMyExemplaire();

		Plot getMyPlot();
};

#endif
