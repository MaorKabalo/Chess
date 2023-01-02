#include "King.h"

King::King(int row, int col, bool isBlack):
	Piece::Piece(row, col), _isBlack(isBlack)
{

}

King::~King()
{

}

bool King::getIsBlack() const
{
	return this->_isBlack;
}

string King::getType() const
{
	if (_isBlack)
	{
		return "k";
	}
	return "K";
}

int King::isLegalMove(int row, int col)
{
	if (abs(this->_col - col) == 1 || abs(this->_row - row) == 1)
	{
		return 0;
	}
	return 6;
}