#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int rnum=0;
    while(n!=0)
    {
        a=n%2;
        rnum=rnum*10+a;
        n/=2;
    }
    cout<<rnum<<0<<endl;

}
