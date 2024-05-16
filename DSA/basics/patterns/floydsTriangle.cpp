#include<iostream>
using namespace std;


int main(){

    cout<<"floyd's pyramid pattern printer."<<endl;
    int numoflevels;

    cout<<"Number of levels: ";
    cin>>numoflevels;
    int numtoprint=1;

    for(int i=1; i<=numoflevels; i++){
        for(int j=0; j<i; j++){
            cout<<numtoprint;
            numtoprint++;
            cout<<" ";
        }
        cout<<"\n";
    }
}