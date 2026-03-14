#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[20];
    cin>>c;
    int len=0;
    while(c[len]!='\0') len++;
    for(int i=0; i<len/2; i++)
    {
        char ch=c[len-i-1];
        c[len-i-1]=c[i];
        c[i]=ch;
    }
    cout<<c<<endl;
}
