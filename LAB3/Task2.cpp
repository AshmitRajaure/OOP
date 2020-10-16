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

    void display(){
        cout<<real<<" + i"<<imag;
    }

    friend Complex operator ++(Complex &c);
    friend Complex operator ++(Complex &c, int);

};

Complex operator ++(Complex &c){
    Complex temp;
    temp.real=++c.real;
    temp.imag=++c.imag;
    return temp;
    }

Complex operator ++(Complex &c, int){
    Complex temp;
    temp.real=c.real++;
    temp.imag=c.imag++;
    return temp;
    }

int main(){
    Complex c1(6,4),c2(7.2,5.1);
    c1++; //Postfix
    ++c2; //Prefix
    c1.display();
    cout<<endl;
    c2.display();
    return 0;
}



