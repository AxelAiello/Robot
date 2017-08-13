#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

#include "ObserveurTextuel.hpp"
#include <vector>

class Observable {

	public :
		vector<Observeur*> _myObserveurs;

		Observable(vector<Observeur*> myObserveurs);
		virtual void attacher(Observeur* ob);
		void detacher();
		void notifier();

};

#endif
