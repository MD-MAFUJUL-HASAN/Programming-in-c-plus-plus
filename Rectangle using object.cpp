#include<iostream>
using namespace std;
class Rectangle
{
public:
    float length,width;
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float getPerimeter()
    {
        return(2*(length+width));
    }
    float getArea()
    {
        return(length*width);
    }
};
int main()
{
    float a,b;
    cout<<"Enter length & width = ";
    cin>>a>>b;
    Rectangle obj(a,b);
    cout<<"Perimeter of Rectangle = "<<obj.getPerimeter()<<endl;
    cout<<"Area of Rectangle = "<<obj.getArea();
    return 0;
}
