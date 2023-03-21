#include<iostream>
using namespace std;
class shape
{
public:
    float setwidth(float w)
    {
        width = w;
    }
    float setheight(float h)
    {
        height = h;
    }
protected:
    float height,width;
};
class Rectangle:public shape
{
public:
    float get_area()
    {
        cout<<"\nArea of Rectangle = ";
        return height*width;
    }
    float perimeter()
    {
        cout<<"\nPerimeter of Rectangle = ";
        return (2*(height+width));
    }
};
int main()
{
    float h,w;
    cout<<"Enter Height and Width = ";
    cin>>h>>w;
    Rectangle obj;
    obj.setheight(h);
    obj.setwidth(w);
    cout<<obj.get_area();
    cout<<obj.perimeter();
}
