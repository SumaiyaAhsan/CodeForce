#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    double sum=(double)n/m;
    cout<<"floor "<<n<<" / "<<m<<" = "<<floor(sum)<<endl;
    cout<<"ceil "<<n<<" / "<<m<<" = "<<ceil(sum)<<endl;
    cout<<"round "<<n<<" / "<<m<<" = "<<round(sum)<<endl;
    
    return 0;
}