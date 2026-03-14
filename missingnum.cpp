#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0; i<n-1; i++) cin>>a[i];
    long long sum1=0;
    long long sum2=0;
    for(int i=1; i<=n; i++)
    {
        sum1+=i;
    }
    for(int i=0; i<n-1; i++)
    {
        sum2+=a[i];
    }
    cout<<sum1-sum2<<endl;
}
