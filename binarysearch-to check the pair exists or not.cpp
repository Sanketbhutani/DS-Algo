#include<bits/stdc++.h>
#define mk make_pair
#define pb push_back
#define bs binary_search
using namespace std;

int main()
{
	pair<int,int>p{20,4};
	vector<pair<int,int>> vp;
	
	//input of the pairs
	vp.pb(mk(20,4));
	vp.pb(mk(20,4));
	vp.pb(mk(10,11));
	vp.pb(mk(13,14));
	vp.pb(mk(19,16));
	vp.pb(mk(20,19));
	
	//output of the pairs
	cout<<"First Value"<<"\t"<<"Second Value"<<endl;
	for(int i=0;i<vp.size(),i++)
	{
		cout<<vp[i].first<<"\t"<<vp[i].second<<endl;
	}
	cout<<endl;
	//sorting the vector first
	sort(vp.begin(),vp.end());
	
	//for checking that the pair exists or not
	
	if(bs(vp.begin(),vp.end(),p))
	{
		cout<<"YES !!!!!!  the pair exists";
	}
	else
	{
		cout<<"NO NOT AGAIN!!!!!!  the pair dosn't exists";
	}
	
}
