
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




int Pawn::isLegalMove(int row, int col) //need when eating
{
	int curRow = this->getRow();
	int curCol = this->getCol();
	if (this->_isBlack)
	{
		if (this->_firstMove)
		{
			if (row == curRow + 2 && curCol == col)
			{
				this->_firstMove = false;
				return 0;
			}
		}
		if (row == curRow + 1 && curCol == col)
		{
			this->_firstMove = false;
			return 0;
		}
		if (curRow + 1 == row && (curCol + 1 == col || curCol - 1 == col))
		{
			this->_firstMove = false;
			return 0;
		}
		if (curRow + 1 == row && curCol - 1 == col)
		{
			this->_firstMove = false;
			return 0;
		}
	}
	else
	{
		if (this->_firstMove)
		{
			if (row == curRow - 2 && curCol == col)
			{
				this->_firstMove = false;
				return 0;
			}
		}
		if (row == curRow - 1 && curCol == col)
		{
			this->_firstMove = false;
			return 0;
		}
		if (curRow - 1 == row && (curCol + 1 == col || curCol - 1 == col))
		{
			this->_firstMove = false;
			return 0;
		}
		if (curRow - 1 == row && curCol + 1 == col)
		{
			this->_firstMove = false;
			return 0;
		}
	}
	return 6;
}