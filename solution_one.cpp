// Q1 - Write a program which takes the values of length and breadth from user and check if it is
// a square or not.

#include<iostream>
using namespace std;
int main(){
    int len,wide;
    cout<<"Enter the length: ";
    cin>>len;
    cout<<"Enter the breadth: ";
    cin>>wide;

    if (len==wide){
        cout<<"It is a square.";
    }
    else{
        cout<<"It is a rectangle.";
    }

}