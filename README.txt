Le projet utilise notament le compilateur g++, il faut donc l'avoir à jour.

L'objectif du projet de modéliser le comportement d'un robot par les actions d'écrites dans le fichier Rapport.pdf 
dans son diagramme d'état. 

Pour compiler : 
	- deplacer vous dans le dossier ./src/
	- taper la commande "make"
	ou la commande      "g++ -g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11 -c  *.cpp *.hpp"
	puis la commande    "g++ -g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11  *.o -o robot.exe"

Pour executer : 
	- deplacer vous dans le dossier ./src/
	- taper la commande ./robot.exe