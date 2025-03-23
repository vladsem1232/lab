#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    int **a = new int*[n];
    for(int i=0;i<n;i++)
        a[i] = new int[n];

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    float av = sum/(n*n);
    int *num = new int[n];
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(a[i][j]<av)
                k++;
        }
        num[i]=k;
    }

    ofstream file("text.txt");
    for(int i=0;i<n;i++){
        file<<"Row "<<i+1<<" "<<num[i]<<endl;
    }
    file.close();

    for(int i=0;i<n;i++){
        delete[] a[i];
    }
    delete[] a;
    delete[] num;
    return 0;
}