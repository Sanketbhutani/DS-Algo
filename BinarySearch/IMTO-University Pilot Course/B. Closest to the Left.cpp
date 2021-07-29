#include<bits/stdc++.h>
#define lll long long int
using namespace std;
vector<lll> v;


int main()
{
    lll n,k;
    cin>>n>>k;

    
    for(lll i=0;i<n;i++)
    {
         int val;
         cin>>val;
         v.push_back(val);
    }
    
    for(lll i=0;i<k;i++)
    {
        lll value;
        cin>>value;
    vector<lll>::iterator low;
    low=upper_bound(v.begin(),v.end(),value);
    lll j=low-v.begin();
    cout<<j<<endl;
    }
    return 0;
}