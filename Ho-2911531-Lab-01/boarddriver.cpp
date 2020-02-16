#include "boardgame.h"
#include "boarddriver.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

void boarddriver::run()
{
	int choice = 0;
	while(choice!=5)
	{
    std::cout <<"Select an option:\n";
    std::cout<<"1) Print all games\n";
 		std::cout<<"2) Print all games with minimum amount of ratings\n";
		std::cout<<"3) Print all games from a specific year\n";
		std::cout<<"4) Print the game with the largest gap between geek and average rating\n";
		std::cout<<"5) Quit\n";
	  std::cout<<"Enter your choice: ";
		std::cin >> choice;
		while(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
			std::cout<<"Wrong type! Please input integer!\n";
		}
		if(choice==1)
		{
			for(int i=0; i<m_size; i++)
			{
				std::cout<<m_arr[i].getrank()<<")\t"<<m_arr[i].getboardname()<<"\n"
                  <<"\tGeek Rating: "<<m_arr[i].getgeekrating()<<"\n"
                  <<"\tAverage Rating: "<<m_arr[i].getaveragerating()<<"\n"
                  <<"\tNum Ratings: "<<m_arr[i].getnumratings()<<"\n"
									<<"\tYear: "<<m_arr[i].getyear()<<"\n";
			}
 		}
		else if (choice==2)
		{
			int amount = 0;
			std::cout<<"Please enter minimum amount of rating you want: ";
			std::cin>>amount;
			while(std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
				std::cout<<"Wrong type! Please enter minimum amount of rating you want: ";
				std::cin>>amount;
			}
			for(int i=0 ; i<m_size; i++)
 			{
				if(m_arr[i].getnumratings()>=amount)
				{
					std::cout<<m_arr[i].getrank()<<") "<<m_arr[i].getboardname()
										<<"\n\t Geek Rating: "<<m_arr[i].getgeekrating()
										<<"\n\t Average Rating: "<<m_arr[i].getaveragerating()
										<<"\n\t Num Ratings: "<<m_arr[i].getnumratings()
										<<"\n\t Year: "<<m_arr[i].getyear()<<"\n";
				}
 			}
		}
		else if (choice==3)
		{
			int year = 0;
			std::cout<<"Please enter a specific year you want: ";
			std::cin>>year;
			while(std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
				std::cout<<"Wrong type! Please enter a specific year you want: \n";
			}
			for(int i=0; i<m_size; i++)
			{
				if(m_arr[i].getyear()==year)
				{
					std::cout<<m_arr[i].getrank()<<") "<<m_arr[i].getboardname()
										<<"\n\t Geek Rating: "<<m_arr[i].getgeekrating()
										<<"\n\t Average Rating: "<<m_arr[i].getaveragerating()
										<<"\n\t Num Ratings: "<<m_arr[i].getnumratings()
										<<"\n\t Year: "<<m_arr[i].getyear()<<"\n";
 				}
			}
 		}
		else if (choice==4)
		{
			int max = 0;
			int j = 0;
			for(int i=0; i<m_size; i++)
			{
				if(max< (fabs(m_arr[i].getgeekrating()-m_arr[i].getaveragerating())))
				{
					j = i ;
					max = fabs((m_arr[i].getgeekrating()-m_arr[i].getaveragerating()));
				}

			}
			std::cout<<m_arr[j].getrank()<<") "<<m_arr[j].getboardname()
								<<"\n\t Geek Rating: "<<m_arr[j].getgeekrating()
								<<"\n\t Average Rating: "<<m_arr[j].getaveragerating()
								<<"\n\t Num Ratings: "<<m_arr[j].getnumratings()
								<<"\n\t Year: "<<m_arr[j].getyear()<<"\n";
		}
		else if (choice>5||choice<1)
		{
			std::cout<<"Input number between 1-5 !\n";
		}
	}
}

boarddriver::boarddriver(std::string fileName)
{
	std::ifstream read;
	read.open(fileName);
	//read.ignore(1,'\n');
	std::string temp;
	read >> temp;
	m_size = stoi(temp); // get the size of the input
	m_arr = new boardgame [m_size];
	getline(read,temp);

	for(int i=0; i<m_size;i++)//repeat m_size times------------------------------------------------------
	{
		getline(read, temp);
		int comma = temp.find(',');
  	int r= stoi(temp.substr(0,comma));
		m_arr[i].setrank(r);
		temp = temp.substr(comma+1, temp.length());

		comma = temp.find(',');
		std::string b = temp.substr(0,comma-7);
		m_arr[i].setboardname(b);



		int y = stoi(temp.substr(comma-5,4));
		m_arr[i].setyear(y);
		temp = temp.substr(comma+1,temp.length());

		comma = temp.find(',');
		double g = stod(temp.substr(0,comma));
		m_arr[i].setgeekrating(g);
		temp = temp.substr(comma+1,temp.length());

		comma = temp.find(',');
    double a = stod(temp.substr(0,comma));
		m_arr[i].setaveragerating(a);
		temp = temp.substr(comma+1,temp.length());

   	int n= stoi(temp);
 		m_arr[i].setnumratings(n);

	}
	//end of repeat m_size times -----------------------------------------
		read.close();
}

boarddriver::~boarddriver()
{
	delete[]m_arr;
}
