#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void descend(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }
}

int main(){
    srand(time(NULL));
    int n;
    cout<<"Enter n:";
    cin>>n;

    int **a = new int*[n];
    for(int i=0;i<n;i++)
        a[i]=new int[n];
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        a[i][j]=rand()%900+100;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        descend(a[i],n);
    }
    
    cout<<"Sorted matrix:" <<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    for(int i=0;i<n;i++)
        delete a[i];
    delete [] a;
    return 0;
}