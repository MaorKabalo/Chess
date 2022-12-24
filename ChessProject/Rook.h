#pragma once
#include "Piece.h"

class Rook : Piece
{
public:
	Rook(int row, int col, bool isBlack);

	~Rook();

	virtual bool getIsBlack() const override;

	virtual string getType() const override;

	virtual bool isLegalMove(int row, int col) override;

private:
	bool _isBlack;

};