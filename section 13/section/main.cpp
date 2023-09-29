#include "Account.h"
#include <iostream>
#include <string>

int main(){
    Account custom{"Pier", "Peine", 1000.0};
    Account custom_2{"Pascal", "Peine", 50.0};
    Account custom_3{"Pa", "Peine", 500.0};

    std::cout << custom.get_name() << " " << custom.get_ort() << Account::get_num_clients();
    
    return 0;
}
