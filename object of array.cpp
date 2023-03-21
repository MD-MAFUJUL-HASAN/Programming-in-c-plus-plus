#include<iostream>
using namespace std;
class student
{
    int id;
    string name;
    string dept;
    float cgpa;
    public:
        void get_data()
        {
            cout<<"Enter student id: ";
            cin>>id;
            cout<<"Enter student name:";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter department name:";
                 getline(cin,dept);
                 cout<<"Enter cgpa:";
                 cin>>cgpa;
        }
        void put_data()
        {

         cout<<id<<"\t"<<name<<"\t\t"<<dept<<"\t"<<cgpa<<endl;
        }
};
int main()
{
      cout<<"Enter student number: ";
int number,i;
cin>>number;
student obj[number];
   for(i=0; i<number; i++)
   {
       obj[i].get_data();
   }

   cout<<"std ID\tstd name\tdept\tcgpa\n";
   for(i=0; i<number; i++)
   {
       obj[i].put_data();
   }
   return 0;
}
