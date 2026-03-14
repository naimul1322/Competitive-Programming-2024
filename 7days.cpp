#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n*7+1];
    for(int i=1; i<=n*7; i++) cin>>a[i];
    int ans=0;
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
