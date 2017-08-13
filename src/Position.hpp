#ifndef POSITION_HPP
#define POSITION_HPP

class Position {
	private :
		int _myX;
		int _myY;
	public :
		Position(int i, int j);
		void setMyX(int i);
		void setMyY(int j);
		int getMyX();
		int getMyY();
};

#endif
