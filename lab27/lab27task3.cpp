 #include <iostream>
using namespace std;

void arrb(float *a,int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(int(a[i])%2==0)
            m++;
    }
    float *b = new float [m];
    int ind=0;
    for(int i=0;i<n;i++){
        if(int(a[i])%2==0){
            b[ind]=a[i];
            ind++;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(b[i]>b[j])
            swap(b[i],b[j]);
        }
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }

    delete [] b;
}
int main(){
    int n,m;
    cout<<"Enter n for first array:";
    cin>>n;

    float *a = new float[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    arrb(a,n);
    delete[] a;


    return 0;
}
