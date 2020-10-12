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

    Complex(const Complex& c){
        this->real=c.real;
        this->imag=c.imag;
    }

    ~Complex(){
        cout<<endl<<"Complex destructed"<<endl;
    }

    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main(){
    Complex c1;
    Complex c2(2,3);
    Complex c3(c2);
    cout<<"C1 : ";
    c1.display();
    cout<<"C2 : ";
    c2.display();
    cout<<"C3 : ";
    c3.display();
}

