#include<iostream>
#include<math.h>
using namespace std;
class prime
{
private:
    int x;
public:
    prime(int n)
    {
        x = n;
    }
    int checkprime()
    {
        int con,i;
        con = sqrt(x);
        for(i=2;i<=con;i++)
            if(x%i==0)
            {
                return 0;
            }
            return 1;
    }
};
int main()
{
    int num;
    cout<<"Enter a number to check its prime = ";
    cin>>num;
    prime obj(num);
    if(obj.checkprime()==1)
        cout<<"It is a Prime Number";
    else
        cout<<"It is not a Prime Number";
}
