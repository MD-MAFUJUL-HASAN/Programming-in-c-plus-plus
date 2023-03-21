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
        cout<<"Student Information = ";
    }
};
int main()
{
    student obj[5];
    int i;
    cout<<"Enter Student_name , student ID , CGPA = ";
    for(i=0;i<5;i++)
        obj[i].get_input();
    for(i=0;i<5;i++)
        cout<<obj[i].name<<" "<<obj[i].id<<" "<<obj[i].cgpa;
}

