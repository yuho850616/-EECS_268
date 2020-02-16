#include "boardgame.h"
#include <iostream>
#include <string>
#ifndef BOARDDRIVER_H
#define BOARDDRIVER_H

class boarddriver
{
	public:
	boarddriver(std::string fileName); //constructor for infile
	~boarddriver(); // avoid memory leaks
	void run(); // to make the menu for the user

	private:
	int m_size;
	boardgame* m_arr = nullptr;

};
#endif
