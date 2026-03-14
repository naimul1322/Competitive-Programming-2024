#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;
   // transform(s.begin(),s.end(),s.begin(),::tolower);
transform(s.begin(),s.end(),s.begin(),::toupper);
    reverse(s.begin(),s.begin());
    cout<<s<<endl;
}
