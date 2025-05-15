#include<iostream>
#include<string>
using namespace std;

class engine{
    private:
    int power;
    int factorynum;
    public:

    engine() {}
    engine(int pow, int fn) : power(pow), factorynum(fn) {};  
    ~engine() {}

    void input(){
        cout<<"Enter power: "<<endl;
        cin>>power;
        cout<<"Enter factory number: "<<endl;
        cin>>factorynum;
    }
    void output(){
        cout<<"Power: "<<power<<endl;
        cout<<"Factory number: "<<factorynum<<endl;
    }
};

class car : public engine{
    private:
    string model;
    int price;

    public:
    car() {}
    car(int pow, int fn,string mo,int pr)
    : engine(pow, fn), model(mo), price(pr) {}

    ~car() {}

    void output(){
        engine::output();
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
    }

    void input(){
        engine::input();
        cout<<"Enter model: "<<endl;
        cin>>model;
        cout<<"Enter price: "<<endl;
        cin>>price;

    }
};

class truck : public car{
    private:
    int capacity;

    public:
    truck() {}
    ~truck() {}
    truck(int pow, int fn,string mo,int pr,int cap)
    : car(pow,fn,mo,pr), capacity(cap) {}

    void input(){
        car::input();
        cout<<"Enter capacity: "<<endl;
        cin>>capacity;
    }
    void output(){
        car::output();
        cout<<"Capacity: "<<capacity<<endl;
    }
};
    
int main(){
    engine e[3];
    car c[3];
    truck t[3];

    for(int i=0;i<3;i++){
        cout<<endl<<"Enter engine "<<i+1<<endl;
        e[i].input();
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter car "<<i+1<<endl;
        c[i].input();
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter truck "<<i+1<<endl;
        t[i].input();
    }
    cout<<endl;
    


    for(int i=0;i<3;i++){
        cout<<"Engine "<<i+1<<endl;
        e[i].output();
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"Car "<<i+1<<endl;
        c[i].output();
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"Truck "<<i+1<<endl;
        t[i].output();
    }


    return 0;
}
