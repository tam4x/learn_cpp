#include "myString.h"
#include <cstring>
#include <iostream>

myString::myString(/* args */)
{
    string = nullptr;
    string = new char[1];
    *string = '\0';
    std::cout << "no args const"<< std::endl;
}

myString::myString(const char *s){
    string = nullptr;
    if (s == nullptr){
        string = new char[1];
        *string = '\0';
    }
    else{
        string = new char[std::strlen(s) + 1];
        std::strcpy(string, s);
    }
    std::cout << "one args const"<< std::endl;
}

myString::myString(const myString &source){
    string = nullptr;
    if (source.string == nullptr){
        string = new char[1];
        *string = '\0';
    }
    else{
        string = new char[std::strlen(source.string) + 1];
        std::strcpy(string, source.string);
    }
    std::cout << "copy const"<< std::endl;
}

myString::myString(myString &&source){
    string = source.string;
    source.string = nullptr;
    std::cout << "move const"<< std::endl;
}

myString &myString::operator=(const myString &rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] string;
    const char * hi = rhs.get_str();
    string = new char[std::strlen(hi) + 1];

    for(int i = 0; i< std::strlen(string);i++){
        *(string + i) = *(hi + i);
    }
    std::cout << "copy assignment"<< std::endl;
    return *this;
}

myString &myString::operator=(myString &&rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] string;
    string = rhs.string;
    rhs.string = nullptr;

    std::cout << "move assignment" << std::endl;

    return *this;
}

void myString::display(){
    for(int i = 0; i<std::strlen(string); i++){
        std::cout << *(string + i);
    }
    std::cout << std::endl;
}

int myString::get_length(){
    return int(std::strlen(string));
}

const char *myString::get_str() const {
    return string;
}

myString::~myString()
{
    delete [] string;
}
