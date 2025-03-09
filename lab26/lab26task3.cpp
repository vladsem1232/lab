#include <iostream>

using namespace std;

int main(){
    int a[30][30],n,*p[30],**dp,b[10],i,j;
    cout<<"Input n: ";
 	cin>>n;
 	dp=p;
     for(i=0;i<n;i++){
        p[i]=a[i];
   }
   for(i=0;i<n;i++){
    cout<<endl;
       for(j=0;j<n;j++){
           cin>>*(*(dp+i)+j);
      }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++)
           cout<<*(*(dp+i)+j)<<" ";
   cout<<endl;
   }

   int *pb = b;
   for(i=0;i<n;i++){
    int min=*(*(p+i)+0);
    int minid=0;

    for(j=1;j<n;j++){
        if(*(*(p+i)+j)<min){
            min=*(*(p+i)+j);
            minid=j;
        }
    }
    *(pb+i)=minid;
   }
   cout<<endl;
   for ( i = 0; i < n; i++){
    cout<<*(pb+1)<<" ";
   }
   



    return 0;
}