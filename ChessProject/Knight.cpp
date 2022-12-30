#include "Knight.h"

Knight::Knight(int row, int col, bool isBlack) : Piece(row, col), _isBlack(isBlack)
{
}

Knight::~Knight()
{
}

bool Knight::getIsBlack() const
{
    return this->_isBlack;
}

string Knight::getType() const
{
    if (_isBlack)
    {
        return "n";
    }
    return "N";
}

int Knight::isLegalMove(int row, int col)
{

	int curRow = this->getRow();
	int curCol = this->getCol();

	if (curCol + 2 == col && curRow + 1 == row)
	{
		return 0;
	}
	else if (curCol + 2 == col && curRow - 1 == row)
	{
		return 0;
	}
	else if (curCol + 1 == col && curRow + 2 == row)
	{
		return 0;
	}
	else if (curCol + 1 == col && curRow - 2 == row)
	{
		return 0;
	}
	else if(curCol - 2 == col && curRow + 1 == row)
	{
		return 0;
	}
	else if (curCol - 2 == col && curRow - 1 == row)
	{
		return 0;
	}
	else if (curCol - 1 == col && curRow + 2 == row)
	{
		return 0;
	}
	else if (curCol - 1 == col && curRow - 2 == row)
	{
		return 0;
	}


	return 6;

}
