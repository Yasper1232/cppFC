#include <iostream>
#include <iomanip>
using namespace std;

void introduceMe(string name,string city="default",int age=0) {

cout<<"My name is "<<name<<endl;
cout<<"I am from "<<city<<endl;
    if(age!=0)
    cout<<"I am "<<age<<" years old "<<endl;
}

int main()
{

    string name,city23;
    int age11;
    cout<<"Name: ";
    cin>>name;
    cout<<"City: ";
    cin>>city23;
    cout<<"Age: ";
    cin>>age11;
    introduceMe(name,city23,age11);


  //  introduceMe("Kacper","Lask",19);
    //introduceMe("Anna","New york");

    system("pause>0");
}


