/* -----------------------------------------------------------------------------
 * File Name: record.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to declare the method to set and get data
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
#ifndef RECORD_H
#define RECORD_H
#include<string>

class record
{
public:
  //@pre none
  //@post create constructor
  //@return none
  record();
  //@pre none
  //@post return m_firstname
  //@return string type
  std::string getfirstname();
  //@pre none
  //@post return m_lastname
  //@return string type
  std::string getlastname();
  //@pre none
  //@post return m_age
  //@return int type
  int getage();
  //@pre none
  //@post return m_illness
  //@return sting type
  std::string getillness();
  //@pre none
  //@post return m_severity
  //@return int type
  int getseverity();
  //@pre none
  //@post to get access for firstname
  //@return none
  void setfirstname(std::string firstname);
  //@pre none
  //@post to get access for lastname
  //@return none
  void setlastname(std::string lastname);
  //@pre none
  //@post to get access for age
  //@reutrn none
  void setage(int age);
  //@pre none
  //@post to get access for illness
  //@return none
  void setillness(std::string illness);
  //@pre none
  //@post to get access for severity
  //@return none
  void setseverity(int severity);
  //@pre none
  //@post to compare severity
  //@return comapre result
  bool operator< (const record& original);
  //@pre none
  //@post to compare severity
  //@return compate result;
  bool operator> (const record& original);

private:
  std::string m_firstname;
  std::string m_lastname;
  std::string m_illness;
  int m_age;
  int m_severity;

};
#endif
