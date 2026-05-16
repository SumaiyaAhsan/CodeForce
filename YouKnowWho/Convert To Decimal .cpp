#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int dec=0;
        string bin=arr[i];
        for(int j=0;j<bin.size();j++)
        {
            int digit=bin[j]-'0';
            dec=dec+digit*pow(2,bin.size()-1-j);
        }
        cout<<dec<<endl;
    }
   
   
     
    return 0;
}