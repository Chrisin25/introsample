#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
         
    int t,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
     {  
         int n=0,b=0;
         cin>>n>>b;
         vector<int> ar;
         for(j=0;j<n;j++)
          {
            int x;
            cin>>x;
            ar.push_back(x);
          }
        int sum=0;
         sort(ar.begin(),ar.end());
         for(k=0;k<n;k++)
         {  if((sum + ar[k])<=b)
              sum = sum + ar[k];
            else
              break;
         }
         cout<<"Case #"<<i<<":"<<k+1;
         
     }
     return 0;
}