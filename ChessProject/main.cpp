#include "Board.h"

int main()
{
	Board b = Board();
	cout << b.toString() << endl;
	//cout << b.checkIfMoveCheckWhite(7, 0, 0, 0) << endl;
	//cout << b.checkIfMoveCheckBlack(7, 0, 0, 0) << endl;
	//cout << b.move(7, 0, 0, 0) << endl;
	cout << b.checkCheckBlack() << endl;
	cout << b.checkCheckWhite() << endl;
	cout << b.toString() << endl;
	return 0;
}