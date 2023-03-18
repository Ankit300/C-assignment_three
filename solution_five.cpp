// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.

#include<iostream>
using namespace std;
int main(){
    char op;
    float num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"Enter a operator(+, -, *, /): ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    
    default:
        cout<<"Error!, you have entered invaild operator.";
        break;
    }
    return 0;
}