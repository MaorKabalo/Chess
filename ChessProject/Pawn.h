#pragma once

#include "Piece.h"

class Pawn : public Piece
{
private:
	bool _firstMove;
	bool _isBlack;

public:

	Pawn(int row, int col, bool isBlack) : Piece(row, col), _isBlack(isBlack) { this->_firstMove = true; };

	bool getFirstMove() const;
	virtual bool getIsBlack() const override;

	virtual std::string getType() const override;
	virtual bool isLegalMove(int row, int col) override;


};