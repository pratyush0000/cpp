#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"sum of first n natural numbers"<<endl;
    cout<<"n: ";
    cin>>n;

    int sum = 0;
    for(int i=0 ; i<=n ; i++){
        sum+=i;
    }

    cout<<"sum = "<<sum;

    return 0;
}