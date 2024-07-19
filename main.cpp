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

};


int main()
{


    YoutubeChannel yt_channel;
    yt_channel.Name="Niciakos";
    yt_channel.OwnerName="Kacper";
    yt_channel.SubscribersCount=1800;
    yt_channel.PublishedVideoTitles= {"C++ for beginners Video 1","HTML&&CSS Video 1", "C++ OOP Video 1"};

cout<<"Name: "<<yt_channel.Name<<endl;
    cout<<"Owner Name: "<<yt_channel.OwnerName<<endl;
    cout<<"Subscribers: "<<yt_channel.SubscribersCount<<endl;
    cout<<"Videos: "<<endl;
for(string videoTitle: yt_channel.PublishedVideoTitles) {

cout<<videoTitle<<endl;

}



    system("pause>0");
}
