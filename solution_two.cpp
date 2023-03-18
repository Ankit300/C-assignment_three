// Q2 - Write a program to print absolute value of a number entered by the user.

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x<0){
        x=x*(-1);
    }

    cout<<"Absolute value of number is: "<<x;
    return 0;
}