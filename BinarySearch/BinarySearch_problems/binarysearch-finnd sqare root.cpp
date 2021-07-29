#include<bits/stdc++.h>
using namespace std;

int fsr(int n)
{
	
  int start=1;
  int end=n;
  int ans=0;
  while(start<=end)
  {
  	int mid=start + (end-start)/2;
  	if(mid*mid <= n)
  	  {
  	  	ans=mid;
  	  	start=mid+1;
		}
		
	 else{
	 	end=mid-1;
	 }	
  }
  return ans;
}


int main()
{
	int n;
	cin>>n;
	int x= fsr(n);
	cout<<x;
    return 0;
}
		
	
