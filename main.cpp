#include<iostream>
#include<list>
#include <iomanip>
using namespace std;


class YoutubeChannel {
private:
string Name;

    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
public:
    YoutubeChannel(string name,string ownerName) {

        Name=name;
        OwnerName=ownerName;
        SubscribersCount=0;
        ContentQuality =0;
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

            void CheckAnalitics() {

        if(ContentQuality<5)
            cout<<Name<<" Has bad quality content."<<endl;
        else
            cout<<Name<<" has great content"<<endl;
    }

};

class CookingYoutubeChannel:public YoutubeChannel{
public:
    CookingYoutubeChannel(string name,string ownerName):YoutubeChannel(name,ownerName) {

    }

    void Practice() {
        cout<<OwnerName<<" is practicing cooking, learing new recipes, experimenting with spices ..."<<endl;
        ContentQuality++;
    }
};

class SingersYoutubeChannel:public YoutubeChannel{
public:
    SingersYoutubeChannel(string name,string ownerName):YoutubeChannel(name,ownerName) {

    }

    void Practice() {
        cout<<OwnerName<<" is taking singing classes , learning new songsm learning how to dance ... "<<endl;
        ContentQuality++;

    }
};

int main() {

    CookingYoutubeChannel cookingytChannel("Amy's Kitchen","Amy");
    SingersYoutubeChannel singersYtChannel("JohnSings","John");

    cookingytChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YoutubeChannel * yt1=&cookingytChannel;
    YoutubeChannel * yt2=&singersYtChannel;

    yt1->CheckAnalitics();
    yt2->CheckAnalitics();

    system("pause>0");
}