#ifndef COMMANDEPOSER_HPP
#define COMMANDEPOSER_HPP

#include "CommandeRobot.hpp"

class CommandePoser : public CommandeRobot {
	protected :
		static CommandePoser myExemplaire;
		Objet* myLastObj;
	public : 
		CommandePoser();
		CommandePoser(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandePoser* getMyExemplaire();
};

#endif
