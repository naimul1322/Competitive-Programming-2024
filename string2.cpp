#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int g=0;
    int x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        g=__gcd(g,x);
    }
    cout<<g<<endl;
}
