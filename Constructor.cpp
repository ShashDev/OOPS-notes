#include<bits/stdc++.h>
using namespace std;
//constructor is a special member fuction with same name as the class 
//it is used to initialize the object of its class;
//its  automatically involked when we create a object
//it should be written in the public section of the class
//do not have written types
class Complex{
 int a,b;
 public:
  Complex(void);//constructor 
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
  
};
Complex :: Complex(void){
    a=10;
    b=0;
}
int main(){
Complex c;
c.printNumber();



    return 0;
}
