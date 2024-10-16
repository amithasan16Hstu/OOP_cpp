#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before Sort"<<"\n";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<"After Sort"<<"\n";

    sort(a.begin()+2, a.end()+3+1);
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }

}