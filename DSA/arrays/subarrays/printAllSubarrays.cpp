#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arrayray[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>arrayray[i];
    }

    cout<<endl<<"PRINTING ALL SUBARRAYS"<<endl;
    for(int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arrayray[k]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}