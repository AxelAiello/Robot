#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "Observable.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using std::string;
using std::ifstream;
using std::istream_iterator;

class Robot : public Observable {
	private :
		string _myDirection;
		Plot* _myPlot;
		Position* _myPosition;
		Objet* _myObjet;
		EtatRobot* _myEtatRobot;

	public :
		Robot(vector<Observeur*> myObserveurs);
		void avancer(int* x, int* y);
		void tourner(string direction);
		void saisir(Objet* o);
		void poser();
		int peser();
		void rencontrerPlot(Plot* p);
		int evaluerPlot();
		void figer();
		void repartir();
		
		virtual void attacher(Observeur* ob);

		~Robot();

		// Getteur
		string getMyDirection();
		Plot* getMyPlot();
		Position* getMyPosition();
		Objet* getMyObjet();
		EtatRobot* getMyEtatRobot();

};

#endif
