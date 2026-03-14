#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
long long a[mx],sum[mx];

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }

}
