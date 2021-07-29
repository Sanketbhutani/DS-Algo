/*Binary search basic problem*/
/*Problem to find the certain element in the array*/



/*Program without using the stl library*/
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int search)
{
	int low=0,high=n-1;
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

int main()
{
	
	int n=8;
	int arr[8]={1,5,7,9,4,2,5,3};
	sort(arr,arr+n);
	//sorted array:1 2 3 4 5 5 7 9 
	int search;
	cout<<"enter the element to be searched : ";
	cin>>search;
	int location=binarysearch(arr,n,search);//first array shold be sorted
	cout<<location;
	return 0;
}







/*Now searching a element in binary search with the help of stl function*/
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//int n=8;
//	int arr[8]={1,5,7,9,4,2,5,3};
//	sort(arr,arr+n);
//	//sorted array:1 2 3 4 5 5 7 9 
//	int search;
//	cout<<"enter the element to be searched : ";
//	cin>>search;	
//	if(binary_search(arr,arr+n,search))
//	 {
//	 	cout<<endl<<"The element you searched exists in the array "<<search;
//	 }
//	 else
//	 {
//	 	cout<<endl<<"The element you searched dosent exists in the array ";
//	 }
//	
//	return 0;
//}

