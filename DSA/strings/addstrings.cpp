#include<iostream>
#include<string>
// #include <algorithm> 
using namespace std;

int main(){
    string strr;
    cout<<"Enter string1: ";
    getline(cin,strr);

    string strrr;
    cout<<"Enter string2: ";
    getline(cin,strrr);


    strr+=strrr;
    cout<<"string 1 + string 2: "<<strr<<endl;
    return 0;
}