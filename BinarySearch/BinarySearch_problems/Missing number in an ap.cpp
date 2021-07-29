#include<bits/stdc++.h>
using namespace std;

int findap(int arr[],int low,int high,int d)
 {
     if(high<=low)
        return -1;
        
    int mid= low + (high-low)/2;
    
    if(arr[mid+1] - arr[mid] != d)
         return (arr[mid]+d);
         
    if(mid>0 && arr[mid] - arr[mid-1] != d)
         return (arr[mid-1]+d);
         
    if(arr[mid]== arr[0] +mid*d)
              return  findap(arr,mid+1,high,d);
              
    return findap(arr,low,mid-1,d); 
 }

int main()
{
    int arr[8]={10,20,40,50,60,70,80,90};
    int n=8;
    int d= (arr[n-1] - arr[0])/n;
    //cout<<d;
    
    int x= findap(arr,0,n-1,d);
    
    if(x==-1) cout<<"The ap is comlete"<<endl;
    else cout<<"The missing element in the ap is"<<x<<endl;
    
    return 0;
}
