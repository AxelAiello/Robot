#ifndef ETATROBOT_HPP
#define ETATROBOT_HPP

using namespace std;
#include <iostream>
#include <string>

class EtatRobot {
	private :
		string _myNomEtat;
	protected :
		EtatRobot(string myNomEtat) : _myNomEtat(myNomEtat)  {};
	public :
		virtual EtatRobot* avancer();
		virtual EtatRobot* tourner();
		virtual EtatRobot* saisir();
		virtual EtatRobot* poser();
		virtual EtatRobot* peser();
		virtual EtatRobot* evaluerPlot();
		virtual EtatRobot* rencontrerPlot();
		virtual EtatRobot* figer();
		virtual EtatRobot* repartir();
		string getMyNomEtat();

};

#endif
