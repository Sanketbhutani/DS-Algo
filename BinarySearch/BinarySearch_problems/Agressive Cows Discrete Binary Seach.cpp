/*Question Splitting the array:codeforces*/
#include<bits/stdc++.h>
#define lll long long int
using namespace std;
int N,K;
bool check(lll m,lll arr[])
{
    int n_o_w=1;
    lll low=arr[0];
    for(int i=1;i<N;i++)
    {
        if(arr[i]-low >= m)
        {
            n_o_w++;
            low=arr[i];
        }
        
    }
    return n_o_w>=K;
}

lll binarySearch(lll max,lll arr[])
{
    lll low=0;
    lll high=max;
    lll ans=-1;
    while(low<=high)
    {
        lll mid= low+(high-low)/2;
        if(check(mid,arr))
         {
          ans=mid;
          low=mid+1;
         }
         else
         {
             high=mid-1;
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
    lll max=arr[n-1]-arr[0];
    lll bs= binarySearch(max,arr);
     cout<<bs;
     return 0;
}