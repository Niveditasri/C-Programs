#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a number:";
    cin >> n;
    for(i=1;i <11; i++)
    {
        cout<< n << " * " << i << " = " << n*i << endl;
    }
    return 0;

}