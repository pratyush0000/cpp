#include<iostream>
using namespace std;


int binarySearch(int array[], int n, int key){

    int strt=0;
    int end=n;

    while(strt<=end){
        int midpt=(strt+end)/2;

        if(array[midpt]==key){
            return midpt;
        }
        else if(array[midpt]<key){
            strt=midpt+1;
        }
        else{
            end=midpt-1;
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

    cout<< "The element is at position "<<binarySearch(array,n,key)+1<<" aka array["<<binarySearch(array,n,key)<<"]";

    return 0;
}