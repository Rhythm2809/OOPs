//string concatination using operator overlodind
#include<iostream>
using namespace std;
class stringconcat
{
    private:
    string str;
    public:
    stringconcat():str(" "){}
    stringconcat(string s):str(s){}
    stringconcat operator+(const stringconcat obj)
    {
        stringconcat result;
        result.str=this->str+obj.str;
        return result;
    }
    void display()
    {
        cout<<"concat string:"<<str<<endl;
    }
};
int main()
{
    stringconcat str1("hello");
    stringconcat str2("world");
    stringconcat res=str1+str2;
    res.display();
    return 0;
}