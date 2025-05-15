#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
class worker{
    string surname;
    protected:
    int age;
    int exper;
    public:
worker(){}
worker(string sur,int ag,int ex){
    surname = sur;
    age = ag;
    exper = ex;
}

void change(){
    cout<<"Enter surname: "<<endl;
    cin>>surname;
    cout<<"Enter age : "<<endl;
    cin>>age;
    cout<<"Enter experience : "<<endl;
    cin>>exper;
}

void output(){
    cout<<"Surname: "<<surname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Experience: "<<exper<<endl;
    cout<<"Drive year: "<<driveyear()<<endl;
}
int driveyear(){
    return 2025-exper;
}
};

class car{
    int regnum;
    
    string model;
    protected:
    int yearmade;
    int mileage;
    public:
    car(){}
    car(int reg,int mil,string mod,int yea){
        regnum = reg;
        mileage = mil;
        model = mod;
        yearmade = yea;
    }
void change(){
    cout<<"Enter registry number: "<<endl;
    cin>>regnum;
    cout<<"Enter mileage: "<<endl;
    cin>>mileage;
    cout<<"Enter model: "<<endl;
    cin>>model;
    cout<<"Enter year made: "<<endl;
    cin>>yearmade; 
}
void output(){
    cout<<"Registry number: "<<regnum<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year made: "<<yearmade<<endl;
    cout<<"Mileage: "<<mileage<<endl;
    cout<<"Average: "<<averagemilage()<<endl;
}
double averagemilage(){
    if (2025 <= yearmade) return 0;
        return double(mileage) / (2025 - yearmade);
}
};

class driver : public worker, public car{
 int startyear;
 bool fine;

    public:
    driver() {}
    driver(string sur,int ag,int ex,int reg,int mil,string mod,int yea,int start,bool fin)
    : worker(sur,ag,ex),
      car(reg,mil,mod,yea),
      startyear(start), fine(fin) {}

    void input(){
        worker::change();
        car::change();
        cout<<"Enter year driver started: ";
        cin>>startyear;
        int y;
        cout<<"Fines 1-yes, 0-no: ";
        cin>>y;
        if(y==1)
            fine=true;
        if(y==0)
            fine=false;
        else
            cout<<"Invalid input";
        if(age<18) throw invalid_argument("invalid age");
        if(exper<0) throw invalid_argument("Invalid experience");
        if(mileage<0) throw invalid_argument("Invalid mileage");    
    }
    void output(){
        worker::output();
        car::output();
        cout<<startyear<<endl;
        cout<<"Fines: ";
        if(fine)
            cout<<"yes"<<endl;
        if(!fine)
            cout<<"no"<<endl;

    }
    void compareexpage(){
        int carage = 2025 - yearmade;
        int driveexp = exper;
        cout<<"Car age: "<<carage<<endl;
        cout<<"Driver experience: "<<driveexp<<endl;

        if(carage>driveexp)
            cout<<"Car is older than drivers experience."<<endl;
        else if(carage<driveexp)
            cout<<"Drivers experience is bigger than cars age."<<endl;
        else
            cout<<"Cars age and drivers experience are the same"<<endl;
    }
 };
int main(){
    driver a;

    a.input();

    a.output();
    
    a.compareexpage();
    return 0;
}
