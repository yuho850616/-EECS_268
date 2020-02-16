#ifndef POKEMON_H
#define POKEMON_H
#include<string>
class Pokemon 
{
    private:
    std::string m_AN;
    std::string m_JN;
    int m_ind;
    public:
    void setAN(std::string AN);
    void setJN(std::string JN);
    void setIND(int ind);
    std::string getJN();
    std::string getAN();
    int getInd();
    bool operator < (const Pokemon& temp);
    bool operator > (const Pokemon& temp);

};
#endif