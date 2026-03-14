#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g=0;
    int x;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        g=__gcd(g,x);

    }
    cout<<g<<endl;
}
