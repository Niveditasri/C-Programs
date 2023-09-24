#include<iostream>
using namespace std;
inline int Add(int x, int y)
{
    return x+y;
}
int main()
{
    cout << "\n\t The sum is:" << Add(10,20);
    cout << "\n\t The sum is:" << Add(30,50);
    cout << "\n\t The sum is:" << Add(87,56);
}