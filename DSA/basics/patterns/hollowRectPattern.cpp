#include<iostream>
using namespace std;

int main(){

    cout<<"Hollow rectangle star pattern printer."<<endl;
    int numofiterations;
    int printsperiteration;

    cout<<"Number of rows: ";
    cin>>numofiterations;
    cout<<"Number of columns: ";
    cin>>printsperiteration;

    for(int i=1; i<=numofiterations;i++ ){
        for(int j=1; j<=printsperiteration; j++){
            if(i==1 || j==1 || i==numofiterations || j==printsperiteration){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}