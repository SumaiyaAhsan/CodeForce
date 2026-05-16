#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
  
    for(int i=0;i<n;i++)
    {
        deque<int>rem;
       int num=arr[i];
    if(num==0)
    {
        rem.push_front(0);
    }
    while(num>0)
    {
        rem.push_front(num%2);
        num=num/2;
  
    }

    for(int j=0;j<rem.size();j++)
 {
    cout<<rem[j];
 }
     cout<<endl;
     
}

 
    return 0;
}