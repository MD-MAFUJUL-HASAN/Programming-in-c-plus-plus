#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
    float a,b,c,s,A;
    void getdata()
    {
        cin>>a>>b>>c;
    }
    void calculation()
    {
        s = (a+b+c)/2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void display()
    {
        cout<<"Area of Triangle is = "<<A;
    }
};
int main()
{
    Triangle obj;
    cout<<"Enter 3 values for Triangle = ";
    obj.getdata();
    obj.calculation();
    obj.display();

    return 0;
}
