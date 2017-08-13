#ifndef COMMANDEAVANCER_HPP
#define COMMANDEAVANCER_HPP

#include "CommandeRobot.hpp"

class CommandeAvancer : public CommandeRobot {
	protected :
		int myX;
		int myY;
		int lastX;
		int lastY;
		static CommandeAvancer myExemplaire;
	public : 
		CommandeAvancer();
		CommandeAvancer(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		int getMyX();
		int getMyY();
		static CommandeAvancer* getMyExemplaire();

};

#endif
