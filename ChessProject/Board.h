#pragma once
#include "Piece.h"
#include "Rook.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Pawn.h"

class Board
{
public:
	Board();

	~Board();

	int move(const int nowRow, const int nowCol, const int thanRow, const int ThanCol);

	int isLegalMove(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const;

	string toString() const;

	int checkCheckWhite();

	int checkCheckBlack();

	int checkIfMoveCheckWhite(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const;

	int checkIfMoveCheckBlack(const int nowRow, const int nowCol, const int thanRow, const int ThanCol) const;

private:
	Piece* _board[8][8];

	bool _checkWhite;

	bool _checkBlack;

	bool _blackTurn;

};