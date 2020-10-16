#include <iostream>

using namespace std;

class Complex{
    float real, imag;
public:

    Complex(){
        real=0;
        imag=0;
    }

    Complex(float r,float i){
        real=r;
        imag=i;
    }

    Complex operator+(Complex &a){
        Complex temp;
        temp.real=this->real+a.real;
        temp.imag=this->imag+a.imag;
        return temp;
    }

    void display(){
        cout<<real<<" + i"<<imag;
    }

};

int main(){
    Complex c1(6,4),c2(7.2,5.1),c3;
    c3=c1+c2;
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl<<"The sum is : ";
    c3.display();
    return 0;
}




