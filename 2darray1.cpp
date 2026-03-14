#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][5];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
     for (int i=0; i<2; i++)
    {
     //   cout<<i<<"the row"<<endl;
        for (int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
