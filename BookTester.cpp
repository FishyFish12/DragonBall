#include <iostream>
#include <string>
#include "Book.h"

int main() 
{
    Data dateB1(1,1,2000);
    Data dateB2(2,2,2003);
    Data dateB3(3,3,2006);
    Book myBook("887-521-837-4", "Una cosa divertente che non farò mai più", "David","FosterWallace" ,dateB1, true);
    Book myBook1("887-511-237-4", "Una matematica divertente che non farò mai più", "Carlo","Mariconda" ,dateB2, true);
    Book myBook2("887-521-837-4", "Una cosa divertente che non farò mai più", "David","FosterWallace" ,dateB1, true);
    myBook.checkState();  // TEST CHECK STATE
    myBook.changeState(); //TEST CHANGE STATE
    myBook.checkState();  // TEST CHECK STATE
    std::cout << myBook << std::endl; // TEST OPERATOR <<

    if(myBook == myBook1) 
    {
        std::cout << "The books are the same" << std::endl; // TEST OPERATOR ==
    } else 
    {
        std::cout << "The books are different" << std::endl; // TEST OPERATOR ==   
    }

    if(myBook != myBook2) {
        std::cout << "The books are different" << std::endl; // TEST OPERATOR !=
    } else 
    {
        std::cout << "The books are the same" << std::endl; // TEST OPERATOR !=
    }
    
    return 0;
}

