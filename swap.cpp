#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=10,b=50,c=1,d=99;
    // int mini=min({a,b,c,d});
    // cout<<mini<<"\n";
    // int maxi=max({a,b,c,d});
    // cout<<maxi<<"\n";
    vector<int>k={10,2,45,11,133};
    for(int i=0;i<k.size();i++)
    {
      cout<<k[i]<<" ";
    }
    
     sort(k.begin() , k.end());
     cout<<"\n"<<"After Sorting"<<"\n";
     for(int i=0;i<k.size();i++)
    {
      cout<<k[i]<<" ";
    }
    return 0;

}