#include <iostream>

using namespace std;

int main()
{

                //reverse a number

    int number, reversedNumber=0;//0
    cout<<"Number: ";
    cin>>number;//123

while(number!=0) {

reversedNumber*=10;
//int lastDigit=number%10;
    reversedNumber+=number%10;
    number/=10;
}
cout<<"Reversed: "<<reversedNumber;

    system("pause>0");
}
