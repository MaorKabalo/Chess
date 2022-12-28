#include "Board.h"
Rook r(0, 0, true);
Rook R(7, 0, false);
Board::Board():
	_checkWhite(false), _checkBlack(false)
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
	//cout << this->_board[0][0]->getType() << endl;//" " << p.getType() << endl;
}

Board::~Board()
{

}

string Board::toString() const
{
	//cout << Piece::getType(*(this->_board[0][0])) << endl;
	string str = "";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (this->_board[i][j] != nullptr)
			{
				Piece& p = *(this->_board[i][j]);
				str += this->_board[i][j]->getType() + ", ";
				//str += Piece::getType(*(this->_board[i][j])) + ", ";
			}
			else
			{
				str += "#, ";
			}
				//str += Piece::getType(*(this->_board[i][j])) + ", ";
		}
		str += "\n";
	}
	return str;
}