#include "Bishop.h"

Bishop::Bishop(int row, int col, bool isBlack) : Piece(row, col), _isBlack(isBlack)
{
	
}

Bishop::~Bishop()
{
}

bool Bishop::getIsBlack() const
{
	return _isBlack;
}

string Bishop::getType() const
{

	if (_isBlack)
	{
		return "b";
	}

	return "B";
}

int Bishop::isLegalMove(int row, int col)
{

	int curRow = this->getRow();
	int curCol = this->getCol();


	if (abs(curRow - row) == abs(curCol - col))
	{
		return 0;
	}

	return 6;

}


