/*Painter Partition problem */



#include<bits/stdc++.h>
#define lll long long int
using namespace std;

lll arr[100005];
lll n,t;

bool check(lll m)
{
    lll no_of_workers=1;
    lll cur_work=0;
    for(lll i=0;i<n;i++)
     {
         if((cur_work+arr[i])<=m)
          {
              cur_work+=arr[i];
          }
          else{
              cur_work=arr[i];
              no_of_workers++;
          }
     }
     return no_of_workers<=t;
}


lll bsearch()
{
    lll low=*max_element(arr,arr+n);
    lll high=accumulate(arr,arr+n,0);
    lll ans=-1;
    while(low<=high)
    {
       lll mid=low+ (high-low)/2;
       if(check(mid))
       {
           high=mid-1;
           ans=mid;
       }
       else
       {
           low=mid+1;
       }
    }
    
    return ans;
}


int main()
{
    cin>>n>>t;
    for(lll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    lll x=bsearch();
    cout<<x;
    
    return 0;
}
