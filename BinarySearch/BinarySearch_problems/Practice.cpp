#include<bits/stdc++.h>
using namespace std;

int n=13;

int bs(int s,int arr[])
{
	int low=0;
	int high=n-1;
	while(high>=low)
	   {
	   	int mid= low+(high-low)/2;
	   	
	   	if(arr[mid]==s)
	   	    return mid;
	   	    
	   	else if(arr[mid]<s)
	   	   low=mid+1;
	   	   
	   	else 
		   high=mid-1;   
	   	
	   	
	   }
	
	return -1;
	
	
	
}





int main()
{
	int arr[13]={10,20,5,6,4,2,7,2,4,67,6,4752,25};
	sort(arr,arr+n);
	
   int search;
   cout<"Enter a element to be searched from the array";
   cin>>search;
   int x=bs(search,arr);
   if(x==-1) cout<<"The Element not found";
   else cout<<"The Element founded at the index "<<x;
   return 0;
}
