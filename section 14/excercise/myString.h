#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
class myString
{
private:
    friend std::ostream &operator<<(std::ostream &os, const myString &rhs);
    friend std::istream &operator>>(std::istream &is, myString &rhs);

    char *string;
public:
    myString();
    myString(const char *s);
    myString(const myString &source);
    myString(myString &&source);
    myString &operator=(const myString &rhs); //copy a = b
    myString &operator=(myString &&rhs); // move a = 5

    void display();
    int get_length();
    const char *get_str() const;

    myString operator+(const myString &rhs);
    myString operator-();
    myString operator*(int rhs);

    std::ostream operator<<(std::ostream &os);

    void operator+=(const myString &rhs);
    bool operator==(const myString &rhs);
    bool operator!=(const myString &rhs);
    bool operator<(const myString &rhs);
    bool operator>(const myString &rhs);

    ~myString();

};


#endif