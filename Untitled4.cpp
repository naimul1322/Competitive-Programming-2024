#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c;
    getline(cin,s);
    s=c+s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

}
