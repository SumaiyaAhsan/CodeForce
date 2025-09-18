#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;cin>>k>>n>>w;
    int total=0;
    for(int i=1;i<=w;i++)
    {
       total=total+(k*i);
    }
    if(total>n){
    cout<<abs(total-n)<<endl;
    }
    else cout<<0<<endl;

    return 0;
}