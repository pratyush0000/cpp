#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter number get it's reverse: ";
    cin>>num;


    do{
        int temp=num%10;
        num=num/10;
        cout<<temp;
    }
    while(num>0);

    return 0;
}