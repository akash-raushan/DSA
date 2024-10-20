#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<char(65+i)<<" ";
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}