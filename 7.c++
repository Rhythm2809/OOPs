#include<iostream>
using namespace std;
class shape 
{
    protected:
    int shapelength;
    int shapewidth;
    public:
    void setlength(int l)
    {
        shapelength=l;
    }
    void setwidth(int w)
    {
        shapewidth=w;
    }
    virtual int perimeter()=0;
};
class rectangle : public shape
{
    public:
    int perimeter(){
    return 2*(shapelength+shapewidth);
    }
};
class square : public shape
{
    public:
    int perimeter(){
    return 4*(shapelength);
    }
    friend float circumfrence(square);
};
float circumfrence(square s)
{
    return (float) 2*3.14*s.shapelength;
}
int main()
{
    rectangle r;
    square sq;
    r.setlength(4);
    r.setwidth(5);
    sq.setlength(2);
    cout<<r.perimeter()<<endl;
    cout<<sq.perimeter()<<endl;
    cout<<circumfrence(sq)<<endl;
    return 0;
}