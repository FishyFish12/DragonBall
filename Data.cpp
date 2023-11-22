#include <iostream>
#include <stdexcept>
#include "Data.h"

void Data::check(int d, int m, int y) const
{
    if(m < 1 || m >12)
    {
        throw std::invalid_argument("mese non valido");
    }
    if(y < 0)
    {
        throw std::invalid_argument("anno non valido");
    }
    int daymax;
    switch(m)
    {
        case 2:
        daymax = (y%4 == 0 && ((y % 100 == 0) && (y %400 == 0))) ? 29:28;
        break;
        case 4: case 6: case 9: case 11:
        daymax = 30;
        default:
        daymax = 31;
    }

    if (d < 1 || d > daymax)
    {
        throw std::invalid_argument("giorno non valido");
    }
}  

Data::Data(int d, int m, int y)
{   
    check(d,m,y);
    day = d;
    month = m;
    year = y;
}

Data::Data() 
{
    day = 1;
    month = 1;
    year = 2000;
} 



void Data::setYear(int y)
{
    check(day, month, y);
    year = y;
}
void Data::setDay(int d)
{
    check(d, month, year);
    day = d;
}
void Data::setMonth(int m)
{
    check(day, m, year);
    month =  m;
}
int Data::getMonth() const
{
    return month;
}
int Data::getDay() const
{
    return day;
}
int Data::getYear() const
{
    return year;
}
void Data::printDate() const 
{
    std::cout << day << "/" << month << "/" << year << std::endl;
}




