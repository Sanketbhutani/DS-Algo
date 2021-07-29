#include<bits/stdc++.h>

#define bs binary_search
#define pb push_back
#define mk make_pair
#define vpi vector<pair<int,int>>
using namespace std;
struct myCompare {
    bool operator()(const pair<int, int>& value, 
                                const int& key)
    {
        return (value.first < key);
    }
    bool operator()(const int& key, 
                    const pair<int, int>& value)
    {
        return (key < value.first);
    }
};

    int main()
    {
	vpi vp;
	
	//input of the pairs
	vp.pb(mk(20,4));
	vp.pb(mk(20,4));
	vp.pb(mk(10,11));
	vp.pb(mk(13,14));
	vp.pb(mk(19,16));
	vp.pb(mk(20,19));
	vp.pb(mk(3,13));
	//output of the pairs
	cout<<"First Value"<<"\t"<<"Second Value"<<endl;
	
	

	//sorting the vector first
	sort(vp.begin(),vp.end());
	//for checking that the key exists or not
	for(int i=0;i<vp.size();i++)
	{
		cout<<vp[i].first<<"\t"<<"\t"<<vp[i].second<<endl;
	}
		cout<<endl;
		
	//now to check wheather the key exists or not
	
	if(bs(vp.begin(),vp.end(),2,myCompare()))	
       {
           cout<<"YES Belive ME The KEY EXISTS IN THE VECTOR ! WOW!  ";
       }
     else
     {
      cout<<"BELIVE ME OR NOT THIS KEY EXIST NOT EXISTS :( PLEase don't Say woW";   
     }
	
	return 0;
    }
