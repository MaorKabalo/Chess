#pragma once
#include "Piece.h"
#include "Rook.h"

class Board
{
public:
	Board();

	~Board();

	int move(const int nowRow, const int nowCol, const int thanRow, const int ThanCol);

	int isLegalMove(int row, int col) const;

	string toString() const;

	int checkCheckWhite() const;

	int checkCheckBlack() const;

	int checkIfMoveCheckWhite(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const;

	int checkIfMoveCheckBlack(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const;

private:
	Piece* _board[8][8];

	bool _checkWhite;

	bool _checkBlack;

	Piece** setBoard() const;

};