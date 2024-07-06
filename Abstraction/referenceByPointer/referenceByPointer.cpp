#include<iostream>
#include "referenceByPointer.h"

using namespace std;

void referenceByPointer::printArray(int *arr, int size){
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}