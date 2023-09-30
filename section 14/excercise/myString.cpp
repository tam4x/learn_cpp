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

myString myString::operator+(const myString &rhs){
    char *plus = new char[std::strlen(string)+std::strlen(rhs.string) + 1];
    std::strcpy(plus, string);
    std::strcat(plus, rhs.string);
    myString temp{plus};
    delete [] plus;
    return temp;
}

myString myString::operator-(){
    char* lower = new char [std::strlen(string) + 1];
    std::strcpy(lower, string);
    for(int i=0; i < std::strlen(string); i++){
        lower[i] = std::towlower(lower[i]);
    }

    myString low{lower};
    delete [] lower;

    return low;
}

myString myString::operator*(int rhs){
    char* multi = new char[std::strlen(string)*rhs + 1];
    std::strcpy(multi, string);

    for(int i = 0; i<rhs-1;i++){
        std::strcat(multi, string);
    }

    myString m{multi};
    delete [] multi;
    return m;

}

bool myString::operator==(const myString &rhs){
    int inc = 0;
    if(std::strlen(string) == std::strlen(rhs.string)){
        for(int i = 0 ; i< std::strlen(string);i++){
            if(string[i] == rhs.string[i]){
                inc++;
            }
        }
    
    }
    else{
        return false;
    }
    if (inc == std::strlen(string))
    {
        return true;
    }
    else{
        return false;
    }
    
}


bool myString::operator!=(const myString &rhs){
    if(std::strlen(string) == std::strlen(rhs.string)){
        for(int i = 0 ; i< std::strlen(string);i++){
            if(string[i]==rhs.string[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return true;
    }
}

bool myString::operator<(const myString &rhs){
    if(std::strlen(string)<std::strlen(rhs.string)){
        return true;
    }
    else
    {
        return false;
    }
    
}

bool myString::operator>(const myString &rhs){
    if(std::strlen(string)>std::strlen(rhs.string)){
        return true;
    }
    else
    {
        return false;
    }
}

void myString::operator+=(const myString &rhs){
    std::strcat(string, rhs.string);

}



myString::~myString()
{
    delete [] string;
}

std::ostream &operator<<(std::ostream &os, const myString &rhs){
    os << rhs.string;
    return os;
}

std::istream &operator>>(std::istream &is, myString &rhs){
    char* temp = new char[1000];
    is >> temp;
    rhs = myString{temp};
    delete [] temp;
    return is;
}

