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


    int maxelement=0;
    int minelement=array[0];
    int temp=0;
    int temp2=array[0];

    for(int i=0; i<n; i++){
        maxelement=max(temp,array[i]);
        temp=maxelement;

        minelement=min(temp2,array[i]);
        temp2=minelement;
    }

    cout<<"Max element is: "<<maxelement<<endl;
    cout<<"Min element is: "<<minelement<<endl;

    return 0;
}