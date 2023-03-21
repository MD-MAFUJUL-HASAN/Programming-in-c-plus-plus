#include<iostream>
using namespace std;
int main()
{
    float height,weight;
    int max_people;
    cout<<"Enter Height Weight & The number of people: ";
    cin>>height>>weight>>max_people;
    if(height<=7 && weight<=500 && max_people<=6)
        cout<<"Lift will work";
    else
        cout<<"Lift will not work";
    return 0;
}
