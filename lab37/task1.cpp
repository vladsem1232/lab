#include<iostream>
#include<string>
using namespace std;

class pupil{
    protected:
    string fullname,gender;
    int year;
    public:
pupil() {}
pupil(string fn, string gen, int yea){
    fullname = fn;
    gender = gen;
    year = yea;
}
void input(){
    cout<<"Enter full name: "<<endl;
    getline(cin, fullname);
    cout<<"Enter gender: "<<endl;
    getline(cin, gender);
    cout<<"Enter birthyear: "<<endl;
    cin>>year;
    cin.ignore();
}
void output(){
    cout<<"Full name: "<<fullname<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Birth year: "<<year<<endl;
    cout<<"Age: "<<age()<<endl;

}

void setname(string name){
    fullname = name;
}
void setbirthyear(int birthyear){
    year = birthyear;
}
void setgender(string g){
    gender = g;
}

int age(){
    return 2025 - year;
}

};

class worker : public pupil{
    private:
    int salary;
    public:
    string workplace;
worker(string fn, string gen, int yea, int s, string wp)
    : pupil(fn,gen,yea), salary(s), workplace(wp){}
worker() {}
void output(){
    pupil::output();
    cout<<"Salary: "<<salary<<endl;
    cout<<"Workplace: "<<workplace<<endl;
}
void input(){
    pupil::input();
    cout<<"Enter salary: "<<endl;
    cin>>salary;
    cout<<"Enter workplace: "<<endl;
    cin>>workplace;
}

};
int main(){
    cout<<"Class worker:"<<endl;
    pupil a;
    a.input();
    cout<<endl;
    a.output();
    cout<<endl<<"Class worker:"<<endl;
    worker b;
    b.input();
    cout<<endl;
    b.output();
    return 0;
}
