#include <iostream>

using namespace std;

int main(){
    float a = 10.4, c = 3.1, *p;
    p = &a;
    *p = *p*3+c;
    p = &c;
    cout<<"Address of а: "<<&a <<endl;
    cout<<"Address of с: "<<&c <<endl;
    cout<<"Address of pointer p: "<<&p <<endl;
    cout<<"Address pointed to by pointer p: "<<p <<endl;
    cout<<"Value of a: "<<a <<endl;
    cout<<"Value of c: "<<c <<endl;
    cout<<"Value pointed to by pointer p: "<<*p <<endl;
    return 0;
}