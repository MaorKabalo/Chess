#include "Queen.h"

Queen::Queen(int row, int col, bool isBlack) : Piece(row, col), _isBlack(isBlack)
{
}

Queen::~Queen()
{
}

bool Queen::getIsBlack() const
{
    return this->_isBlack;
}

string Queen::getType() const
{
    if (_isBlack)
    {
        return "q";
    }
    return "Q";
}

int Queen::isLegalMove(int row, int col) 
{

    int curRow = this->getRow();
    int curCol = this->getCol();


    if (abs(curRow - row) == abs(curCol - col) || this->_row == row || this->_col == col)
    {
        return 0;
    }

    return 6;


}
