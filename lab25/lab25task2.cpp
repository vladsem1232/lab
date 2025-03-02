#include <iostream>

using namespace std;

int main(){
    float a[30];
    int n;
    cout<<"Enter n:";
    cin>>n;

    cout<<"Enter array:";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float *p = a;
    int ind;
    for(int i=0;i<n;i++){
        if(*(a+i)>*(a+i+1)&&*(a+i+1)>*(a+i+2))
        ind = i;
    }
    cout<<"Descending numbers start from index "<<ind;
    return 0;
}