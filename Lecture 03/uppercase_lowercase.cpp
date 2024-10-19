#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;
    int ch_int=(int)ch;

    if(ch_int>=64 && ch_int<=90){
        cout<<"Character is in uppercase.";
    }else if(ch_int>=97 && ch_int<=122){
        cout<<"Character is in lowercase.";
    }else{
        cout<<"Entered element is not a charcater";
    }

    return 0;
}