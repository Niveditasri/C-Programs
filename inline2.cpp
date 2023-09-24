#include<iostream>
using namespace std;
class operation
{   static int z;
    int a,b,add,sub;
    public:
    void get();
    void sum();
    void difference();
};
int operation::z=1;
inline void operation :: get()
{
    cout<<"Enter fisrt value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
inline void operation :: sum()
{
    add = a+b;
    cout << "Addition of two numbers:" << a+b << "\n";
}
inline void operation :: difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}
int main()
{
    operation s;
    s.get();
    s.sum();
    s.difference();
    return 0;
}