#include <bits/stdc++.h>
using namespace std;

void check(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not a prime number.";
            return;
        }
    }
    cout<<"Prime number.";
}

int main(){
    check(7);
    return 0;
}