#include <iostream>
#include <iomanip>
using namespace std;

bool isPrimeNumber(int number) {
    for(int i=2;i<number;i++) {

        if(number%i==0) {
            return false;
        }

    }
    return true;
}

int main()
{

    int number;
    cout<<"Number: ";
    cin>>number;

//bool isPrimeFlag=isPrimeNumber(number);

        if(isPrimeNumber(number)) {

            cout<<"Prime number"<<endl;
        }else {

            cout<<"Not prime number"<<endl;


        }

    system("pause>0");
}


