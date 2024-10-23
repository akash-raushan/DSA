#include <bits/stdc++.h>
using namespace std;

// Function Defination
void printHello(){
    cout<<"Hello"<<endl;
}

int sum(int a , int b){
    return (a+b);
}

int main(){
//     printHello();   //Calling a function
//     int a,b;
//     printHello();


    int x=5,y=10;
    cout<<sum(x,y)<<endl;
    
    return 0;
}



// Functions: when we have to execute same and same command many times in that case we write that command in form of a functions.
    //eg: returnType functionName(){
            // cout<<"Hello World!";
        // } 
    
    // Parameters
        // returnType functionType(type p1,type p2){
        //     return (p1+p2)
        // }