#include<iostream>
#include<string>
using namespace std;

int main(){
    string strr;
    cout<<"Enter string: ";
    getline(cin, strr);

    char strrr = 'e';
    strr.push_back(strrr);
    cout<<"Your thing + e: "<<strr<<endl;
    return 0;
}