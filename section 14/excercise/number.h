#ifndef _NUMBER_H_
#define _NUMBER_H_

class number
{
private:
    int num;
public:
    number();
    number(int numero);
    number(const number &source);
    number(number &&source);
    void display();

    number operator+(const number &rhs) const;
    number operator-() const; //copy a = b

    bool operator!() const;
    bool operator==(const number &rhs);
 
    ~number();

}; 


#endif