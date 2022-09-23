#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
}
int fib(int n){
    if(n<2){
        return 1;
    }
     
    else{
        
    return fib(n-2)+fib(n-1);
    }
}
int main(){

// cout<<factorial(5);

cout<<fib(10)<<endl;
    return 0;
}
