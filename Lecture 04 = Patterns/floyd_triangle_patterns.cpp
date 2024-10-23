#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    // char ch='A';
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    return 0;
}