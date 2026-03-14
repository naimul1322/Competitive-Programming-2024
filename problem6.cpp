/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
const int mx=1e5+123;
int a[mx],sum[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sum[0]=1;
    for(int i=1; i<=n; i++)
    {
        sum[i]=(sum[i-1]*a[i])%MOD;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;


}

