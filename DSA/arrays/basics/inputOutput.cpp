#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<endl;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"array element "<<i+1<<": ";
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }


    return 0;
}