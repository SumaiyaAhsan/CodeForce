#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    long long m_length=ceil((double)m/a);
     long long n_width=ceil((double)n/a);
     long long num_of_flagstone=m_length* n_width;
     cout<<num_of_flagstone<<endl;
    return 0;
}