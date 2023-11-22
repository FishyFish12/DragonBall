#include <iostream>
#include <string>
#include "Data.h"

class Book
{
private:
    std::string ISBN;
    std::string title;
    std::string name;
    std::string surname;
    Data date;
    bool state;
public:
    std::string getISBN() const;

    std::string getTitle() const;

    std::string getName() const;

    std::string getSurname() const;
 
    bool getState() const;

    Data getDate() const;

    Book(std::string ISBN, std::string title, std::string name, std::string surname, Data date, bool state);

    void checkState() const;

    void changeState();
    
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    
    //bool validDate(Date::Date mm);

    void setISBN(std::string isbn);

    bool operator==(const Book& other) const;

    bool operator!=(const Book& other) const;

    
};
