#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx][mx];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool ans=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==x)
            {
                ans=true;
                break;
            }
        }
    }
    if(ans) cout<<"will not take number"<<endl;
    else cout<<"will take number"<<endl;
}
