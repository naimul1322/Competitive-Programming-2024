#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    int cnt[n+1]={};
    for(int i=1; i<=n-1; i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

}
