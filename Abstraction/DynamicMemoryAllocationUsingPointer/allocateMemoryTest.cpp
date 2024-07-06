#include<iostream>
#include<memory>
#include "allocateMemory.h"

using namespace std;

int main(){
    AllocateMemory m;
    int *numPtr = nullptr;
    m.allocateMemory(&numPtr); //Pass the address of the pointer
    cout<<"Value at allocated memory: " << *numPtr <<endl;
    delete numPtr; //free the allocated memory
    return 0;
}