#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter numbers. Prime numbers between num1 and num2 will be printed."<<endl;
    cout<<"num1: ";
    cin>>num1;
    cout<<"num2: ";
    cin>>num2;

    int minnum=min(num1, num2);
    int maxnum=max(num1,num2);

    int i;
    for(i=minnum; i<=maxnum; i++){

        if (i <= 1) continue;

        bool isPrime=true;

        for(int j=2 ; j*j<=i ; j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime){
            cout<<i<<" is prime number between "<< minnum << " and "<< maxnum << "." <<endl;
        }
    }

    return 0;

}