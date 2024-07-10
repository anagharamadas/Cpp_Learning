#include<iostream>
#include "Rope.h"

using namespace std;

int Rope::ropeCutting(int &n, int &a, int &b, int &c)
{

if(n == 0){
    return 0;
}
if(n < 0)
    return -1;

int temp1 = n-a;
int temp2 = n-b;
int temp3 = n-c;
int result = max(ropeCutting(temp1, a, b, c), max(ropeCutting(temp2, a, b, c), ropeCutting(temp3, a, b, c)));

if(result == -1)
    return -1;
else
    result++;
    return result;
    
}