#include<iostream>
using namespace std;

int main(){

    int moneyInHand;
    cout<<"How much money do you have?"<<endl;
    cout<<"(num between 0 and 5000 only)"<<endl;
    cin>>moneyInHand;

    if(moneyInHand>5000){
        cout<<"invalid, run program again.";
    }
    else if(moneyInHand<=5000 && moneyInHand>3000){
        cout<<"Time to go on a vacation :)";
    }
    else if(moneyInHand<=3000 && moneyInHand>2000){
        cout<<"You can take someone on a date wheee";
    }
    else if(moneyInHand<=2000 && moneyInHand>1000){
        cout<<"You can go to a restaurant with your friends?";
    }
    else if(moneyInHand<=1000 && moneyInHand>=0){
        cout<<"I reccomend you stay home :(";
    }
    else{
        cout<<"invalid, run program again.";
    }

    return 0;
}