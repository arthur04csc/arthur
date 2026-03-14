#include <iostream>

using namespace std;

int main(void){
    int base = 2;
    long long res = 1;
    char r = 'y';

    while(r == 'y' || r == 'Y'){
        res *= base;

        cout << res << "\n";
        cin >> r;
    } 
     
    return 0;
}