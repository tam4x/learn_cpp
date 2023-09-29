#include "Account.h"
#include <string.h>
#include <iostream>

int Account::clients{0};

int Account::get_num_clients(){
    return clients;
}

Account::Account(std::string name, std::string o, double bal){
    Name = name;
    balance = bal;
    ort = new std::string;
    *ort = o;
    ++clients;
}

Account::Account(const Account &source){
    Name =  source.Name;
    balance = source.balance;
    ort = new std::string;
    *ort = *source.ort;
} 

Account::~Account(){
    delete ort;
    --clients;
}

void Account::set_balance(double amount){
    balance = amount;
}

double Account::get_balance()const{
    return balance;
}

void Account::set_name(std::string name){
    Name = name;

}

std::string Account::get_name() const{
    return Name;
}

void Account::set_ort(std::string o){
    *ort = o;
}

std::string Account::get_ort()const{
    return *ort;
}

void Account::deposit(){
    double amount = 0;
    std::cout << "How much money are you depositing? " << std::endl;
    std::cin >> amount;

    while(true){
        balance += amount;
        char c = ' ';

        std::cout << "you want to continue depositing money? " << std::endl;
        std::cin >> c;

        if(c == 'y'){
            std::cout << "How much money are you depositing? " << std::endl;
            std::cin >> amount;
        }

        else{
            break;
        }
    }
    
}

void Account::withdrawal(){
    double amount = 0;
    std::cout << "How much money are you withdrawing? " << std::endl;
    std::cin >> amount;

    while(true){
    if (balance-amount<0){
        std::cout << "can only deposit: " << balance << std::endl;

        }
    else{
        balance -= amount;
        }  
   
    
    char c = ' ';
    std::cout << "you want to continue withdrawing money? " << std::endl;
    std::cin >> c;

    if(c == 'y'){
             std::cout << "How much money are you withdrawing? " << std::endl;
             std::cin >> amount;
    }
    else{
        break;
    }

    }
}
    