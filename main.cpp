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

    for(int i=length;i>=1;i--) {

            for(int j=i;j>=1;j--) {

                    cout<<setw(2)<<symbol;

            }cout<<endl;

    }


    system("pause>0");
}
