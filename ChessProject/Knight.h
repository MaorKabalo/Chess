#pragma once
#include "Piece.h"

class Knight : public Piece
{
public:

	Knight(int row, int col, bool isBlack);

	~Knight();

	virtual bool getIsBlack() const override;

	virtual string getType() const override;

	virtual int isLegalMove(int row, int col) override;

private:

	bool _isBlack;
};