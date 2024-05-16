#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1+num2;
    return sum;
}

int main(){

    int number1,number2;

    cout<<"ADDITION TIME"<<endl;
    cout<<"num 1: ";
    cin>>number1;
    cout<<"num 2: ";
    cin>>number2;

    cout<<"Sum: "<<add(number1,number2)<<endl;

    return 0;
}