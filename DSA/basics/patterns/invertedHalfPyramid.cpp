#include<iostream>
using namespace std;


int main(){

    cout<<"inverted half pyramid pattern printer."<<endl;
    int numoflevels;

    cout<<"Number of levels: ";
    cin>>numoflevels;

    int temp=numoflevels;

    for(int i=numoflevels; i>=0; i--){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}