#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    char name[50];
    int id;
    float cgpa;
    void get_input()
    {
        cin.get(name,50);
        cin>>id>>cgpa;
    }
    void display()
    {
        cout<<endl<<endl<<"Student Information"<<endl;
        cout<<"==============================="<<endl;
    }
};
int main()
{
    student obj;
    cout<<"Enter Student_name , student ID , CGPA = ";
    obj.get_input();
    obj.display();
    cout<<"NAME = "<<obj.name<<endl;
    cout<<"ID = "<<obj.id<<endl;
    cout<<"CGPA = "<<obj.cgpa<<endl;
}

