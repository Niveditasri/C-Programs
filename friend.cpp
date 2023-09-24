#include<iostream>
using namespace std;
class swap
{
    private:
    int x,y;
    public:
    void get()
    {
        cout<< " Enter the value of x and y:";
        cin >> x >> y;
    }
    friend void swapping(swap,swap);
};
void swapping(swap &s1)
{
    int t;
    t=s1.x;
    s1.x=s1.y;
    s1.y=t;
    cout << s1.x << s1.y;
}
int main()
{
    swap ob1(4,6);
    ob1.get():
    ob2.get();
    swapping(ob1);
}