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


    for(int i=1;i<=100000;i++) {

        if(isPrimeNumber(i)) {

            cout<<i<<" is prime number\n";

        }

    }

    system("pause>0");
}


