/*EKO-EKO*/
/*Problem in Spoj 
Binary search Discrete problem
max height at minimum requirement*/
#include<bits/stdc++.h>
using namespace std;
long long int arr[200005];
long long int T;
long long int  n;

bool check(long long int z)
{
    long long int  p=0;
    for(long long int  i=0;i<n;i++)
     {
         if((arr[i]-z)>0)
          {
             p+=(arr[i]-z);
          }
         
     }
    return p>=T;
}

int binarySearch(long long int  l,long long int  h)
{
    long long int ans=-1;
    long long int low=l;
    long long int high=h;
    while(low<=high)
     {
       long long int mid= low + (high-low)/2;
       
        if(check(mid))
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
    
    cin>>n>>T;
    
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int low=*min_element(arr,arr+n);
    long long int high=*max_element(arr,arr+n);
    long long int x= binarySearch(low,high);
    
    cout <<x << endl;
    
    return 0;
}
