#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,q;
    cin>>n;
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    
    sort(v.begin(),v.end());
    cin>>q;
    
    while(q--)
    {
       int val1;
       cin>>val1;
       vector<int>::iterator up;
       up=upper_bound(v.begin(),v.end(),val1);
       int idx=up-v.begin();
       int sum=0;
       sum=accumulate(v.begin(),v.begin()+(idx),sum);
       cout<<idx<<" "<<sum;
       cout<<endl;
    }
    
    return 0;
}
