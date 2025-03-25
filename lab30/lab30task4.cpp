#include <iostream>

using namespace std;

void compare(int *a , int *b,int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *a = new int[n];
    int *b = new int[n];
    cout<<"Enter elements of the first array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter elements of the second array: ";
    for(int i=0;i<n;i++)
        cin>>b[i];

    cout<<"Indices of different elements: ";
    compare(a,b,n);
    return 0;
}
