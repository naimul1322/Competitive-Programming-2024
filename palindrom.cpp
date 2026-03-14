#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch[20];
    cin>>ch;
    int len=0;
    while(len!='\0') len++;
    bool ispalidrom=false;
    for(int i=0; i<len; i++)
    {
        if(ch[i]!=ch[len-i-1]) ispalidrom=true;
    }
    if(!ispalidrom) cout<<"Palindrom"<<endl;
    else cout<<"not palindrom"<<endl;

}
