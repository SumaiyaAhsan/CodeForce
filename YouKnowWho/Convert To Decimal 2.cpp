#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    
    vector<int>arr(n);
    vector<string>bin;
    
    //take input
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    //convert into binary
    for(int i=0;i<n;i++)
    {
       int num=arr[i];
       deque<int>rem;
       while(num>0)
       {
          rem.push_front(num%2);
          num=num/2;
       }
       int count_st=0;

       for(int j=0;j<rem.size();j++)
    {
       if(rem[j]==1)
       {
             count_st++;
       }
    }
    string st="";
    int dec=0;
    for(int k=0;k<count_st;k++)
    {
      
        st=st+'1';
    }
    for(int l=0;l<st.size();l++)
    {
      
        int digit=st[l]-'0';
        dec=dec+digit*pow(2,st.size()-1-l);
    }
    cout<<dec<<endl;

    }

    return 0;

}