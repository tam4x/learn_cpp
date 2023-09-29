#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class myString
{
private:
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

    ~myString();

};


#endif