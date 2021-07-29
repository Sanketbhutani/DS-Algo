#include<bits/stdc++.h>
using namespace std;
int m;
int binarysearch(int arr[],int j,int n,int search)
{
	int low=j,high=n-1;
	while(high>=low)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]==search) return mid;
		
		if(arr[mid]<search)
		{
			low=mid+1;
		}
		else high=mid-1;
	
	}
	
	return -1;
}


void pivot(int arr[],int n)
{
	int high=n-1;
    int low=0;
    while(high>=low)
        {
	      int mid= low+ (high-low)/2;
	      int next=(mid+1)%n;  //we are dividing it buy %n becuse to find to reduce overflow                                       
	      int prev=(mid+n-1)%n;
	      
		  if((arr[mid]<=arr[next])&&(arr[mid]<=arr[prev]))    //return mid value
         	 {
	 	     m=mid;
	 	      return;
	         }
                          /*and now shifting iteration towards the unsorted part*/
	
	       if(arr[low]<=arr[mid])
	          {
		        low=mid+1;
	         }
	        else if(arr[mid]<=arr[high])
	           {
		         high=mid-1;
	           }
	
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	/*Find the pivot element in the array*/
    pivot(arr,n);
	
	/*Now finding the key using the pivot element*/
	int key;
	cin>>key;
	if(arr[m]==key)
	 {
	 	cout<<m;
	 	
	 	return 0;
	 }
	 
	 else
	 {
	 	int bs_1=binarysearch(arr,0,m,key);
	 	int bs_2=binarysearch(arr,m+1,n,key);
	 	cout<<max(bs_1,bs_2);
	 }
	 
	 
	 
	return 0;
}
