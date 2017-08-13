#ifndef COMMANDETOURNER_HPP
#define COMMANDETOURNER_HPP

#include "CommandeRobot.hpp"

class CommandeTourner : public CommandeRobot {
	protected :
		static CommandeTourner myExemplaire;
		string myDirection;
		string myLastDirection;
	public : 
		CommandeTourner();
		CommandeTourner(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeTourner* getMyExemplaire();

		string getMyDirection();
};

#endif
