#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    int cnt[n+1]={};
    for(int i=1; i<=n*4-1; i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    int ans;
    for(int i=1; i<=n*4-1; i++)
    {
        if(cnt[i]==3){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
