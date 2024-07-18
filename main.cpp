#include <iostream>
#include <iomanip>
using namespace std;

int recursive_sum(int m,int n) {

if(m==n)return m;
    return m + recursive_sum(m+1,n);

}

//sum numbers between m-n


int main()
{

    int m=2,n=4;
    cout<<"Sum= "<<recursive_sum(m,n);

   /* int sum=0;
   ///  int m=2,n=4;

    for(int i=m;i<=n;i++) {

        sum +=i;
    }cout<<"Sum= "<<sum;*/


    system("pause>0");
}
