#pragma once

#include <iostream>
#include <string>


class Piece
{

private:	
	int _row;
	int _col;
	static int _numOfTool;
	static int _numOfEaten;

public:
	Piece(int row, int col) : _row(row), _col(col) { this->_numOfTool++; }
	int getRow() const;
	int getCol() const;
	virtual std::string getType() const = 0;
	virtual bool isLegalMove(int row, int col) = 0;
	bool setPlace(int row, int col);

};