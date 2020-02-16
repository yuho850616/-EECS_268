#include"Pokemon.h"
void Pokemon::setAN(std::string AN)
{
    m_AN=AN;
}
void Pokemon::setJN(std::string JN)
{
    m_JN=JN;
}
void Pokemon::setIND(int ind)
{
    m_ind=ind;
}
std::string Pokemon::getJN()
{
    return(m_JN);
}
std::string Pokemon::getAN()
{
    return(m_AN);
}
int Pokemon::getInd()
{
    return(m_ind);
}
bool Pokemon::operator< (const Pokemon& temp)
{
    return(m_AN<temp.m_AN);
}
bool Pokemon::operator> (const Pokemon& temp)
{
    return(m_AN>temp.m_AN);
}