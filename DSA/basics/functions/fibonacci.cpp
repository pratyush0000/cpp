#include<iostream>
using namespace std;


void fibo(int n){

    int temp1=0;
    int temp2=1;
    int sum =0;

    cout<<temp1<<" "<<temp2<<" ";

    for(int i=0; i<=n-3; i++){
        sum = temp1+temp2;
        cout<<sum<<" ";
        temp1=temp2;
        temp2=sum;
    }
}

int main(){

    int num;
    cout<<"FIBONACCI SEQUENCE PRINTER"<<endl;
    cout<<"no. of numbers: ";
    cin>>num;

    fibo(num);

    return 0;
}