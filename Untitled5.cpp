#include<bits/stdc++.h>
using namespace std;
const int mx=1e3+123;
int a[mx],b[mx];

int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=m; i++) cin>>b[i];
    for(int i=1; i<=n; i++)
    {
        if(a[i]==i){
            sum+=i;
        }
    }
    cout<<sum<<endl;

}
