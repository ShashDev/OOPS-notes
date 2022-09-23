#include<bits/stdc++.h>
using namespace std;
class Add{
   private:
   int a ,b,c;
   public:
   int d,e;
   void setdata(int a,int b,int c);
    void getdata(){

        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    };
};

void Add :: setdata(int a1 ,int b1, int c1){
        a=a1;
        b=b1;
       c=c1;
}
int main(){
    
 Add h1;
 h1.setdata(1,2,3);
 h1.d=4;
 h1.e=9;
 h1.getdata();

 h1.a=5;


    return 0;
}
