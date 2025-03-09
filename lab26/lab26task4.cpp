#include <iostream>

using namespace std;

int main(){
    int a[30][30],n,*p[30],**dp,i,j,pos=0,neg=0,o=0;
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

float poss = 0;
float negs = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(*(*(p+i)+j)>0){
            pos++;
            poss += *(*(p+i)+j);
            }
            else if(*(*(p+i)+j)<0){
            neg++;
            negs += *(*(p+i)+j);
            }
            else if(*(*(p+i)+j)==0){
            o++;
            }
        }
    }
    
float posav = poss/pos;
float negav = negs/neg;

cout<<"Average of positives: "<<posav<<endl;
cout<<"Average of negatives: "<<negav<<endl;
cout<<"Number of 0: "<<o<<endl;

    
   
    return 0;
}