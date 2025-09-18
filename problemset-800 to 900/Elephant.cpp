#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;cin>>x;
    int step=(x/5);
    if(x%5>0)
    {
        cout<<step+1<<endl;
    }
    else cout<<step<<endl;
    return 0;
}