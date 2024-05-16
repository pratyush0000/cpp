#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter number get it's reverse: ";
    cin>>num;

    int numstore=num;
    int sum=0;

    do{
        int temp=numstore%10;
        numstore=numstore/10;

        sum+=pow(temp,3);
    }
    while(numstore>0);

    cout<<endl<<endl<<endl;
    cout<<"Your number is: "<<num<<endl;
    cout<<"Sum of the cubes of the digits is: "<<sum<<endl<<endl;

    if(num==sum){
        cout<<"Hence, it is an armstrong number."<<endl<<endl;
    } else{
        cout<<"Hence, it is not an armstrong number."<<endl<<endl;
    }


    return 0;
}