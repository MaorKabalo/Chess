#include "Board.h"

int main()
{
	Board b = Board();
	cout << b.toString() << endl;
	cout << b.move(7, 0, 0, 0) << endl;
	cout << b.toString() << endl;
	return 0;
}