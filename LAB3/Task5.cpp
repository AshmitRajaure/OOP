#include <iostream>

using namespace std;

class Matrix{
    int matrix[3][3];
public:

    Matrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j]=0;
            }
        }
    }

    void getData(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"For ["<<i+1<<"]["<<j+1<<"]: ";
                cin>>matrix[i][j];
            }
        }
    }

    friend Matrix operator*(Matrix &a, Matrix &b);

    void display(){
        for(int i=0;i<3;i++){
                cout<<"| ";
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"|"<<endl;
        }
        cout<<endl;
    }

};

    Matrix operator*(Matrix &a, Matrix &b){
        Matrix temp;
        int sum;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    sum=0;
                for(int k=0; k<3;k++){
                    sum+=a.matrix[i][k]*b.matrix[k][j];
                }
                temp.matrix[i][j]=sum;
            }
        }
        return temp;
    }

int main(){
    Matrix a,b,c;
    cout<<"Enter first matrix:"<<endl;
    a.getData();
    cout<<"Enter second matrix:"<<endl;
    b.getData();
    cout<<"First matrix:"<<endl;
    a.display();
    cout<<"Second matrix:"<<endl;
    b.display();
    c=a*b;
    c.display();
    return 0;
}
