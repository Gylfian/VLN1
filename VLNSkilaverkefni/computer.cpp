#include "computer.h"

Computer::Computer()
{
    name = "";
    yearBuilt = "";
    type = "";
    built = false;
}
Computer::Computer(string cName, string cYear, string cType, bool cBuilt)
{
    name = cName;
    yearBuilt = cYear;
    type = cType;
    built = cBuilt;
}
string Computer::getName() const
{
    return name;
}
string Computer::getYear() const
{
    return yearBuilt;
}
string Computer::getType() const
{
    return type;
}
void Computer::setName(string nameToSet)
{
    name = nameToSet;
}
void Computer::setYear(string yearToSet)
{
    yearBuilt = yearToSet;
}
void Computer::setType(string typeToSet)
{
    type = typeToSet;
}
void Computer::setBuilt(bool cBuilt)
{
    built = cBuilt;
}

