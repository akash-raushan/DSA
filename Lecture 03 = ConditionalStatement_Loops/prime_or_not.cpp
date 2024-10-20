#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    bool isPrime;

    // for(int i=2;i<=n-1;i++){
    for(int i=2;i*i<=n;i++){            // TO REDUCE RUN TIME.
        if(n%i==0){
            cout<<"Not a prime number.";
            break;
        }
        isPrime=1;
    }
    
    if(isPrime){
        cout<<"This is a prime number.";
    }

    return 0;
}