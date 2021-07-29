#include<bits/stdc++.h>
#define lll long long int
using namespace std;
vector<lll> v;


int main()
{
    lll n,k;
    cin>>n;

    
    for(lll i=0;i<n;i++)
    {
         int val;
         cin>>val;
         v.push_back(val);
    }
    cin>>k;
    
    sort(v.begin(),v.end());
    for(lll i=0;i<k;i++)
    {
        lll value1,value2;
        cin>>value1>>value2;
    vector<lll>::iterator low,high;
    low=lower_bound(v.begin(),v.end(),value1);
    high=upper_bound(v.begin(),v.end(),value2);
    lll l=low-v.begin();
    lll r=high-v.begin();
    
    cout<<r-l<<" ";
    }
    return 0;
}