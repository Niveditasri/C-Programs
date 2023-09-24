#include<iostream>
using namespace std;
int main(){
    int n,first=0,second=1,count=0,a[20];
    cout<<"Enter the number of terms for fibonacci"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int temp=first+second;
        first=second;
        second=temp;
    }
}