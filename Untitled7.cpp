#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[20];
    cin>>ch;
    int len=0;
    while(ch[len]!='\0') len++;
    for (int i=0; i<len/2; i++)
    {
        char c;
        c=ch[len-i-1];
        ch[len-i-1]=ch[i];
        ch[i]=c;
    }
    cout<<ch<<endl;
}
