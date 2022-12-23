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

bool Rook::isLegalMove(int row, int col)
{
	if (this->_row == row || this->_col == col)
	{
		return true;
	}
	return false;
}