#include<iostream>
#include<cmath>
using namespace std;
class coordinate{
       int x2,y2,x1,y1,temp,count,c,a,b,z;
       public:
       void get(){
        cout<<"Enter the values of x1 and y1"<<endl;
        cin>>x1;
        cin>>y1;
        cout<<"Enter the values of X2 and Y2"<<endl;
        cin>>x2;
        cin>>y2;
       }
        void set()
        {   
            a=x2-x1;
            b=y2-y1;
             temp= pow(a,2);
             count= pow(b,2);
        }
        int print(){
            z=temp-count;
            c=sqrt(z);
            return c;
        }
        void output(){
            cout<<"The Distance between 2 points is "<<c;
        }
};
int main(){
    coordinate aa;
    aa.get();
    aa.set();
    aa.print();
    aa.output();
}