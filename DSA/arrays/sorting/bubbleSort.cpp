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

    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter;i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }


    cout<<"Sorted elements using bubble sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}