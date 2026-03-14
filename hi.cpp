#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char c;
 int     len=0;
    while(s[len]!='\0') len++;
    s=s[0];
    s[0]=s[len-1];
    s[len-1]=s;

    cout<<s<<endl;
}
