#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int matrix[n][3];
    int p=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<3;j++)
       {
         cin>>matrix[i][j];
       
       }
    }
    for(int i=0;i<n;i++)
    { 
           int count=0;
       for(int j=0;j<3;j++)
       {
          if(matrix[i][j]==1)
          {
              count++;
          }
       
       }
       if(count==2 || count==3)
       {
          p++;
       }
    }
    cout<<p<<endl;
    return 0;
}