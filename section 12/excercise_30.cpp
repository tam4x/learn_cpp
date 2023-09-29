#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;


void multiply_with_pointer(int *ptr, int multiplier){
    *ptr *= multiplier;
}

int findMax(int* arr, int size){
    int max_num{0};

    for(int i = 0; i < size; i++){
        if (*(arr + i) > max_num || i == 0){
            max_num = arr[i];
        }
        else
        {
            continue;
        }
        
    }
    return max_num;
}

void reverse_array(int *arr, int size){
    int *reverser{nullptr}; 
    reverser = new int[size];
    int inkrement = 0;
    int dekrement = size;
    while(dekrement > 0){
        reverser[inkrement] = arr[dekrement-1];
        inkrement++;
        dekrement--;
    }
    
    for(int i = 0; i<size;i++){
        arr[i] = reverser[i];
    }

    delete [] reverser;
}

string reverse_string(const string &stringi){
    int size = stringi.size();
    string reverser;
    reverser.resize(size);
    int d = size ;
    int i = 0;
    while(d > 0){
        reverser[i] = stringi[d-1];
        d--;
        i++;
    }

    return reverser;
}

int main(){
    srand (time(NULL));
    
    int number = 1 + rand() % 100;
    int multi = 1 + rand() % 100;

    string hi = {"Hello, i am pier"};
    string ih = reverse_string(hi);

    cout << ih <<endl;

    return 0;
}