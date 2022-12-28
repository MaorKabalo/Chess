#include "Rook.h"

Rook::Rook(int row, int col, bool isBlack):
	Piece::Piece(row, col), _isBlack(isBlack)
{

}

Rook::~Rook()
{

}

bool Rook::getIsBlack() const
{
	return this->_isBlack;
}

string Rook::getType() const
{
	if (this->_isBlack)
	{
		return "r";
	}
	return "R";
}

int Rook::isLegalMove(int row, int col)
{
	if (this->_row == row || this->_col == col)
	{
		return 0;
	}
	return 6;
}

/*Piece Rook::operator=(Piece& p)
{
	__super::operator=(p);
	this->_isBlack = p.getIsBlack();
	return *this;
}*/