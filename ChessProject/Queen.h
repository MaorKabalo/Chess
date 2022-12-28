#pragma once
#include "Piece.h"

class Queen : public Piece
{
public:

	Queen(int row, int col, bool isBlack);

	~Queen();

	virtual bool getIsBlack() const override;

	virtual string getType() const override;

	virtual int isLegalMove(int row, int col) override;

private:

	bool _isBlack;
};