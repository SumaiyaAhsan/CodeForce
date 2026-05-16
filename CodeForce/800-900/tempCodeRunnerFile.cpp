#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    if(l<=100)
    {
        for(int i=1;i<=l;i=i+2)
        {
           for(int j=1;j<=l;j=j+2)
           {
            if(s[i]>s[j])
            {
              swap(s[i],s[j]);
            }
           }
        }

    }
     for(int i=0;i<l;i=i+2)
        {
           cout<<s[i];
        }

    

    return 0;
}