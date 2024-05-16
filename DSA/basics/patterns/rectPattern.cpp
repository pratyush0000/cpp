#include<iostream>
using namespace std;

int main(){

    int numofiterations;
    int printsperiteration;

    cout<<"Number of rows: ";
    cin>>numofiterations;
    cout<<"Number of columns: ";
    cin>>printsperiteration;
    
    for(int i=1; i<=numofiterations;i++ ){
        for(int j=1; j<=printsperiteration; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}