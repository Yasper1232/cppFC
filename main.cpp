#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>

void Swap(T& a,T& b) {

T temp=a;
    a=b;
    b=temp;

}

//uzywajac template nie trzeba powtarzac kodu wiele razy , template dziala na kazdy typ danych



int main()
{

            int a=5,b=7;

    cout<<a<<" - "<<b<<endl;
    Swap<int>(a,b);
    cout<<a<<" - "<<b<<endl;

char c='c',d='d';
    cout<<c<<" - "<<d<<endl;
Swap<char>(c,d);
    cout<<c<<" - "<<d<<endl;

    system("pause>0");
}
