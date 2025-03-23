#include <iostream>
using namespace std;

bool descend(int **a,int n,int j){
    for(int i=1;i<n;i++){
        if(a[i][j]>a[i-1][j])
        return false;
    }
return true;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    int **a = new int*[n];
    for(int i=0;i<n;i++)
        a[i]=new int[n];
    
    cout<<"Enter martix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }

    int num=0;
    for(int j=0;j<n;j++){
        if(descend(a,n,j)==true)
            num++;
    }
    
    cout<<"Number of columns in descending order: "<<num;
    
    for(int i=0;i<n;i++)
        delete a[i];
    delete [] a;
    return 0;
}