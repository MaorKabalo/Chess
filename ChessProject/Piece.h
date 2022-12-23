#pragma once

#include <iostream>
#include <string>

using namespace std;


class Piece
{

private:
	static int _numOfPieces;
	static int _numOfEaten;

protected:
	int _row;
	int _col;

public:
	Piece(int row, int col) : _row(row), _col(col) { this->_numOfPieces++; }
	~Piece();
	int getRow() const;
	int getCol() const;
	virtual std::string getType() const = 0;
	virtual bool isLegalMove(int row, int col) = 0;
	bool setPlace(int row, int col);
	virtual bool getIsBlack() const = 0;

};