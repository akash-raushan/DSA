#include <bits/stdc++.h>
using namespace std;

int factN(int n){
    int factorial=1;

    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    cout<<factN(5)<<endl;
    cout<<factN(10)<<endl;
    
    return 0;
}