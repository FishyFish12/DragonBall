#include <iostream>
#include <string>
#include <stdexcept>
#include "Book.h"


    std::string Book::getISBN() const
    {
        return ISBN;
    }

    std::string Book::getTitle() const
    {
        return title;
    }

    std::string Book::getName() const
    {
        return name;
    }

    std::string Book::getSurname() const
    {
        return surname;
    }

    Data Book::getDate() const
    {
        return date;
    }

    bool Book::getState() const
    {
        return state;
    }


    void Book::setISBN(std::string isbn) 
    {
        if (isbn.length() == 13) 
        {
            ISBN = isbn;
        } else 
        {
            std::cerr << "Invalid ISBN length." << std::endl;
        }
    }

    Book::Book(std::string ISBN, std::string title, std::string name, std::string surname, Data date, bool state)   
    {
        this->ISBN = ISBN;
        this->title = title;
        this->name = name;
        this->surname = surname;
        this->date = date;
        this->state = state;
    }
 
    void Book::checkState() const
    {
        if(getState() == true) 
        {
            std::cout<<"The book is available"<<std::endl;
        } else 
        {
            std::cout<<"The book is not available"<<std::endl;
        }
    }

    void Book::changeState() 
    {
        if(getState() == true) 
        {
            std::cout<<"Book state changed to not available"<<std::endl;
            state = false;
        } else 
        {
            std::cout<<"Book state changed to available"<<std::endl;
            state = true;
        }
    }

    bool Book::operator==(const Book& other)
    {
        return (getISBN() == other.getISBN());
    }

    bool Book::operator!=(const Book& other)
    {
        return (getISBN() != other.getISBN());
    }


    std::ostream &operator<<(std::ostream &os, const Book &book)
    {
        os << "ISBN: " << book.getISBN() << " Title: " << book.getTitle() << " Name: " << book.getName() << " Surname: " << book.getSurname() << " State: " << book.getState() << " Date: " << book.getDate().getDay() <<":" << book.getDate().getMonth() <<":" << book.getDate().getYear() << std::endl;
        return os;
    }
