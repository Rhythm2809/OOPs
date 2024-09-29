//prefix dicrement overlodind
#include<iostream>
using namespace std;
class circle
{
    public:
    float radius;
    circle(float rad)
    {
        radius=rad;
    }
    void area()
    {
        cout<<3.14*radius*radius;
    }
    circle operator--(int)
    {
        radius--;
        return *this;
    }
};
int main()
{
    circle c(15);
    c.area();
    c--;
    cout<<"\n";
    c.area();
    c--;
    cout<<"\n";
    c.area();
    return 0; 
}
