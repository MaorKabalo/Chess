#pragma once
#include "Piece.h"

class Bishop : public Piece
{
public:

	Bishop(int row, int col, bool isBlack);

	~Bishop();

	virtual bool getIsBlack() const override;

	virtual string getType() const override;

	virtual int isLegalMove(int row, int col) override;

private:

	bool _isBlack;
};