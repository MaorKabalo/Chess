#include "Board.h"
Rook r(0, 0, true);
Rook R(7, 0, false);
Board::Board():
	_checkWhite(false), _checkBlack(false), _blackTurn(false)
{
	for (int i = 0; i < 8; i++) 
	{
		for (int j = 0; j < 8; j++)
		{
			(this->_board[i][j]) = NULL;
		}
	} 
	this->_board[0][0] = &r;
	this->_board[7][0] = &R;
}

Board::~Board()
{

}

string Board::toString() const
{
	string str = "";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (this->_board[i][j] != nullptr)
			{
				str += this->_board[i][j]->getType() + " ";
			}
			else
			{
				str += "# ";
			}
		}
		str += "\n";
	}
	return str;
}

int Board::isLegalMove(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const
{
	if (thanRow < 0 || thanRow>7 || ThanCol < 0 || ThanCol>7 || nowRow < 0 || nowRow>7 || nowCol < 0 || nowCol>7)
	{
		return 5;
	}
	if (this->_board[nowRow][nowCol]->getIsBlack() != this->_blackTurn)
	{
		return 2;
	}
	if (nowRow == thanRow && nowCol == ThanCol)
	{
		return 7;
	}
	if (this->_board[nowRow][nowCol]->getIsBlack() == this->_board[thanRow][ThanCol]->getIsBlack())
	{
		return 3;
	}
	if (this->_board[nowRow][nowCol]->isLegalMove(thanRow, ThanCol) == 6)
	{
		return 6;
	}
	char type = this->_board[nowRow][nowCol]->getType()[0];
	switch (type)
	{
	case 'r'||'R':
		for (int i = nowRow; i < thanRow; i++)
		{
			for (int j = nowCol; j < ThanCol; j++)
			{
				if (this->_board[i][j] != nullptr)
				{
					if (thanRow > i || ThanCol > j)
					{
						return 6;
					}
				}
			}
		}
		for (int i = nowRow; i < thanRow; i--)
		{
			for (int j = nowCol; j < ThanCol; j--)
			{
				if (this->_board[i][j] != nullptr)
				{
					if (thanRow < i || ThanCol < j)
					{
						return 6;
					}
				}
			}
		}
		break;
	default:
		break;
	}
	if (false)
	{
		//chack
	}
	return 0;
}

int Board::move(const int nowRow, const int nowCol, const int thanRow, const int ThanCol)
{
	if (this->isLegalMove(nowRow, nowCol, thanRow, ThanCol) != 0)
	{
		return this->isLegalMove(nowRow, nowCol, thanRow, ThanCol);
	}
	this->_board[thanRow][ThanCol] = this->_board[nowRow][nowCol];
	this->_board[nowRow][nowCol] = nullptr;
	this->_blackTurn = !this->_blackTurn;
	return 0;
}