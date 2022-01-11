#include <iostream>
#include <array>
// 用array和long double
using namespace std;
const int ArSize = 16; 

int main(){
    array <long double, ArSize> factorials;
    factorials[0] = factorials[1] = 1LL;
    for(int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for(int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}