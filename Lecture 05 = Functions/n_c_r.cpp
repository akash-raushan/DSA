#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int nCR(int n,int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
    cout<<nCR(8,2);
    return 0;
}

