/*Binary serach - dicrete binary serach - Factory Machines*/


 /*P: find the min time such that we can produce the prodect
 B c: give a time x , we can produce t in it or not*/
 
 //Problem statement
 
 /*A factory has n machines which can be used to make products. Your goal is to make a total of t products.

For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, and you can freely decide their schedule.

What is the shortest time needed to make t products?*/

//Sample Test case:
//3 7
//3 2 5
//it means the first machine can produce one product in 3 seconds then second machine can produce 1 products in 2 sec and 3 rd machine can produce 

#include<bits/stdc++.h>
#define lll long long int
using namespace std;
lll m;
lll T;
bool check(lll z, lll arr[])
{
	lll p=0;
	for(lll i=0;i<m;i++)
	{
		p+= (z/arr[i]);
		
		
	}
	return p>=T;
}


int bs(lll x,lll arr[])
{
	lll high=x;
	lll low=0;
	lll ans=-1;
	while(high>=low)
	{
		lll mid= low + (high-low)/2 ;
		if(check(mid,arr))
		{
			ans=mid;
			high=mid-1;
		}
		
		else
		{
			low=mid+1;
		}
	}
	
	return ans;
}


int main()
{
	lll n,t;
	cin>>n>>t;
	m=n;
	T=t;
	lll k[n];
	for(lll i=0;i<n;i++)
	{
		cin>>k[i];
	}
	
 lll x=bs(8000,k);
 cout<<x;
	return 0;
}

