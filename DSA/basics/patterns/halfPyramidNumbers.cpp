#include<iostream>
using namespace std;


int main(){

    cout<<"number half pyramid pattern printer."<<endl;
    int numoflevels;

    cout<<"Number of levels: ";
    cin>>numoflevels;

    for(int i=1; i<=numoflevels; i++){
        for(int j=0; j<i; j++){
            cout<<i;
        }
        cout<<"\n";
    }
}