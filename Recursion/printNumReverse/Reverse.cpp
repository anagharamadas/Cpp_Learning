#include<iostream>
#include "Reverse.h"

using namespace std;

void Reverse::reverseOrder(int &num){
if ( num == 0)
    return;
cout<<num<<" ";
int temp = num - 1;
reverseOrder(temp);
}