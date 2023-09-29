#include <iostream>
#include <cstring>
#include "myString.h"



int main(){
    myString P{"Pier"};
    myString d;
    myString e{P};
    P.display();
    d.display();
    e.display();
    d = e;
    d.display();
    myString a;
    a = "hi";
    a.display();
    
    return 0;
}