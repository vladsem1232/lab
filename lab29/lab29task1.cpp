#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	int n=0,m=0,b=0;
	string word;
	string find;
	cin>>find;
	string *tl = new string[30];
	string *sl = new string[30];
	ifstream file("text.txt");
	while(file>>word){
		cout<<word<<" ";

		if(word.length()==3){
		tl[n]=word;
		n++;
		}
		if(islower(word[0])){
		sl[m]=word;
		m++;
		}
		for(int i=0;word[i]!='\0';i++)
			word[i]= tolower(word[i]);
		for(int i=0;find[i]!='\0';i++)
			find[i]= tolower(find[i]);
		
		if(word==find){
		b++;
		}
	}
	file.close();
	cout<<endl;
	cout<<"3 letter words: ";
	for(int i=0;i<n;i++)
		cout<<tl[i]<<" ";
	
	cout<<endl<<"Words that start with lowercase letters: ";
	for(int i=0;i<m;i++)
		cout<<sl[i]<<" ";
	
	cout<<endl<<"How many times the entered word repeated: "<<b;
	delete[] tl;
	delete[] sl;
	return 0;
}
