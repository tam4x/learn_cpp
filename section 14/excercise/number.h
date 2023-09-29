#ifndef _NUMBER_H_
#define _NUMBER_H_

class number
{
private:

public:
    number();
    number(const char *s);
    number(const number &source);
    number(number &&source);
    void display();
    
    number &operator=(const number &rhs); //copy a = b
    number &operator=(number &&rhs); // move a = 5

    
 
    ~number();

};


#endif