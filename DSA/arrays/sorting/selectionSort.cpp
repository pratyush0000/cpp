#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Length of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }


    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    cout<<"Sorted elements using selection sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}