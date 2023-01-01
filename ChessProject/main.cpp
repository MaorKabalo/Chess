#include "Board.h"
#include "Manager.h"

int main()
{
	Board b = Board();
	Manager m = Manager(b);
	m.sendToGraphics();
	//Board b1(b);
	
	//cout << b.checkIfMoveCheckWhite(7, 0, 0, 0) << endl;
	//cout << b.checkIfMoveCheckBlack(7, 0, 0, 0) << endl;
	//cout << b.move(7, 0, 0, 0) << endl;
	//cout << b.toString() << endl;
	//cout << b.move(7, 0, 0, 0) << endl;
	//cout << b.toString() << endl;
	//cout << b1.toString() << endl;
	//cout << b.checkCheckBlack() << endl;
	//cout << b.checkCheckWhite() << endl;
	//cout << b.toString() << endl;
	return 0;
}