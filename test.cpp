#include<iostream>
using namespace::std;
int main(){
    int a,i,count;
    cout<<"enter a no"<<endl;
cin>>a;
for(i=2;i<=a/2;i++)
{
    if(a%i==0)
    {
        cout<<"NO its not a prime no"; return 0;
    }
}
cout<<"YES its a prime no";
}