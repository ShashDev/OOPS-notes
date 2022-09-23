#include<bits/stdc++.h>
using namespace std;
// void square(int a){
//     //call by value
//     cout<<a*a<<endl;
//     a=a*a;
//     }
void square(int &a){
    //call by reference
    cout<<a*a<<endl;
    a=a*a;
    }
int main(){
    int a;
    cin>>a;
    square(a);
  cout<<a<<endl;


    return 0;
}
