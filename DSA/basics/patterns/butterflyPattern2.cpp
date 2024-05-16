#include<iostream>
using namespace std;

int main(){


    int numOfRows;
    cout<<"butterfly pattern printer"<<endl;
    cout<<"enter number of rows: ";
    cin>>numOfRows;

    for(int i=1; i<=numOfRows; i++){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }

        int space = 2*numOfRows-2*i;
        for(int j=1; j<=space; j++){
            cout<<"   ";
        }

        for(int j=1; j<=i; j++){
            cout<<" * ";
        }

        cout<<endl;
    }

    for(int i=numOfRows-1; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<" * ";
        }

        int space = 2*numOfRows-2*i;
        for(int j=space; j>=1; j--){
            cout<<"   ";
        }

        for(int j=i; j>=1; j--){
            cout<<" * ";
        }

        cout<<endl;
    }

}