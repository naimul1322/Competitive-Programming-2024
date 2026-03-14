#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==6 && b==6 && c==6 ) {
            cout<<"Case "<<i<<" : "<<"invalidum"<<endl;
        }
        else cout<<"Case "<<i<<": "<<"perfectus"<<endl;
    }
}
