#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,d;
        cin>>n>>x>>d;
        int a=x*5;
        int b=n/a;
        cout<<d+b<<endl;
    }
}
