#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<int> v1 {5,3,2,4};
    vector<int> *v {&v1};
    size_t size{0};
    double *temp_ptr{nullptr};

    for (auto value:*v){
        printf("%d\n", value);
    }

    cout << "How many temperature you wanna include?" << endl;
    cin >> size;
    
    temp_ptr = new double[size];
    double d = 1.0;
    for(int i = 0;i<size;i++){
        *(temp_ptr + i) = d;
        d = d + 1.0;
        cout << temp_ptr[i] <<  endl;
    }

    delete [] temp_ptr;

    return 0;
}