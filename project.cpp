#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Press 1 for Binary to decimal and 2 for decimal to binary 3 for decimal to octal ";
    cin>>choice;
    switch(choice){
    case 1:{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit=n%10;
        ans+=lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;
    break;
    }
    case 2:{
    int k;
    cin>>k;
    int digit=0;
    int pow=1;
    while(k>0){
        int last=k%2;
        digit+=last*pow;
        pow*=10;
        k/=2;

    }
    cout<<digit<<endl;
    break;
    }
    case 3:{
        int m;
        cin>>m;
        int sum=0;
        int lomi=1;
        while(m>0){
            int num=m%8;
            sum+=num*lomi;
            lomi*10;
            m/8;
        }
        cout<<sum<<endl;
        break;
    }
    default:cout<<"invalid code";
    }
    return 0;
}