#ifndef BOARDGAME_H
#define BOARDGAME_H
#include <string>
#include <iostream>

class boardgame
{
	public:
		int getrank(); //from 1 to 100
		void setrank(int r);
		std::string getboardname(); // to get boardgame name
		void setboardname(std::string b);
		int getyear(); // to get what year is it
		void setyear(int y);
		double getgeekrating(); // to get geekrating
		void setgeekrating(double g);
		double getaveragerating(); // to get averagerating
		void setaveragerating(double a);
		int getnumratings(); // to get how people vote the ratings
		void setnumratings(int n);

	private:

		int rank;
		std::string boardname;
		int year;
		double geekrating;
		double averagerating;
		int numratings;

};
#endif
