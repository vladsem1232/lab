#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class worker {
    private:
    int id;
    string name;
    public:
    virtual float calcsalary() const = 0;
    worker(int I, string N) {
        id = I;
        name = N;
    }
    int getid(){
        return id;
    }
    string getname(){
        return name;
    }
    bool operator==(const worker& y){
        return id == y.id;
    }

};

class manager : public worker{
    int pidcount;
    float salary = 10000.0;

    public:
    manager(int id, string name, int pidc)
        : worker(id,name), pidcount(pidc) {}
  

    float calcsalary() const override {
        double bonus;
        if (pidcount > 5) {
            bonus = salary * 0.1;
        } 
        else {
            bonus = 0.0;
        }   
    return salary + bonus;
    }
    
};

class developer : public worker{
    int hour;
    float salary = 100.0;

    public:
    developer(int id, string name, int hours)
        : worker(id,name), hour(hours) {}
  

    float calcsalary() const override {
        return hour*salary;
    }
};



int main(){
    vector<worker*> wrok;

    wrok.push_back(new developer(1,"Vlad",160));
    wrok.push_back(new manager(2,"Oleh",5));

    for(int i=0;i<wrok.size();i++){
        cout<<"Id: "<<wrok[i]->getid()<<endl;
        cout<<"Name: "<<wrok[i]->getname()<<endl;
        cout<<"Salary: "<<wrok[i]->calcsalary()<<endl;
    }

    cout<<"Compare: "<<(wrok[0]==wrok[1]);

    return 0;
}