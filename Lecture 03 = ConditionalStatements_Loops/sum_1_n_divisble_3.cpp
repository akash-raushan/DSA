#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<sum;

    return 0;
}