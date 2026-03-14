#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];


int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    int l=0,r=n-1;
    int x,ans;
    cin>>x;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x) {
            ans=mid;
            break;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }

    cout<<ans<<endl;
}
