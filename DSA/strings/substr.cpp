#include<iostream>
#include<string>
// #include <algorithm> 
using namespace std;

int main(){
    string strr;
    cout<<"Enter string: ";
    getline(cin,strr);
    string strrr = strr.substr(0,5);
    cout<<"first 5 char: "<<strrr<<endl;
    return 0;
}