#pragma once
#include "Piece.h"

class Rook : Piece
{
public:
	Rook(int row, int col, bool isBlack);

	~Rook();

	bool getIsBlack() const override;

	string getType() const override;

	bool isLegalMove(int row, int col) override;

private:
	bool _isBlack;

};