#include<bits/stdc++.h>
using namespace std;
// base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpID){
        id=inpID;
        salary=50000.0;

    }
employee(){};

};
// derived class 
// default visibility mode is private

//private visibility mode = public members of the parent  class becomes the private members of the child class
//public visibility mode= public members of the parent  class becomes the public members of the child class
// private members are never inherited
class programmer : public employee{
    public:
    programmer(int inpId){
        id=inpId;
    }
         int languagecode=9;
};

int main(){
    programmer p1(0);
    cout<<p1.languagecode<<endl;
    cout<<p1.id<<endl;
    




    return 0;
}
