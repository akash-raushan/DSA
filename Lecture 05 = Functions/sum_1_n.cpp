#include <bits/stdc++.h>
using namespace std;

int sumN(int n){
    int total=0;

    for(int i=1;i<=n;i++){
        total+=i;
    }

    return total;
}


int main(){
    cout<<sumN(10)<<endl;
    cout<<sumN(15)<<endl;

    return 0;
}