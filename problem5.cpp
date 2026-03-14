/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
long long dp[100123];
long long fact(long long n)
{
    if(n==0) return 1;
    if(dp[n]!=0) return dp[n];
    int res=(n*fact(n-1))%MOD;
    return dp[n]=res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

//   long long ans=1;
//   for(int i=1; i<=n; i++)
//   {
//       ans*=i;
//       ans%=MOD;
//   }
//   cout<<ans<<endl;

    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        cout<<fact(n)<<endl;
    }

}

