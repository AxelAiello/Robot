# Robot

Le projet utilise notamment le compilateur g++, il faut donc l'avoir à jour.

L'objectif du projet est de modéliser le comportement d'un robot par les actions d'écrites dans le fichier Rapport.pdf dans son diagramme d'état. 

Pour compiler : 
	- deplacez vous dans le dossier ./src/
	- tapez la commande "make"
	ou la commande      "g++ -g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11 -c  *.cpp *.hpp"
	puis la commande    "g++ -g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11  *.o -o robot.exe"

Pour executer : 
	- deplacez vous dans le dossier ./src/
	- tapez la commande ./robot.exe
