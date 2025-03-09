#include <iostream>

using namespace std;
int main(){
 	int i,j,n,a[10][10],*p[10],**dp;
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
	cout<<endl;
	
	for(i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++)
				cout<<*(*(dp+i)+j)<<" ";
				cout<<endl;
			}
		
		
		if(i%2!=0){
			for(int j=n-1;j>=0;j--)
				cout<<*(*(dp+i)+j)<<" ";
				cout<<endl;
			}
		}
		
		
	return 0;
}
	
	

