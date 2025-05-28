#include<iostream>
#include<string>
using namespace std;

class notification{
    protected:
    string message;
    string text;

    public:
    notification(string msg, string txt) : message(msg), text(txt) {}
    virtual void show() const = 0;  
};

class importantnotif : public notification {
    string importance;
    void(*extraaction)();
    public:
    importantnotif(string msg, string txt, string imp)
     : notification(msg, txt), importance(imp) {}

    void setextraaction(void(*action)()) {
        extraaction = action;
    }


    void show() const override {
        cout<<"Important Notification: "<<message<<endl;
        cout<<"Message: "<<message<<endl;
        cout<<"Text: "<<text<<endl;
        if(importance == "high" && extraaction) {
            extraaction();
        }
    }
};

int main(){
    importantnotif noti("Attention","This is an important notification","high");

    noti.setextraaction([]() {
        cout<<"Confirmation needed."<<endl;
    });
    noti.show();
    return 0;
}