#include<bits/stdc++.h>
using namespace std;
class complexx{

    int a,b;
    public:
    void setno(int n1,int m1){

        a=n1;
        b=m1;
    };
    friend complexx sumcomplex(complexx o1,complexx o2);
    void printno(){
       cout<<a<<"+"<<"i"<<b<<endl; 
    }
};
//if a outer function  wants to acces the private members of the class ....this can done with the help of friend function
complexx sumcomplex(complexx o1 ,complexx o2){
    complexx o3;
    o3.setno((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
 
int main(){
 
   complexx c ,c1,c3;
   c.setno(3,4);
   
   c1.setno(6,7);

   c3=sumcomplex(c,c1);
   c3.printno();


    return 0;
}
/*properties of friend function
1.not in the scope of the class
2. it cannot be called from the object of that class
usually contains the arguments as objects
*/