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

    Complex operator ++(){
        Complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return temp;
    }

    Complex operator ++(int){
        Complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }

    void display(){
        cout<<real<<" + i"<<imag;
    }

};

int main(){
    Complex c1(4,5),c2(4.5,6.7);
    c1++; //Postfix
    ++c2; //Prefix
    c1.display();
    cout<<endl;
    c2.display();
    return 0;
}


