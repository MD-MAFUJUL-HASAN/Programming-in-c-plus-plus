#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cout<<"Enter three elements for a Triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of Triangle is: "<<area;
    }
    else
        cout<<"Triangle is not possible";
    return 0;
}
