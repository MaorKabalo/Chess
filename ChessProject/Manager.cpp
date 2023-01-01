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
	return this->_p->getMessageFromGraphics();
}