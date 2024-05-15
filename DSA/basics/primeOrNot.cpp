#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number to check if it is prime or not: ";
    cin>>n;
    
    bool isPrime=true;
    int i;
    for(i=2 ; i*i<=n ; i++){
        if(n%i==0){
            cout<< n <<" is not prime.";
            isPrime=false;
            break;
        }
    }

    if(isPrime){
        cout<<n<<" is prime.";
    }

    return 0;
}