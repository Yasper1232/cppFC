#include<iostream>
#include<list>
#include <iomanip>
using namespace std;


class YoutubeChannel {
public:

string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string name,string ownerName) {

        Name=name;
        OwnerName=ownerName;
        SubscribersCount=0;

    }

    void GetInfo() {

        cout<<"Name: "<<Name<<endl;
        cout<<"Owner Name: "<<OwnerName<<endl;
        cout<<"Subscribers: "<<SubscribersCount<<endl;
        cout<<"Videos: "<<endl;
        for(string videoTitle:PublishedVideoTitles) {

            cout<<videoTitle<<endl;

        }

    }
};


int main() {
   YoutubeChannel yt_channel1("Niciakos","Kacper");
    yt_channel1.PublishedVideoTitles.push_back("C++ for begginers");
    yt_channel1.PublishedVideoTitles.push_back("HTML & CSS for begginers");
    yt_channel1.PublishedVideoTitles.push_back("C++ OOP");

    YoutubeChannel yt_channel2("AmySings","Amy");
yt_channel1.GetInfo();
    yt_channel2.GetInfo();


    system("pause>0");
}