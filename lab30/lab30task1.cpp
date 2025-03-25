#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void input(int *a,int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void random(int *a,int n,int max,int min){
    srand(time(NULL));
    for(int i=0;i<n;i++)
        a[i]=rand()%(max-min+1)+min;
}
void printrow(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void printcol(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}


int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int *a = new int[n];
    cout<<"1.Manual input 2.Random: ";
    int choice;
    cin>>choice;
    if(choice==1)
        input(a,n);
    else{
    int max,min;
    cout<<endl<<"Enter max and min: ";
    cin>>max>>min;
    random(a,n,max,min);
    }
    cout<<"1.Display in row"<<endl<<"2.Display in column: ";
    cin>>choice;
    if(choice==1)
        printrow(a,n);
    else
        printcol(a,n);
    
    int max=a[0], ind;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
                ind=i;
            }
        }
        for(int i=ind;i>=0;i--){
           if(a[i]==max){
                n = n-1;
                    for(int j=i;j<n;j++)
                    a[j]=a[j+1];
                }
            }
        
    cout<<endl;
    printrow(a,n);
    return 0;
}