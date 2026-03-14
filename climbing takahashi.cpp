#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
long long a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int ans=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<a[i+1]) ans=a[i+1];
        else break;
    }
    cout<<ans<<endl;

}
