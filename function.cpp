#include<bits/stdc++.h>
using namespace std;
int f(int arr[]){
    int sum;
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;

}

int main()
{
    int arr[10];
    for(int i=0; i<5; i++) cin>>arr[i];
    f(arr);

}
