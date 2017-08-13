#ifndef COMMANDESAISIR_HPP
#define COMMANDESAISIR_HPP

#include "CommandeRobot.hpp"

class CommandeSaisir : public CommandeRobot {
	protected :
		static CommandeSaisir myExemplaire;
		Objet myObjet;
	public : 
		CommandeSaisir();
		CommandeSaisir(Invocateur* inv);

		virtual void execute();
		virtual void desexecute();
		virtual Commande* constructeurVirtuel(Invocateur* inv);
		static CommandeSaisir* getMyExemplaire();

		Objet getMyObjet();
};

#endif
