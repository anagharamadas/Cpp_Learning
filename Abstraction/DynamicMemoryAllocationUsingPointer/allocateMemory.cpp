#include<iostream>
#include "allocateMemory.h"

using namespace std;

void AllocateMemory::allocateMemory(int **ptr){
    *ptr = new int; //Allocate memory for an int
    **ptr =20; //Assign a value to the allocated memory 
}