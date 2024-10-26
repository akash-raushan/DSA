#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans=0,pow=1;

    while(n>0){
        int rem=n%10;
        ans+=rem*pow;
        n=n/10;
        pow*=2;
    }
    return ans;
}

int main(){
    cout<<binaryToDecimal(10000);
    return 0;
}   