#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx],sum[mx];

int main()
{
    int n;
    cin>>n;
     sum[0]=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<sum[i]<<" ";
    }

    cout<<endl;

}
