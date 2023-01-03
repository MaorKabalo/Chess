#pragma once
#include "Board.h"
#include "Pipe.h"
#include <iostream>
#include <thread>

class Manager
{
public:
	Manager(Board& b);

	~Manager();

	bool sendToGraphics();

	string getMessageFromGraphics();

	enum rowCol{row = 0, col = 1};

	void getIndexFromString(string str);

	bool doMove();

private:
	Board& _b;

	Pipe* _p;

	char _msgToGraphics[1024];

	string _MessageFromGraphics;

	int _indexFrom[2];

	int _indexTo[2];
};