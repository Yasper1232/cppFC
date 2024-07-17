#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {

cout<<"**********MENU**********"<<endl;
    cout<<"1.Check balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.EXIT"<<endl;
    cout<<"************************"<<endl;

}

int main()
{
int option;
double balance=500;

    //ATM app
//check balance, deposit money,withdraw money,show menu
do {
    showMenu();
    cout<<"Please choose an option: ";
    cin>>option;
system("cls");
    switch (option) {

        case 1:cout<<"Balance is: "<<balance<<" $"<<endl; break;
        case 2:cout<<"Deposit amount:";
        double depositAmount;
        cin>>depositAmount;
        balance+=depositAmount; break;
        case 3:cout<<"Withdraw amount:";
        double WithdrawAmount;
        cin>>WithdrawAmount;
        if(WithdrawAmount<=balance)
            balance-=WithdrawAmount;
        else {
            cout<<"Not enough money"<<endl;
        }
        break;
    }
}while (option!=4);


    system("pause>0");
}
