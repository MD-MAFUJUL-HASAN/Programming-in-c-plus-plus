#include<iostream>
#include<string.h>
using namespace std;
class common
{
public:
    int id;
    string name;
    string dept_name;
    string designation;
    int cell_no;
    float salary;

    void get_data()
    {
      cin>>id>>name>>dept_name>>designation>>cell_no>>salary;
    }
};
class teachers:public common
{
public:
    int publications_no;
};
class officers:public common
{
public:
    int account_number;
};
int main()
{
    teachers obj;
    cout<<"Enter ID, Name, Dept.name, Designation, Cell.no, Salary & Publications.no  = "<<endl;
    obj.get_data();
    officers obj1;
    cout<<"Enter ID, Name, Dept.name, Designation, Cell.no, Salary & Account.no  = "<<endl;
    obj1.get_data();
}
