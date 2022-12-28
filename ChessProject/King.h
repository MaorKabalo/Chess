#pragma once
#include "Piece.h"

class King : public Piece
{
public:

	King(int row, int col, bool isBlack);

	~King();

	virtual bool getIsBlack() const override;

	virtual string getType() const override;

	virtual int isLegalMove(int row, int col) override;

private:

	bool _isBlack;
};