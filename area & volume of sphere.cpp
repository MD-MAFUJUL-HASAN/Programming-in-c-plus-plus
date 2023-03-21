#include<iostream>
using namespace std;
int main()
{
    float rad,area,volume;
    cout<<"Enter the value of Radius: ";
    cin>>rad;
    area = 4*3.1416*rad*rad;
    volume = (4/3)*3.1416*rad*rad*rad;
    cout<<"Area of Sphere is: "<<area<<endl;
    cout<<"Volume of Sphere is: "<<volume;
    return 0;
}
