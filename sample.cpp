#include<iostream>
using namespace std;
class circle
{
    private:
    double radius;
    public:
    double compute_area()
    {
        return 3.15 * radius*radius;
    }
};
void input()
{
    cout<<"Enter radius";
    cin >> radius;
}
int main()
{
    circle obj;
}