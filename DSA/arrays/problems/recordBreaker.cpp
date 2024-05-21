// number of visitors on N consecutive day are given
// a day i sa record breaking day if the following conditions are satisfied:
// 1. no. of visitors on the day is larger than all previous days 
// 2. either its the last day ot visitors on the day is bigger than the following day.
// find no. of record breaking days

#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"array element "<<i+1<<": ";
        cin>>array[i];
    }

    int recBreakDay=0;
    int maxCustomers=INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>maxCustomers){
            maxCustomers=array[i];
            if(array[i]>array[i+1]){
                recBreakDay++;
            }
        }
    }

    cout<<"No. of record breaking days: "<<recBreakDay;

    return 0;
}