#include<iostream>
using namespace std;
int main()
{
    float a,b,c,f;
    int choice;
    cout<<"1. Find Fahrenheit value"<<endl;
    cout<<"2. Find Celsius value"<<endl;
    cout<<"=============================="<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter the value of Celsius = ";
        cin>>a;
        f = ((a*9)/5)+32;
        cout<<"Fahrenheit value is = "<<f<<endl;
        break;
    case 2:
        cout<<"Enter the value of Fahrenheit = ";
        cin>>b;
        c = ((b-32)*5)/9;
        cout<<"Celsius value is = "<<c<<endl;
        break;
    default:
        cout<<"Invalid choice";
        break;
    }
    return 0;
}
