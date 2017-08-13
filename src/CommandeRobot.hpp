#ifndef COMMANDEROBOT_HPP
#define COMMANDEROBOT_HPP

#include "Commande.hpp"
#include "Robot.hpp"

class CommandeRobot : public Commande {
	public:
		static vector<CommandeRobot*> myCommandesExecutes;
		static Robot* mySujet;

		CommandeRobot();
		CommandeRobot(Robot* r);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static Robot* getMySujet();
};

#endif
