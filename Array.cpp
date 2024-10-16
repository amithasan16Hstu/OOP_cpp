#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int  z[n];
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
    for(i=0;i<n;i++)
    {
        cout<< z[i]<<" ";
    }
}