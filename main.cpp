#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int length;
    cout<<"Length :";
    cin>>length;
    char symbol;
    cout<<"Symbol: ";
cin>>symbol;
    cout<<endl;

    for(int i=1;i<=length;i++) {

            for(int j=1;j<=i;j++) {

                    cout<<setw(2)<<symbol;

            }cout<<endl;

    }


    system("pause>0");
}
