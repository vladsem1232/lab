#include <iostream>

using namespace std;

int *arrb(int *a,int i1,int i2){
    int n = i2-i1+1;
    int k=0;
    int *b= new int[n];
    for(int i=i1;i<i2+1;i++){
        b[k]=a[i];
        k++;
    }
    return b;
}
int main(){
    int i1,i2;
    int g=12;
    int *a= new int[g];
    cout<<"Enter 12 elements: ";
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    cout<<"Enter i1 and i2: ";
    cin>>i1>>i2;
    int *c = arrb(a,i1,i2);
    for(int i=0;i<i2-i1+1;i++){
        cout<<c[i]<<" ";
    }
    delete [] a;
    delete [] c;
    return 0;
}
