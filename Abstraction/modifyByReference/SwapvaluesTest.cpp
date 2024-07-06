#include<iostream>
#include<memory>
#include "Swapvalues.h"

using namespace std;

int main(){
    Swapvalues s;
    int num = 5;
    cout << "Initial value: " << num << endl;
    s.modifyByReference(num);
    cout << "Modified value: " << num << endl;
    return 0;
}