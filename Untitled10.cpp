#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n*4+1];
    int cnt[n+1]={};
    for(int i=0; i<n*4-1; i++ ) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    int ans;
    for(int i=0; i<n*4-1; i++)
    {
        if(cnt[i]==3)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
