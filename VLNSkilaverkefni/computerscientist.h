#ifndef CSCIENTIST_H
#define CSCIENTIST_H

#include "main.h"

class CScientist
{
public:
    string getName();
    string getGender();
    int getDob();
    int getDod();
    void setName(string nameToSet);
    void setGender(string genderToSet);
    void setDob(int dateToSet);
    void SetDod(int dateToSet);
    string name;
    string gender;
    int dateBorn;
    int dateDeath;

    CScientist();
private:

};

#endif // CSCIENTIST_H
