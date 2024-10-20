#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grade;
    cout<<"Enter your percentage: ";
    cin>>grade;

    if(grade>=90){
        cout<<"Grade A";
    }else if(grade>=80 && grade<90){
        cout<<"Grade B";
    }else if(grade>=70 && grade<80){
        cout<<"Grade C";
    }else{
        cout<<"Grade D";
    }

    return 0;
}