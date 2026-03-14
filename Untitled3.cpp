#include<bits/stdc++.h>
using namespace std;
char s[10000001];

int main()
{
   cin>>s;
   int len=strlen(s);
   int sum=0;
   for(int i=0; i<len; i++)
   {
       sum+=(s[i]-'0');
   }
   cout<<sum<<endl;
}
