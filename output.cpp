#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
public:
    point(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point p1(10,15);
    point p2(100,150);
    cout<<"p1.x="<<p1.getx()<<"p1.y="<<p1.gety()<<endl;
    cout<<"p2.x="<<p2.getx()<<"p2.y="<<p1.gety()<<endl;
}
