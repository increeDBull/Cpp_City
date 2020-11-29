#include<iostream>
using namespace std;
int main(){

//const
// A compile time constraint that tells that the object can't be modified


    const int i {4};

    //int i1 { 8 };
    //i = 3; error i cannot be modified


    const int *p1 = &i; //Here data is const, not pointer
    //p1++; // okay

    //*p1 = 5; nahi kar sakte due to same above reason
    int i2 { 3 };

    int* const p2 = &i2; // pointer is const, not the data

    const int* const p3 = &i2; // both data and pointer are const


////////////////////////////////

//if const is on the left of *, data is const
//if const is on the right of *, pointer is const

    int const *p4 = &i2; 
    const int *p5 = &i2; //more readable
//both are consts are left of * so data is const
    

// if we want to really really change the const data


    const int i3 { 69 };

    const_cast<int&>(i3) = 5 ;
//works fime
    cout<<i3;


// for making a variable after declaration 

    int j = 8;

    static_cast<const int&>(j);
//well don't use this it's not good programming
    cout<<j;

    /*
    Why use const
        Gaurd against inadvertent write to the variable.
        Self documenting, it tells that variable will not change.
        Enables compiler to more optimization, making code tighter.
        const means the variable can be placed in ROM.


    
    
    
    
    
    
    
    */




    return 0;
}