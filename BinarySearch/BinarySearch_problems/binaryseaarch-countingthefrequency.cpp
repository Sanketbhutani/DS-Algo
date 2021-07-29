/* This program is to find the frequency of any number in an  vector or array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n,target;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		v.push_back(val);
	}
	
	cin>>target;
	sort(v.begin(),v.end());
	vector<int>::iterator low,high; 
//	int count;
	//cin>>target;
	low=lower_bound(v.begin(),v.end(),target);
	high=upper_bound(v.begin(),v.end(),target);
	int count=0;
	count=(high-v.begin())-(low-v.begin());
	
	cout<<endl<<"The frequency of the number you eneterd is :"<<count;
}


-
