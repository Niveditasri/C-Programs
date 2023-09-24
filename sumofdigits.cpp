#include<iostream>
using namespace std;
int main()
{
    int num,sum =0,d;
    cout << "Enter a number:";
    cin >> num;
    while ( num > 0)
    {
        d = num % 10;
        sum = sum + d;
        num=num/10;         
    }
    cout << sum;
    return 0;
}