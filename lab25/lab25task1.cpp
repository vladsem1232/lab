#include <iostream>

using namespace std;

int main(){
    float a[30],n;
    cout<<"Enter n:";
    cin>>n;

    cout<<"Enter array:";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float *p = a;
    float min = *p;

    for(int i=0;i<n;i+2){
        if(*(a+i)<min)
            min=*(a+i);
    }
    cout<<min;
    return 0;
}