#include<iostream>
using namespace std;

class Time{
    public:
    int hour, minute, second;

    void normalize() {
        minute += second / 60;
        second %= 60;
        if(second<0){
            second += 60;
            minute--;
        }
        hour += minute / 60;
        minute %= 60;
        if(minute<0){
            minute += 60;
            hour--;
        } 
        hour %= 24;
        if(hour<0)
            hour += 24;
    }

    Time(){}
    Time(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
        normalize();
    }
    ~Time() {}

    void output(){
        if(hour<10)
            cout<<"0";
        cout<<hour<<":";
        if(minute<10)
            cout<<"0";
        cout<<minute<<":";
        if(second<10)
            cout<<"0";
        cout<<second<<endl;
    }

    void input(){
        cout<<"Enter hour: "<<endl;
        cin>>hour;
        cout<<"Enter minutes: "<<endl;
        cin>>minute;
        cout<<"Enter seconds: "<<endl;
        cin>>second;
        normalize();
    }


    Time operator+(const Time& intime) const {
        return Time(hour+intime.hour,minute+intime.minute,second+intime.second);
    }
    Time operator-(const Time& intime) const {
        return Time(hour-intime.hour,minute-intime.minute,second-intime.second);
    }

    bool operator>(const Time& intime) const {
        if(hour!=intime.hour) return hour>intime.hour;
        if(minute!=intime.minute) return minute>intime.minute;
        return second>intime.second;
    }
    bool operator<(const Time& intime) const {
        if(hour!=intime.hour) return hour<intime.hour;
        if(minute!=intime.minute) return minute<intime.minute;
        return second<intime.second;
    }
    bool operator==(const Time& intime) const {
        return hour==intime.hour && minute==intime.minute && second==intime.second;
    }
};

int main(){

    Time first,secnd;
    cout<<"Enter first time: ";
    first.input();
    cout<<"Enter second time: ";
    secnd.input();
    cout<<"First time: "<<endl;
    first.output();
    cout<<"Second time: "<<endl;
    secnd.output();
    cout<<"Sum: ";
    Time sum = first+secnd;
    sum.output();
    cout<<"Difference: ";
    Time differ = first-secnd;
    differ.output();

    cout<<endl<<"first>second"<<(first>secnd);
    cout<<endl<<"first<second"<<(first<secnd);
    cout<<endl<<"first=second"<<(first==secnd);
    return 0;
}