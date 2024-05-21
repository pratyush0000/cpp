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

    int sum = 0;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum+=array[j];
            cout<<sum<<" ";
        }
    }
    
    return 0;
}