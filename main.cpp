#include<iostream>
#include<list>
#include <iomanip>
using namespace std;


class YoutubeChannel {
private:
string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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

    void Subscribe() {

        SubscribersCount++;

    }
    void UnSubscribe() {

        if(SubscribersCount>0)
        SubscribersCount--;

    }

        void PublishVideo(string title) {

        PublishedVideoTitles.push_back(title);

    }



};


int main() {
   YoutubeChannel yt_channel1("Niciakos","Kacper");
    yt_channel1.PublishVideo("C++ for begginers");
    yt_channel1.PublishVideo("HTML & CSS for begginers");
    yt_channel1.PublishVideo("C++ OOP");


yt_channel1.UnSubscribe();
yt_channel1.GetInfo();


    system("pause>0");
}