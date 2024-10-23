#include <bits/stdc++.h>
using namespace std;

int sum(int num){
    int digitSum=0;
    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        digitSum+=lastDigit;
    }

    return digitSum;
}

int main(){   
    cout<<sum(145);
    return 0;
}