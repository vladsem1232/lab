#include <iostream>
using namespace std;

int main(){
    int a, b, c, *pmin, *pmax;
    
    cout<<"Enter a,b,c";
    cin>>a >>b >>c;

    pmin = &a;
    if(*pmin>b)
        pmin = &b;
    if(*pmin>c)
        pmin = &c;

    pmax = &a;
    if(*pmax<b)
        pmax = &b;
    if(*pmax<c)
        pmax = &c;

    cout<<"Max: "<<*pmax <<" Address of max:"<<pmax <<endl;
    cout<<"Min: "<<*pmin <<" Address of min:"<<pmin <<endl;
    return 0;
}