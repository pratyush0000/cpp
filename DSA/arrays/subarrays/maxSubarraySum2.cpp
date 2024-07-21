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

    int cumulativearr[n+1];
    cumulativearr[0]=0;

    for(int i=1; i<=n; i++){
        cumulativearr[i]=cumulativearr[i-1]+ arr[i-1];
    }


    int maxsum=INT_MIN;

    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=0; j<i; j++){
            sum=cumulativearr[i]-cumulativearr[j];
            maxsum=max(maxsum,sum);
        }
    }
    
    cout<<"Max sum from subarrays is: "<<maxsum;

    return 0;
}