#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"array element "<<i+1<<": ";
        cin>>array[i];
    }

    int maxi =INT_MIN;
    for(int i=0; i<n+1; i++){
        maxi = max(maxi,array[i]);
    }

    cout<<maxi;
    
    return 0;
}