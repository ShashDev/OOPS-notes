#include<bits/stdc++.h>
using namespace std;

// A--->B--->C = multiple inheritance 
class Parent{

public:
int  a;
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



}};

class Child2: public Child{
    public:
    int c;
    void getdata3(){
    cout<<"enter the no"<<endl;
    cin>>c;}
    void sum (){

        cout<<a+b+c<<endl;
    }
};
int main(){
 Child2 c1;
 c1.getdata();
 c1.getdata2();
 c1.getdata3();
 c1.sum();

    return 0;
}
