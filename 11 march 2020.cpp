//Single Level Inheritance//


#include<iostream>
#include<string.h>
using namespace std;
class base
{
private:
    int id;
public:
    string std_name;
protected:
    float cgpa;
};
class derive:public base
{
public:
    void get_data()
    {
        cout<<"Enter Student name & CGPA = ";
        cin>>std_name;
        cin>>cgpa;
    }
    void put_data()
    {
        cout<<"\n\nYour Entered Student name & CGPA = \n";
        cout<<std_name<<"\n"<<cgpa;
    }
};
int main()
{
    derive obj1;
    obj1.get_data();
    obj1.put_data();
}
