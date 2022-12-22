
#include <iostream>
#include "Piece.h"



int Piece::getRow() const
{
	return _row;
}

int Piece::getCol() const
{
	return _col;
}

bool Piece::setPlace(int row, int col)
{

	if (row > 7 || col > 7)
	{
		return false;
	}

	this->_row = row;
	this->_col = col;
	return true;
}