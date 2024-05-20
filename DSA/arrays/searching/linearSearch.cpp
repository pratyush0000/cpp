#include<iostream>
using namespace std;


int linearSearch(int array[], int n, int key){

    for(int i=0; i<n; i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"array element "<<i+1<<": ";
        cin>>array[i];
    }

    int key;
    cout<<"Enter key(the element to look for): ";
    cin>>key;    

    cout<< "The element is at position "<<linearSearch(array,n,key)+1<<" aka array["<<linearSearch(array,n,key)<<"]";

    return 0;
}