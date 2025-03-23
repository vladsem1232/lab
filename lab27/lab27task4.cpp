#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int suma(int *a,int n){
    int sum=0,min,max;
	max=a[0];
	min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    sum = max + min;

    return sum;
}
int main(){
    srand(time(NULL));
    int n;
    cout<<"Enter n for first array:";
    cin>>n;
	
    int *a = new int[n+100];
    for(int i=0;i<n;i++){
        a[i]=rand()%6-2;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int sum = suma(a,k);
            for(int j=n;j>i;j--)
                a[j]=a[j-1];
            a[i]=sum;
            n++;
            i++;
        }
    }
        
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    delete[] a;
    


    return 0;
}
