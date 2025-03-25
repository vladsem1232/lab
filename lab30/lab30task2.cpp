#include <iostream>
using namespace std;
float area(float length, float width=1, float height=1){
    return 2*(length*width+width*height+length*height);
}

int main(){
    cout<<"all parameters(5,3,2): "<<area(5,3,2)<<endl;
    cout<<"height by deafult (5,3): "<<area(5,3)<<endl;
    cout<<"height and width by deafult (5): "<<area(5)<<endl;

    return 0;
}