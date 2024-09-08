#include<iostream>
using namespace std;
class Area
{
private:
    float length;
    float width;
    float area;
public:
    Area()
    {
        length=0;
        width=0;
    }
    Area(int L)
    {
        length=L;
    }
    Area(int L,int W)
    {
        length=L;
        width=W;
    }
    Area(Area& obj)
    {
        length=obj.length;
        width=obj.width;
    }
    void sqarea()
    {
        area=length*length;
    }
    void rectarea()
    {
        area=length*width;
    }
    float getsqarea()
    {
        return area;
    }
    float getrectarea()
    {
        return area;
    }
};
int main()
{
    Area obj1(3);
    Area obj2(2,3);
    obj1.sqarea();
    cout<<"Area of Square:"<<obj1.getsqarea()<<endl;
    obj2.rectarea();
    cout<<"Area of Rectangle:"<<obj2.getrectarea()<<endl;
    return 0;
}


