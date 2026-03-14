#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=0;
     for(long long i=1; i<=n; i++){
        if(i<=k) ans+=i;
        else ans+=k;
     }
     if(ans%2==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
}
