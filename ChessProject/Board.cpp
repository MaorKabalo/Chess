#include "Board.h"

Board::Board():
	_checkWhite(false), _checkBlack(false)
{
	//this->_board = new Piece**[8];
	Rook r = Rook(0, 0, true);
	for (int i = 0; i < 8; i++) 
	{
		//this->_board[i] = new Piece*[8];
		for (int j = 0; j < 8; j++)
		{
			(this->_board[i][j]) = NULL;
		}
	} 
	Piece& p = r;
	this->_board[0][0] = &p;
	cout << Piece::getType(*(this->_board[0][0])) << endl;//" " << p.getType() << endl;
	//cout << Piece::getType(*(this->_board[0][0])) << endl;
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
			//cout << i*8+j<<" ";
			if (this->_board[i][j] != nullptr)
			{
				//cout << i * 8 + j << " ";
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