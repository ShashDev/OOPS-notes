#include<bits/stdc++.h>
using namespace std;
inline int product(int a ,int b){
    return a*b;
}
int main(){

int a,b;
cin>>a>>b;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
//each time the function will copy the value of a and b multiple times;
//so to discard this steps we use inline function
//it is not used for bigger  functions because it will takes more memory in the cache
    return 0;
}
