#include <iostream>

class Data
{
    private:
        int day;
        int month;
        int year;
        void check(int d, int m, int y) const;
    public:
        Data(int d, int m, int y); 
        Data();
        void setYear(int y);
        void setDay(int d);
        void setMonth(int m);  
        int getYear() const ;
        int getMonth() const;
        int getDay() const;  
        void printDate() const;
};