#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{

private:
    static int clients;

    std::string Name;
    std::string *ort;
    double balance;

public:
    static int get_num_clients();

    Account(std::string name = " ", std::string o = " ", double bal = 0.0);
    Account(const Account &source);

    void set_balance(double amount);
    double get_balance()const;
    
    void set_name(std::string name);
    std::string get_name()const;
    
    void set_ort(std::string o);
    std::string get_ort()const;

    void deposit();
    void withdrawal();

    ~Account();
    
};


#endif