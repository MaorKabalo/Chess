#pragma once
#include "Board.h"
#include "Pipe.h"
#include <iostream>
#include <thread>

class Menager
{
public:
	Menager(Board& b);

	~Menager();

	bool sendToGraphics();

	string getMessageFromGraphics();

private:
	Board& _b;

	Pipe* _p;

	char _msgToGraphics[1024];

	string _MessageFromGraphics;
};