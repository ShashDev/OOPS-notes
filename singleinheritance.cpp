#include<bits/stdc++.h>
using namespace std;
class Parent{

public:
int a;
void getdata(){
    cout<<"enter the no"<<endl;
    cin>>a;
}

};
class Child : public Parent{
    public:
int b;
void getdata2(){
    cout<<"enter the no"<<endl;
    cin>>b;
}
void sum(){

    cout<<a+b<<endl;
}



};
int main(){
 Child c1;
 c1.getdata();
 c1.getdata2();
 c1.sum();


    return 0;
}
