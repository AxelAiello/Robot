#ifndef INVOCATEUR_HPP
#define INVOCATEUR_HPP

class Commande;
#include "Robot.hpp"
#include "CommandeRobot.hpp"

//using std:...

class Invocateur {
	private :
		Commande* myCommande;
		Robot* myRobot;
		ifstream* myFile;

	public :
		Invocateur(string str);
		int getNextInt();
		string getNextString();
		Objet getNextObjet();
		Plot getNextPlot();

};

#endif
