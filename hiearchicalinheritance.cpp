// one parent 2 child
#include<bits/stdc++.h>
using namespace std;
class Parent{

public:
int a=10;



};
class Child : public Parent{
    public:
int b;
void getdata1(){
    cout<<"enter the no"<<endl;
    cin>>b;
}
void sum(){

    cout<<a+b<<endl;
}




};


class Child2 : public Parent{
    public:
int c;
void getdata2(){
    cout<<"enter the no"<<endl;
    cin>>c;
}
void sum2(){

    cout<<a+c<<endl;
}};
int main(){
 Child c1;
 c1.getdata1();
 
 c1.sum();
 Child2 c2;
 c2.getdata2();
 c2.sum2();



    return 0;
}
