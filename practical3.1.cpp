#include<iostream>
using namespace std;
#define MAX(a,b,c)(a>b && a>c ? a:(b>c?b:c))
#define MIN(a,b,c)(a<b && a<c ? a:(b<c?b:c))
int main()
{
    int x,y,z,large,small;
    cout<<"Enter three numbers:";
    cin >> x >> y >>z;
    large = MAX(x,y,z);
    small = MIN(x,y,z);
    cout << "Maximum between" << x << y << z << large;
    cout << "Minimum between" << x << y << z << small;
    return 0;
   
}