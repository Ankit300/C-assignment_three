// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.

#include<iostream>
using namespace std;
int main(){
    int cp, sp, amt;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;

    if (cp>sp){
        amt = cp-sp;
        cout<<"Loss = "<<amt;
    }
    else if (sp>cp){
        amt = sp-cp;
        cout<<"Profit = "<<amt;
    }
    else{
        cout<<"Neither profit nor loss";
    }
    return 0;
}