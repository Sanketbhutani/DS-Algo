/*This is th program to find the number of rotation in the sorted array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
	
for(int i=0;i<n;i++)
  {
	cin>>arr[i];
  }
	                                                                                     /*In this program with to find the index of the mininmum element in the array
																						 ii will get in a conditin where it is smaller than the  previous elemnt and smaller 
																						 than the next element  */
 int high=n-1;
 int low=0;
while(high>=low)
    {
	 int mid= low+ (high-low)/2;
	 int next=(mid+1)%n;  //we are dividing it buy %n becuse to find to reduce overflow                                       
	 int prev=(mid+n-1)%n;
	 if((arr[mid]<=arr[next])&&(arr[mid]<=arr[prev]))    //return mid value
	 {
	 	cout<<mid;
	 	return 0;
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
	
	
	return 0;
}
