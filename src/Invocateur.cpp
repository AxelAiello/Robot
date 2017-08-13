#include "Invocateur.hpp"
#include "Commande.hpp"

Invocateur::Invocateur(string str) {
	// Création du robot
	vector<Observeur*> myObserveurs;
	ObserveurTextuel* ob = new ObserveurTextuel();
	Robot robot(myObserveurs);
	robot.attacher(ob);

	// Attribution du robot
	myRobot = &robot;

	// Source de lecture
	string line;
	ifstream myfile (str);
	myFile = &myfile;

	// Création commande 
	CommandeRobot commande(myRobot);
	myCommande = &commande;

	// Si le fichier est bien ouvert
	if (myFile->is_open()) {
		// Pour chaque ligne du fichier
		while (!myFile->eof()){
			// On prend le premier mot
			(*myFile) >> line;
			myCommande = myCommande->nouvelleCommande(line, this);
	    	}
	    	myFile->close();
	}
}

int Invocateur::getNextInt() {
	int i;
	(*myFile) >> i;
	return i;
}

string Invocateur::getNextString() {
	string d;
	(*myFile) >> d;
	return d;
}

Objet Invocateur::getNextObjet() {
	int o;
	(*myFile) >> o;
	Objet objet(o);
	return objet;
}

Plot Invocateur::getNextPlot() {
	int plt;
	(*myFile) >> plt;
	Plot pl(plt);
	return pl;
}

int main() {
	Invocateur Invocateur("./exemple.txt");
	return 0;
}
