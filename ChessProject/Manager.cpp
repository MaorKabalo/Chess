#include "Manager.h"

Manager::Manager(Board& b):
	_b(b)
{
	srand(time_t(NULL));
	this->_p = new Pipe();
	Pipe p;
	bool isConnect = this->_p->connect();
	string ans;
	while (!isConnect)
	{
		cout << "cant connect to graphics" << endl;
		cout << "Do you try to connect again or exit? (0-try again, 1-exit)" << endl;
		std::cin >> ans;

		if (ans == "0")
		{
			cout << "trying connect again.." << endl;
			Sleep(5000);
			isConnect = this->_p->connect();
		}
		else
		{
			this->_p->close();
		}
	}
}

Manager::~Manager()
{
	delete(this->_p);
}

bool Manager::sendToGraphics()
{
	string turnMsg = this->_b.getTurn();
	strcpy_s(this->_msgToGraphics, (this->_b.toString() + turnMsg).c_str());
	this->_p->sendMessageToGraphics(this->_msgToGraphics);
	return true;
}

string Manager::getMessageFromGraphics()
{
	this->_MessageFromGraphics = this->_p->getMessageFromGraphics();
	return this->_MessageFromGraphics;
}

void Manager::getIndexFromString(string str)
{
	char rowFrom = str[1];
	char colFrom = str[0];
	char rowTo = str[3];
	char colTo = str[2];
	this->_indexFrom[row] = 8-(rowFrom - '0');
	this->_indexTo[row] = 8-(rowTo - '0');
	switch (colFrom)
	{
	case 'a':
		this->_indexFrom[col] = 0;
		break;
	case 'b':
		this->_indexFrom[col] = 1;
		break;
	case 'c':
		this->_indexFrom[col] = 2;
		break;
	case 'd':
		this->_indexFrom[col] = 3;
		break;
	case 'e':
		this->_indexFrom[col] = 4;
		break;
	case 'f':
		this->_indexFrom[col] = 5;
		break;
	case 'g':
		this->_indexFrom[col] = 6;
		break;
	case 'h':
		this->_indexFrom[col] = 7;
		break;
	default:
		break;
	}
	switch (colTo)
	{
	case 'a':
		this->_indexTo[col] = 0;
		break;
	case 'b':
		this->_indexTo[col] = 1;
		break;
	case 'c':
		this->_indexTo[col] = 2;
		break;
	case 'd':
		this->_indexTo[col] = 3;
		break;
	case 'e':
		this->_indexTo[col] = 4;
		break;
	case 'f':
		this->_indexTo[col] = 5;
		break;
	case 'g':
		this->_indexTo[col] = 6;
		break;
	case 'h':
		this->_indexTo[col] = 7;
		break;
	default:
		break;
	}
}

bool Manager::doMove()
{
	this->getIndexFromString(this->getMessageFromGraphics());
	int isValid = this->_b.move(this->_indexFrom[row], this->_indexFrom[col], this->_indexTo[row], this->_indexTo[col]);
	strcpy_s(this->_msgToGraphics, to_string(isValid).c_str());
	this->_p->sendMessageToGraphics(this->_msgToGraphics);
	return true;
}