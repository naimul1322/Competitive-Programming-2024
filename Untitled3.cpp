#include<bits/stdc++.h>
using namespace std;

const int mx=1e4+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    bool istrue=false;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i+1]==a[i+2]=='w')
        {
            cout<<"M"<<endl;
            istrue=true;
        }

    }
    if(!istrue) cout<<"NO M"<<endl;

}
