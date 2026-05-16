#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;char s;
    cin>>m>>s>>n;;
    if(s=='+')
    {
        int t=m+n;
        cout<<t<<endl;
    }
    else if(s=='-')
    {
        int t=m-n;
        cout<<t<<endl;
    }
     else if(s=='*')
    {
        int t=m*n;
        cout<<t<<endl;
    }
     else if(s=='/')
    {
        int t=m/n;
        cout<<t<<endl;
    }
    return 0;


}