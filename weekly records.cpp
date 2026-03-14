#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n*7; i++) cin>>a[i];
    long long ans=0;
    for(int i=1; i<=n*7; i++)
    {
        ans+=a[i];
        if(i%7==0){
            cout<<ans<<" ";
            ans=0;
        }

    }
     cout<<endl;
}
