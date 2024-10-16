#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pass,i,j;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(pass=0;pass<n;pass++)
    {
     int last =n-1-pass;
     for(j=0;j<=last-1;j++)
     {
         if(a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
         }
         for(int i=0;i<n;i++)
         
    {
        cout <<a[i]<<" ";
    }
     cout<<"\n";
     }
    }
    cout<<"After sort: ";
    for(int i=0;i<n;i++)

        cout <<a[i]<<" ";

    cout<<"\n";
}
