#include "boardgame.h"
#include <string>
#include <iostream>

int boardgame::getrank()
{
	return(rank);
}	

void boardgame::setrank(int r)
{
	rank = r;
}

std::string boardgame::getboardname()
{
	return(boardname);
}

void boardgame::setboardname(std::string b)
{
	boardname = b;
}

int boardgame::getyear()
{
	return(year);
}

void boardgame::setyear(int y)
{
	year = y;
}


double boardgame::getgeekrating()
{
	return(geekrating);
}

void boardgame::setgeekrating(double g)
{
	geekrating = g;
}

double boardgame::getaveragerating()
{
	return(averagerating);
}

void boardgame::setaveragerating(double a)
{
	averagerating = a;
}

int boardgame::getnumratings()
{
	return(numratings);
}

void boardgame::setnumratings(int n)
{
	numratings = n;
}
