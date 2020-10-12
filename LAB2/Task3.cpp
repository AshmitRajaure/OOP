#include <iostream>

using namespace std;

class Complex{
    float real;
    float imag;
public:
    Complex(){
        real=0;
        imag=0;
    }

    Complex(float real, float imag){
        this->real=real;
        this->imag=imag;
    }

    static Complex addComplex(Complex c1, Complex c2){
        Complex temp;
        temp.real=c1.real + c2.real;
        temp.imag=c1.imag + c2.imag;
        return temp;
    }

    void display(){
        cout<<real<<"+ i"<<imag;
    }
};

int main(){
    Complex c1(1,2),c2(2.3,3.4),c3;
    c3=Complex::addComplex(c1,c2);
    cout<<"The sum is : ";
    c3.display();
}
