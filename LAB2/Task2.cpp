#include <iostream>

using namespace std;

class Student{
    char name[20];
    int roll;
    float marks;
    char address[20];
public:
    void getData(){
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the roll : ";
        cin>>roll;
        cout<<"Enter the marks : ";
        cin>>marks;
        cout<<"Enter the address : ";
        cin>>address;

    }

    void showData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

int main(){
    Student student[50];
    int numberOfStudents;
    cout<<"Enter the number of students : ";
    cin>>numberOfStudents;

    for(int i=0;i<numberOfStudents;i++){
        cout<<endl<<"For student : "<<i+1<<endl;
        student[i].getData();
    }

    for(int i=0;i<numberOfStudents;i++){
            cout<<endl<<"Student : "<<i+1<<endl;
        student[i].showData();
    }

    return 0;
}


