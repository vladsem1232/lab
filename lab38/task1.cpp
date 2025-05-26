#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
int equal(vector<T> a){
    int count = 0;
    for (int i=1;i<a.size();i++) {
        if (a[i]==a[0])
            count++;
    }
    return count;
}

template <typename T>
void swap(vector<T>& a, int i1, int i2){
    swap(a[i1],a[i2]);
}

template <typename T>
void insert(vector<T>& a, T el, int ind){
    a.insert(a.begin()+ind,el);
}

template <typename T>
int longest(vector<T> a){
    int maxlen=1;
    int len=1;
    for(int i=1;i<a.size();++i){
        if(a[i]==a[i-1]){
            len++;
                if(len>maxlen)
                    maxlen = len;
        }
        else{
            len=1;
        }
    }
    return maxlen;
}
template <typename T>
void sorta(vector<T>& a) {
    T min = a[0], max = a[0];
    int minind = 0, maxind = 0;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] < min) {
            min = a[i];
            minind = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxind = i;
        }
    }

    if (minind > maxind) {
        int temp = minind;
        minind = maxind;
        maxind = temp;
    }

    if (minind + 1 < maxind) {
        sort(a.begin() + minind + 1, a.begin() + maxind);
    }
}



int main(){
    srand(time(NULL));
    vector<int> a(10);
    for(int i=0;i<a.size();i++)
        a[i]=rand()%10;

    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    
    cout<<"Number of elements equal to first element: "<<equal(a)<<endl;
    cout<<"Swapped index 2 and 4: "<<endl;
    swap(a,2,4);
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";

    insert(a,3,5);
    cout<<endl<<"Inserted element 5 at index 3: "<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Longest amount of elements: "<<endl;
    cout<<longest(a)<<endl;
    cout<<"Sorted from min element to max: "<<endl;
    sorta(a);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}