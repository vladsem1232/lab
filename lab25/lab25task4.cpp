#include <iostream>

using namespace std;

int main(){
    float a[30];
    int n,sum=0;
    cout<<"Enter n:";
    cin>>n;

    cout<<"Enter array:";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float *p=a;
   
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
        cout<<i<<" ";
        sum++;
        }
    }
    cout<<endl<<sum;
    return 0;
}