#include<iostream>
using namespace std;

int main(){


    int numOfRows;
    cout<<"palindromic pattern printer"<<endl;
    cout<<"enter number of rows: ";
    cin>>numOfRows;

    for(int i=1; i<=numOfRows; i++){
        for(int j=1; j<=numOfRows-i; j++){
            cout<<" ";
        }

        int temp=i;
        for(int j=1; j<=i; j++){
            cout<<temp;
            temp--;
        }

        int k=2;
        for(int j=2; j<=i; j++){
            cout<<k;
            k++;
        }


        cout<<endl;
    }



}