#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int sum2=0;
    for(int i=1; i<=n-1; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    for(int i=1; i<=n-1; i++)
    {
        sum2+=a[i];
    }
    cout<<sum-sum2<<endl;

}
