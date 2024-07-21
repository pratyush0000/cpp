#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter element "<<i<<": ";
        cin>>arr[i];
    }

    cout<<endl<<"MAXIMUM SUBARRAY SUM"<<endl;

    int sum=0;
    int temp=INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j;k++){
                sum+=arr[k];
            }
            temp=max(temp,sum);
            sum=0;
        }
    }
    
    cout<<"Max sum from subarrays is: "<<temp;

    return 0;
}