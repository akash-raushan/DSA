#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    double factorial=1;

    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial;

    return 0;
}