//do it again

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;cin>>t;
   
    while(t--)
    {
    int n;cin>>n;
    int arr[n];
     int count=0;
     
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
            if(count>=1){
            break;}
        }
        else{
            count++;
        }

    }
    cout<<count<<endl;
   }

    return 0;
}


