#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=4,b=8;

    cout<<(a&b)<<endl;
    cout<<(2&3)<<endl;

    cout<<(a|b)<<endl;
    cout<<(2|3)<<endl;

    cout<<(a^b)<<endl;
    cout<<(2^3)<<endl;

    cout<<(10<<2)<<endl;

    cout<<(10>>2)<<endl;


    cout<<(6&10)<<endl;
    cout<<(6|10)<<endl;
    cout<<(6^10)<<endl;

    return 0;
}



// BITWISE OPERATORSS
    // 1. Bitwise AND:  0&0=0, 0&1=0, 1&0=0, 1&1=1
    // 2. Bitwise OR:   0|0=0, 0|1=1, 1|0=1, 1|1=1
    // 3. Bitwise XOR:  0^0=0, 0^1=1, 1^0=1, 1^1=0
    // 4. Bitwise Left Shift:  4<<1 -> 100<<1 -> 1000,  4<<2 -> 100<<2 -> 100000
    // 5. Bitwise Right Shift: 4>>1 ->100>>1 -> 010, 4>>2 -> 100>>2 -> 001