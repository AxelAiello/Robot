#include "Position.hpp"

Position::Position(int i, int j) : _myX(i), _myY(j) {
	// Rien
}

void Position::setMyX(int i) {_myX = i;}

void Position::setMyY(int j) {_myY = j;}

int Position::getMyX() {return _myX;}

int Position::getMyY() {return _myY;}
