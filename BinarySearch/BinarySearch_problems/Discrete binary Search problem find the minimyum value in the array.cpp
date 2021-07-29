#include<bits/stdc++.h>
using namespace std;
/*
P: Find the minimum element s from an array
BC: Given a nummber x ,check if it is minnimum or not 
*/
/*first determine the range */
int arr[8]={6,7,9,4,3,76,45,3};//array declared globally

int n=8;
bool check(int x)
{
	for(int i=0;i<x;i++)
	 {
	 	if(arr[i]<x)
	 	     return false;                                                      
	 }
	 return true;
}


//int main()
//{
//	for(int ans=0;ans<=100000;ans++)   //time comlexity : O(ans*n)
//	  {
//	  	if(check(ans))
//	  	 {
//	  	 	cout<<ans;
//	  	 	return 0;
//		 }
//	  	}
//	
//	return 0;
//}


int main()
{
	int low=0;
	int high=1000;
	
	while(high>=low)
	{
		int mid=low+(high-low)/2;
		if(check(mid))
		 {
		 	cout<<mid;
		 	high=mid-1;
		 }
		 else{
		 	low=mid+1;
		 }
	}

	return 0;
}


/*Optimise solution*/

