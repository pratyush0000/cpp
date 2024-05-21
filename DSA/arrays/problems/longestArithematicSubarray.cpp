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

    int ans=2;
    int prevdiff= array[1]-array[0];
    int currsublen=2;
    int k=2;

    while(k<n){

        if(prevdiff==array[k]-array[k-1]){
            currsublen++;
        }
        else{
            prevdiff=array[k]-array[k-1];
            currsublen = 2;
        }
        ans=max(ans,currsublen);
        k++;
    }
    
    cout<<"Number of elements in the longest Arithematic Subarray(same difference continously) is: "<<ans;

    return 0;
}