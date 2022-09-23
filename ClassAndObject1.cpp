#include<bits/stdc++.h>
using namespace std;
// class add{
// private :
// int a;
// public:
// int b;
// void sum(int a,int b);
// }
// ;
// void add :: sum(int a1,int b1){
//     a=a1;
//     b=b1;
//    cout<<a1+b1;


// };
class binary{
  string s;
  public:
    void read(void);
  void checkbinary(void);
};

void binary ::read(void){
    cout<<"Enter a binary no"<<endl;
    cin>>s;
};
void binary :: checkbinary(void){
    for (int i=0 ;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){

            cout<<"s is not string"<<endl;
            exit(0);
        }
    }
};
int main(){

// add h1;

// h1.sum(2,3);

binary h;

h.read();
h.checkbinary();

    return 0;
}
