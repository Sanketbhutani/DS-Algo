#include<bits/stdc++.h>
#define lll long long int
using namespace std;
int N;
lll arr[100000];
int binarySearch(int val)
{
    int low=0;
    int high=N-1;
    while(low<=high)
    {
        int mid=low + (high-low)/2;
        if(arr[mid]==val) return mid;
        
        if(arr[mid]<val)  low=mid+1;
        else high=mid-1;
        
    }
    return -1; 
}

int main()
{
    int n,k;
    cin>>n>>k;
    N=n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<k;i++)
     {
         int val;
         cin>>val;
         int y=binarySearch(val);
         if(y==-1)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
     }
    return 0;
}