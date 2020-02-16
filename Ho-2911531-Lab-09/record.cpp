/* -----------------------------------------------------------------------------
 * File Name: record.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to define the method to set and get data
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
#include "record.h"
#include <string>


record::record()
{

}

std::string record::getfirstname()
{
  return(m_firstname);
}

void record::setfirstname(std::string firstname)
{
  m_firstname = firstname;
}

std::string record::getlastname()
{
  return(m_lastname);
}

void record::setlastname(std::string lastname)
{
  m_lastname = lastname;
}

int record::getage()
{
  return(m_age);
}

void record::setage(int age)
{
  m_age = age;
}

std::string record::getillness()
{
  return(m_illness);
}

void record::setillness(std::string illness)
{
  m_illness = illness;
}

int record::getseverity()
{
  return(m_severity);
}

void record::setseverity(int severity)
{
  m_severity = severity;
}

bool record::operator< (const record& original)
{
    return(m_severity<original.m_severity);
}
bool record::operator> (const record& original)
{
    return(m_severity>original.m_severity);
}
