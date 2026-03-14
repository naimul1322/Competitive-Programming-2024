#include<bits/stdc++.h>
using namespace std;
const int mx=1e3+123;
int a[mx];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=0;
        int gold=0;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++)
        {
            if(a[i]>=k)
            {
            ans+=a[i];
            }
          else if(a[i]==0 && ans>0) {
            ans--;
            gold++;

          }
        }
        cout<<gold<<endl;
    }
}
