#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1; i<=n; i++)
    {
        if(a[0]<a[i])
        {
            cout<<a[0]<<" "<<i<<endl;
        }
    }



}
