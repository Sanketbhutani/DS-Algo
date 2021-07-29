//#include<bits/stdc++.h>
//using namespace std;
//
//int lowerbound(int arr[],int n,int element)
//{
//int low=0,high=n-1;
//while(high>low)
//{
//	int mid=(high-low)/2;
//	if(element<=arr[mid])
//	 {
//	 	high=mid;
//	 }
//	 else
//	 {
//	 	low=mid-1;
//	 }
//}
//
//if(low<n && arr[low]<=element ) low++;
//
//return low; 	
//}
////int upperbound(int arr[],int n,int element)
////{
////	int low=0,high=n-1;
////while(high>low)
////{
////	
////}	
//// } 
////
//
//int main()
//{
//	int n=8;
//	int arr[8]={3,1,5,7,2,4,6,9};
//	
//	sort(arr,arr+n);
//	
//	//sorted array is: 1 2 3 4 5 6 7 9
//	int element;
//	
//	cout<<"enter a number to find the lower bound and the upper bound of that number :";
//	cin>>element;
//	int x=lowerbound(arr,n,element);
//	cout<<x;
//	//cout<<endl<<"The upper bound of the array without using the stl function is : "<<upperbound(arr,n,element);	
//	
//	return 0;
//
////int lowerbound(int arr[],int n,int element)
////{
////int low=0,high=n-1;
////while(low<high)
////{
////	int mid= low + (high-low)/2;
////	if(element<=arr[mid])
////	 {
////	 	high=mid;
////	 }
////	 else
////	 {
////	 	low=mid+1;
////	 }
////}
////
////if(low<n && arr[low]<element ) low++;
//
//return low; 	
//}

#include<bits/stdc++.h>
using namespace std;
  
int upperbound(int arr[],int n,int element)
{
	int low=0,high=n-1;
while(high>low)
{
	int mid=low+(high-low)/2;
	if(element>=arr[mid])
	{
		low=mid+1;
	}
	else high=mid;
	
	if(low<n && arr[low]>=element) low++;
}
return low;	
 } 


int main()
{
	int n=10;
	int arr[10]={2,3,4,4,5,6,6,7,8,9};
	
	sort(arr,arr+n);
	
	////sorted array is: 1 2 3 4 5 5 6 9
	int element;
	
	//cout<<"enter a number to find the lower bound and the upper bound of that number :";
	cin>>element;
	int x=upperbound(arr,n,element);
	if(x>=n) cout<<"The targeted element dosent exists"<<endl;
	else cout<<x<<endl;
	//cout<<endl<<"The upper bound of the array without using the stl function is : "<<upperbound(arr,n,element);	
	
	return 0;
}
