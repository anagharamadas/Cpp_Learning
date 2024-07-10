#include<iostream>
#include<memory>
#include "Rope.h"

using namespace std;

int main()
{
    int n = 23, a = 11, b = 12, c = 9;
    Rope r;
    int result = r.ropeCutting(n, a, b, c);
    cout<< result;
    return 0;
}