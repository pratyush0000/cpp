#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"sum of first n natural numbers"<<endl;
    cout<<"n: ";
    cin>>n;

    int sum=0;

    while(n>0){
        sum+=n;
        n--;
    }

    cout<<"sum = "<<sum;

    return 0;
}