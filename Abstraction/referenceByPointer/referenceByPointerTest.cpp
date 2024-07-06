#include<iostream>
#include<memory>
#include "referenceByPointer.h"

using namespace std;

int main(){
    referenceByPointer r;
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    r.printArray(myArray, size);
}
