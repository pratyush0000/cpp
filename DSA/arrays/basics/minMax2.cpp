#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"array element "<<i+1<<": ";
        cin>>array[i];
    }


    int maxelement=INT_MIN;
    int minelement=INT_MAX;

    for(int i=0; i<n; i++){
        maxelement=max(maxelement,array[i]);
        minelement=min(minelement,array[i]);
    }

    cout<<"Max element is: "<<maxelement<<endl;
    cout<<"Min element is: "<<minelement<<endl;

    return 0;
}