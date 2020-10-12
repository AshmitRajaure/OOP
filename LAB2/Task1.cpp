#include <iostream>

using namespace std;

class Student{
    char name[20];
    int roll;
    float marks;
    char address[20];

public:
    void getData(){
        cout<<"Enter the name : "<<endl;
        cin>>name;
        cout<<"Enter the roll : "<<endl;
        cin>>roll;
        cout<<"Enter the marks : "<<endl;
        cin>>marks;
        cout<<"Enter the address : "<<endl;
        cin>>address;
    }

    void showData(){
        cout<<endl<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

int main(){
    Student student;
    student.getData();
    student.showData();
    return 0;
}

