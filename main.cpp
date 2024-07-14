#include <iostream>

using namespace std;

int main()
{
    //Count digit of a number
int number;
    cout<<"Number: ";
    cin>>number;

    if(number==0)
        cout<<" You have entered 0.\n";
    else {

if(number<0) {

number=-1*number;

}

//1325 -> counter=0
        //132 -> counter=1
        //13 -> counter=2 ... 1 -> counter=3 -> counter=4

        int counter=0;
        while(number>0) {

            number=number/10; //np 123 -> 12 -> 2 -> 0
                // moglibysmy rowniez napisac : number /=10
            counter++;
        }
        cout<<" Number contains: "<<counter<<" digits\n";

    }

    system("pause>0");
}
