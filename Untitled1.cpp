/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=2e5+123;
long long a[mx],psum[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        psum[i]=psum[i-1]+a[i];
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<(psum[r]-psum[l-1])<<endl;
    }


}

