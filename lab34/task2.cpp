#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Matrix{
    public:
    int **el;
    int size;

Matrix(int n){
    size = n;
    el = new int *[n];
    for(int i=0;i<n;i++){
        el[i]=new int[n];
    }
}

~Matrix(){
    for(int i=0;i<size;i++){
        delete[] el[i];
    }
    delete[] el;
}


void fill(){
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            el[i][j]=rand()%10;
        }
    }
}

void output(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<el[i][j]<<" ";
        }
    cout<<endl;
    }
}

friend Matrix operator+(const Matrix& m, const Matrix& m2);
friend Matrix operator-(const Matrix& m, const Matrix& m2);
friend Matrix operator*(const Matrix& m, const Matrix& m2);
friend bool operator==(const Matrix& m, const Matrix& m2);
};
Matrix operator+(const Matrix& m, const Matrix& m2){
    Matrix sum(m.size);
    for(int i=0;i<m.size;i++){
        for(int j=0;j<m.size;j++){
            sum.el[i][j] = m.el[i][j]+m2.el[i][j];
        }
    }
    return sum;
}
Matrix operator-(const Matrix& m, const Matrix& m2){
    Matrix diff(m.size);
    for(int i=0;i<m.size;i++){
        for(int j=0;j<m.size;j++){
            diff.el[i][j] = m.el[i][j]-m2.el[i][j];
        }
    }
    return diff;
}
Matrix operator*(const Matrix& m, const Matrix& m2){
    Matrix mult(m.size);
    for(int i=0;i<m.size;i++){
        for(int j=0;j<m.size;j++){
            mult.el[i][j] = m.el[i][j]*m2.el[i][j];
        }
    }
    return mult;
}

bool operator==(const Matrix& m, const Matrix& m2){
    for(int i=0;i<m.size;i++){
        for(int j=0;j<m.size;j++){
            if(m.el[i][j]!=m2.el[i][j])
                return false;
        }
    }
    return true;
}
int main(){
    srand(time(NULL));
    int n;
    cout<<"Enter n:";
    cin>>n;
    Matrix m(n),m2(n);
    m.fill();
    m2.fill();
    m.output();
    cout<<endl;
    m2.output();
    cout<<endl<<"Sum of matrices: "<<endl;
    Matrix sum = m+m2;
    sum.output();
    cout<<endl<<"Difference of matrices: "<<endl;
    Matrix diff = m-m2;
    diff.output();
    cout<<endl<<"Multiplication of matrices: "<<endl;
    Matrix mult = m*m2;
    mult.output();
    cout<<endl<<"Equal: "<<(m==m2);
    return 0;

}