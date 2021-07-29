/*Binary Search Problem: Allocate The Minimun No Of Books*/

#include<bits/stdc++.h>
#define lll long long int
using namespace std;
int N,K;
bool check(lll m,lll arr[])
{
    int n_o_s=1;
    lll cur_work=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]>m) false;
        if(cur_work + arr[i] <= m)
        {
            cur_work+=arr[i];
        }
        else
        {
            n_o_s++;
            cur_work=arr[i];
        }
    }
    return n_o_s<=K;
}

lll binarySearch(lll total,lll arr[])
{
    lll low=0;
    lll high=total;
    lll ans=-1;
    while(low<=high)
    {
        lll mid= low+(high-low)/2;
        if(check(mid,arr))
         {
          ans=mid;
          high=mid-1;
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
    int n,k;
    cin>>n>>k;
    N=n;
    K=k;
    lll arr[100000];
    for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     lll zero=0;
     lll total=accumulate(arr,arr+n,zero);
     
    lll bs= binarySearch(total,arr);
     cout<<bs;
     return 0;
}