#include<bits/stdc++.h>
using namespace std;
//structure is a user define datatype ;

    union car
    {    //memory is shared bwt all the entity;
        //union optimised the memory as compared with structure  
        int price;
        char colour;
        float average;
        

    };
    
int main(){
    
    union car c1;
    c1.colour='u';//garbage value
    c1.price=43;
    cout<<c1.price<<endl;
    cout<<c1.colour<<endl;


    return 0;
}
