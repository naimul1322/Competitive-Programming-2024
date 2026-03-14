#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    int cnt[n+1]= {};
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    bool ans=true;

    for(int i=1; i<=n; i++)
    {
        if(cnt[a[i]]>cnt[a[i+1]])
        {
        if(cnt[a[i]]%2!=0)
        {
            ans=false;
            break;
        }
        }

    }
    if(ans==false) {
        cout<<"Lucky"<<endl;
    }
    else  cout<<"unLucky"<<endl;



}
