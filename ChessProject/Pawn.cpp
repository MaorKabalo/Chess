
#include "Piece.h"
#include "Pawn.h"


bool Pawn::getFirstMove() const
{
	return this->_firstMove;
}

bool Pawn::getIsBlack() const
{
	return this->_isBlack;
}

std::string Pawn::getType() const
{
	if (this->_isBlack)
	{
		return "p";
	}
	
	return "P";
}




bool Pawn::isLegalMove(int row, int col) //need when eating
{

	int curRow = this->getRow();
	int curCol = this->getCol();

	if (this->_firstMove)
	{
		if (row == curRow + 2 && curCol == col)
		{
			this->_firstMove = false;
			return true;
		}
	}

	if (row == curRow + 1 && curCol == col)
	{
		this->_firstMove = false;
		return true;
	}

	return false;
}