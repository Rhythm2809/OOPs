#include<iostream>
using namespace std;
class number
{
    private:
    int n,m;
    public:
    number()
    {
        n=10;
        m=10;
    }
    number(int a,int b)
    {
        m=b;
        n=a;
    }
    number(number& a)
    {
        n=a.n;
        m=a.m;
    }
    void display()
    {
        cout<<m<<"\n"<<n<<endl;
    }
};
int main()
{
    number a;
    number b=number(5,7);
    number c(b);
    c.display();
    b.display();
    a.display();
    return 0;
}