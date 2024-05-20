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


    for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }

    cout<<"Sorted elements using insertion sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}