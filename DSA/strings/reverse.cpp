#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main(){
    string strr;
    cout<<"Enter string: ";
    getline(cin,strr);
    reverse(strr.begin(),strr.end());
    cout<<"You entered: "<<strr<<endl;
    return 0;
}