#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=false;
        for(int i=0; i<s.size(); i++)
        {
             if(s[i-2]=='0' && s[i-1]=='1' && s[i]=='0')
            {
                ans=true;
            }
            else if(s[i-2]=='1' && s[i-1]=='0' && s[i]=='1')
            {
                ans=true;
            }
        }
        if(ans) cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }
}
