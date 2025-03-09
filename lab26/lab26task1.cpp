#include <iostream>

using namespace std;
int main(){
 	int i,j,n,a[30][30],*p[30],**dp;
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
	int max = a[0][0];
	int min = a[0][n-1];
	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			if(i==j&&*(*(dp+i)+j)>max){
 				max = *(*(dp+i)+j);
			}
			else if(i+j+1==n&&*(*(dp+i)+j)<min){
				min = *(*(dp+i)+j);
			}
		}
	}
	
	cout<<endl<<"Max - "<<max<<" Min - "<<min<<" Difference:"<<max-min;
}
