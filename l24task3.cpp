#include <iostream>
using namespace std;

int main(){
    float a[4],s=0,av;
    float *p;

    for(int i = 0;i<4;i++){
        cin>>a[i];
    }

    for(int i = 0;i<4;i++){
        p=&a[i];
        for(int j = i+1;j<4;j++){
            if(*p==a[j])
                cout<<endl<<"Number "<<a[j]<<" is not unique";
        }
    }

    for(int i = 0;i<4;i++){
        s +=a[i];
    }
    av = s/4;
    cout<<endl<<"Average: "<<av;
    cout<<endl;
    float *minp=&a[0];
    float *maxp=&a[0];
    for(int i = 0;i<4;i++){
        if(a[i]<*minp)
            minp = &a[i];
    }
    for(int i = 0;i<4;i++){
        if(a[i]>*maxp)
            maxp = &a[i];
    }
    cout<<"Numbers that are not min or max: ";
    for(int i = 0;i<4;i++){
        if(a[i] != *maxp && a[i] != *minp)
            cout<<a[i]<<" ";
    }
    return 0;
}