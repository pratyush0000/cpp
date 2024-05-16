#include<iostream>
using namespace std;


int main(){

    cout<<"revrse half pyramid pattern printer."<<endl;
    int numoflevels;

    cout<<"Number of levels: ";
    cin>>numoflevels;

    for(int i=0; i<=numoflevels; i++){
        for(int j=0; j<=numoflevels; j++){
            if(j<=numoflevels-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}