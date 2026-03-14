#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx];

int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1; i<=n; i++) cin>>a[i];
    int sum=0;

    for(int i=1; i<=n;i++)
    {
        if(a[i]<=x){
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
}
