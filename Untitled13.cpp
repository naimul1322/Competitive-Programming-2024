#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
    }
    int r,c;
    cin>>r>>c;
    r--;
    c--;
    bool allx=true;
    if(r-1>=0)
    {
        if(string [r-c]!='x') allx=false;

    }
    if(r+1<n){
        if(s[r+1][c])!='x') allx=false;
    }
    if((c-1)>=0){
        if(s[r][c-1]!='x') allx=false;
    }

}


   int n=999;
        int k=10;
        int ans=n/k;
        int result=ans*(k-1);
        int fresult=n-result;
    cout<<fresult<<endl;
