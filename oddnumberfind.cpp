#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
long long a[mx];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++) cin>>a[i];
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2!=0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
