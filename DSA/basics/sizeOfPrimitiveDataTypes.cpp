#include<iostream>
using namespace std;

int main(){

    int a; //declare but not initialize
    a=12; //initialize
    cout<<"Size of int: "<<sizeof(a)<<endl;

    float b=3.14;
    cout<<"Size of float: "<<sizeof(b)<<endl;

    double c=3.143;
    cout<<"Size of double: "<<sizeof(c)<<endl;

    char d='a';
    cout<<"Size of char: "<<sizeof(d)<<endl;

    bool e=true;
    cout<<"Size of boolean: "<<sizeof(e)<<endl;

    //type modifiers
    short int si;
    cout<<"Size of short: "<<sizeof(si)<<endl;
    long int li;
    cout<<"Size of long: "<<sizeof(li)<<endl;

    return 0;
}