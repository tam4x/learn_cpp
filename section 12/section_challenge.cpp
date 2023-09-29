
#include <stdio.h>
#include <iostream>
using namespace std;

int* add_two(int *arr1, int size_1, int*arr2, int size_2){
    int *new_array {nullptr};
    new_array = new int[size_1 * size_2];
    int index = 0;
    int i = 0;
    while(index<(size_1*size_2)){
        for(int j = 0;j<size_1;j++){
            new_array[index] = arr2[i] * arr1[j];
            index++;
    }
        i++;
    }

    return new_array;
}

void print(int *arr, int size){
    for(int i = 0; i<size; i++){
        cout<< arr[i] << endl;
    }
    
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6};
    int *arr{nullptr};
    arr = add_two(arr1, 5, arr2, 6);

    print(arr, 30);
    return 0;
}