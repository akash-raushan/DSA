#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int sum=0;

    for(int i=1; i<=n; i++){
        // if(i%2==0){
        //     continue;
        // }
        // sum+=i;

        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum;


    // int i=1;
    // while(i<=n){
    //     if(i%2==0){
    //         continue;
    //     }
    //     sum+=i;
    // }
    // cout<<sum;

    return 0;
}