#include<iostream>
#include<string>
using namespace std;

class people{
    private:
    string surname;
    string country= "Ukraine";
    string gender;
    string education;
    int year = 2006;
    int age;

    public:
    void input(){
        cout<<"Surname: ";
        cin>>surname;
        cout<<"Country: ";
        cin>>country;
        cout<<"Gender: ";
        cin>>gender;
        cout<<"Education: ";
        cin>>education;
        cout<<"Year: ";
        cin>>year;
        cout<<"Age: ";
        cin>>age;
    }
    void output(){
        cout<<"Surname: "<<surname<<endl;
        cout<<"Country: "<<country<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Education: "<<education<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Age: "<<age<<endl;
    }
    bool educage(int aage){
        return (education =="high"&& age>aage);
    }

    string genderr(){
        return gender;
    }
    
};

int removegender(people human[],int n,string genderrem){
        int newsize=0;
        for(int i=0;i<n;i++){
            if(human[i].genderr()!=genderrem){
                human[newsize]=human[i];
                newsize++;
            }
        }
    return newsize;
}

void printeducage(people human[],int n,int aage){
    for(int i=0;i<n;i++){
        if(human[i].educage(aage))
            human[i].output();
    }
}
int main(){
    people human[100];
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter person "<<i+1<<endl;
        human[i].input();
    }
    for(int i=0;i<n;i++){
        cout<<"Person "<<i+1<<endl;
        human[i].output();
        cout<<endl;
    }
    int aage;
    cout<<"Enter age: ";
    cin>>aage;

    printeducage(human,n,aage);
    cout<<endl;
    string genderrem;
    cout<<"Enter gender to remove: ";
    cin>>genderrem;
    n=removegender(human,n,genderrem);
    for(int i=0;i<n;i++){
        human[i].output();
    }
    return 0;
}