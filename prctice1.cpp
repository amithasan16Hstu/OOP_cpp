#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>a(n);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cout<<"1"<<"\n";
        }
        else if(a[i]==2)
        {
            cout<<"2"<<"\n";
        }else if(a[i]==3)
        {
            cout<<"6"<<"\n";
        }else if(a[i]==4)
        {
            cout<<"4"<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }
    }
}